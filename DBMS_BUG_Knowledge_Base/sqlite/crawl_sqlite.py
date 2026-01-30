import requests
from bs4 import BeautifulSoup
import re
from icecream import ic
import json
import time
import os
from pathlib import Path
from loguru import logger
import csv
current_file = Path(__file__).resolve()  # 获取当前文件的绝对路径
current_dir = current_file.parent  # 获取父目录

def do_crawl_sqlite_ticket(url):
    '''
    从SQLite的工单页面提取工单信息
    e.g. https://sqlite.org/src/info/bd8c280671ba44a7
    参数:
    url (str): SQLite工单页面的URL

    返回:
    dict: 包含工单信息的字典，键为信息类型，值为提取到的内容
    '''
    # 设置请求头，模拟浏览器访问
    headers = {
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36"
    }
    
    try:
        # 发送请求获取页面内容
        response = requests.get(url, headers=headers, timeout=10)
        response.raise_for_status()  # 检查请求是否成功
        # soup = BeautifulSoup(response.text, 'html.parser')
        soup = BeautifulSoup(response.text, 'lxml')
        
        # 提取所需信息
        result = {
            "url": url  # 直接使用输入的URL
        }
        # 2. 提取Ticket Hash（id为"hash-tk"的span标签内容）
        hash_tag = soup.find('span', id='hash-tk')
        result['Ticket Hash'] = hash_tag.get_text(strip=True) if hash_tag else "未找到Ticket Hash"
        
        # 3. 提取Title（表格中"Title:"对应的单元格内容）
        title_row = soup.find('td', class_='tktDspLabel', string=re.compile(r'Title:'))
        if title_row:
            title_value = title_row.find_next_sibling('td', class_='tktDspValue')
            result['Title'] = title_value.get_text(strip=True) if title_value else "未找到Title"
        else:
            result['Title'] = "未找到Title标签"
        
        # 4. 提取Type、Severity、Priority、Subsystem（通过标签文本匹配）
        target_keys = ['Type', 'Severity', 'Priority', 'Subsystem']
        for key in target_keys:
            # 查找包含关键词的标签（如"Type:"）
            label_cell = soup.find('td', class_='tktDspLabel', string=re.compile(f'{key}:'))
            if label_cell:
                value_cell = label_cell.find_next_sibling('td', class_='tktDspValue')
                result[key] = value_cell.get_text(strip=True) if value_cell else f"未找到{key}"
            else:
                result[key] = f"未找到{key}标签"
        
        # 5. 提取Created（取第一行时间，忽略"x years ago"部分）
        created_label = soup.find('td', class_='tktDspLabel', string=re.compile(r'Created:'))
        if created_label:
            created_value = created_label.find_next_sibling('td', class_='tktDspValue')
            if created_value:
                # 提取第一行时间文本（如"2019-12-08 00:23:08"）
                created_text = created_value.get_text().split('<br/>')[0].strip()
                result['Created'] = created_text
            else:
                result['Created'] = "未找到Created值"
        else:
            result['Created'] = "未找到Created标签"
        
        # 6. 提取Version Found In
        version_label = soup.find('td', class_='tktDspLabel', string=re.compile(r'Version\s+Found\s+In:'))
        if version_label:
            version_value = version_label.find_next_sibling('td', class_='tktDspValue')
            result['Version Found In'] = version_value.get_text(strip=True) if version_value else "未找到Version Found In"
        else:
            result['Version Found In'] = "未找到Version Found In标签"
        
        
        # 7. 提取User Comments（包含pre标签内的代码和文本）
        comments_label = soup.find('td', class_='tktDspLabel', string=re.compile(r'User Comments:'))
        if comments_label:
            # 找到评论所在的单元格（父行的下一个单元格）
            comments_row = comments_label.find_parent('tr').find_next_sibling('tr')
            if comments_row:
                comments_cell = comments_row.find('td', class_='tktDspValue')
                if comments_cell:
                    # 提取所有文本，保留pre标签内的代码格式（去除多余空行）
                    comments_text = []
                    for content in comments_cell.contents:
                        # 处理文本节点和标签内文本
                        text = content.get_text() if hasattr(content, 'get_text') else str(content)
                        comments_text.append(text.strip())
                    # 合并并清洗文本
                    result['User Comments'] = '\n'.join([t for t in comments_text if t])
                else:
                    result['User Comments'] = "未找到评论内容"
            else:
                result['User Comments'] = "未找到评论行"
        else:
            result['User Comments'] = "未找到User Comments标签"
        result['origin_html'] = response.text
        
        return result
        
    except Exception as e:
        logger.error(f"do_crawl_sqlite_ticket url:{url} 爬取失败：{str(e)}")
        return f"do_crawl_sqlite_ticket url:{url} 爬取失败：{str(e)}"
def crawl_sqlite_ticket_infos_from_txt():
    """
    从 ticket_urls.txt文件中读取URL, 然后调用 do_crawl_sqlite_ticket函数爬取工单信息
    """
    with open(os.path.join(current_dir,"ticket_urls.txt"),"r") as f:
        for target_url in f.readlines():
            target_url = target_url.strip()
            if target_url == "":
                continue
            logger.info(f"正在处理{target_url}")
            # 初始化 ticket_output_folder
            ticket_output_folder = "ticket_output"
            ticket_output_folder_path = os.path.join(current_dir,ticket_output_folder)
            # 获取https://sqlite.org/src/tktview/bd8c280671ba44a7 中的 bd8c280671ba44a7
            ticket_hash = target_url.split("/")[-1]
            # 防止重复爬取
            ticket_output_folder_path = os.path.join(ticket_output_folder,f"ticket_info_{ticket_hash}.json")
            if os.path.exists(ticket_output_folder_path):
                logger.info(f"do_crawl_sqlite_ticket url:{target_url} 已存在，跳过爬取")
                continue
            
            # target_url = "https://sqlite.org/src/tktview/bd8c280671ba44a7"
            

            ic(ticket_output_folder_path)
            # 执行爬取
            ticket_info = do_crawl_sqlite_ticket(target_url)
            
            # 打印结果
            filename = ""
            if isinstance(ticket_info, dict):
                print("爬取结果：")
                for key, value in ticket_info.items():
                    print(f"{key}: {value}")
                filename = f"ticket_info_{ticket_hash}.json"
            else:
                print(ticket_info)
                ticket_info = {
                    "url": target_url  # 直接使用输入的URL
                }
                filename = f"fail_ticket_info_{ticket_hash}.json"
            output_file_path = os.path.join(ticket_output_folder, filename)
            with open(output_file_path, "w", encoding="utf-8") as f:
                    json.dump(ticket_info, f, ensure_ascii=False, indent=4)


def crawl_sqlite_ticket_infos_from_csv():
    """crawl_sqlite_ticket_infos_from_csv 从csv文件中读取URL, 然后调用 do_crawl_sqlite_ticket函数爬取工单信息
    """
    with open(os.path.join(current_dir,"sqlite_core_crashes.csv"),"r") as f:
        reader = csv.reader(f)
        increment = -1
        for row in reader:
            
            headers_dict = []
            if increment == -1:
                # 第一行是headers
                headers_dict = {header:index for index,header in enumerate(row)}
                increment=0
                continue
            
            target_url = row[-1]
            logger.info(f"正在处理{target_url}")
            # 初始化 ticket_output_folder
            ticket_output_folder = "ticket_output"
            ticket_output_folder_path = os.path.join(current_dir,ticket_output_folder)
            # 获取https://sqlite.org/src/tktview/bd8c280671ba44a7 中的 bd8c280671ba44a7
            ticket_hash = target_url.split("/")[-1]
            # 防止重复爬取
            ticket_output_folder_path = os.path.join(ticket_output_folder,f"ticket_info_{ticket_hash}.json")
            if os.path.exists(ticket_output_folder_path):
                logger.info(f"do_crawl_sqlite_ticket url:{target_url} 已存在，跳过爬取")
                continue
            else:
                increment += 1
                if increment % 10 == 0:
                    time.sleep(10)
            ticket_info = do_crawl_sqlite_ticket(target_url)
            if isinstance(ticket_info, dict):
                print("爬取结果：")
                for key, value in ticket_info.items():
                    print(f"{key}: {value}")
                filename = f"ticket_info_{ticket_hash}.json"
            else:
                print(ticket_info)
                ticket_info = {
                    "url": target_url  # 直接使用输入的URL
                }
                filename = f"fail_ticket_info_{ticket_hash}.json"
            output_file_path = os.path.join(ticket_output_folder, filename)
            with open(output_file_path, "w", encoding="utf-8") as f:
                json.dump(ticket_info, f, ensure_ascii=False, indent=4)
            
def crawl_sqlite_core_crashes(url):
    """
    从sqlite.org 核心崩溃页面中提取数据
    并保存为csv文件
    """
    # 设置请求头，模拟浏览器访问
    headers = {
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36"
    }
    
    try:
        # 发送GET请求获取页面内容
        response = requests.get(url, headers=headers, timeout=10)
        response.raise_for_status()  # 检查请求是否成功
        soup = BeautifulSoup(response.text, 'html.parser')
        
        # 定位表格（页面中唯一的核心表格）
        table = soup.find('table', class_='sortable')
        if not table:
            return "未找到表格内容"
        
        # 提取表头（th标签）
        headers = [th.get_text(strip=True) for th in table.find_all('th')]
        headers.append('link')
        # 提取表格行数据（tr标签，跳过表头行）
        rows = []
        for tr in table.find_all('tr')[1:]:  # 从第二行开始是数据行
            # 提取每行的单元格内容（td标签）
            tds = tr.find_all('td')
            if len(tds) == len(headers)-1:  # 确保单元格数量与表头一致
                # 获取td 里面的链接
                row = [td.get_text(strip=True) for td in tds]
                # 提取链接
                link = tds[0].find('a')
                if link:
                    logger.info(link.get('data-href'))  
                    # 得到完整的链接
                    row.append(f"https://www.sqlite.org{link.get('data-href')}")
                rows.append(row)

        # 保存为CSV文件
        with open('sqlite_core_crashes.csv', 'w', newline='', encoding='utf-8') as f:
            writer = csv.writer(f)
            writer.writerow(headers)  # 写入表头
            writer.writerows(rows)    # 写入数据行
        
        return f"成功爬取 {len(rows)} 条数据，已保存至 sqlite_core_crashes.csv"
    
    except Exception as e:
        return f"爬取失败：{str(e)}"

def test():
    target_url = "https://sqlite.org/src/info/bd8c280671ba44a7"
    result = do_crawl_sqlite_ticket(target_url)
    print(result)
if __name__ == "__main__":
    # 目标页面URL
    # crawl_sqlite_ticket_infos_from_txt()

    # target_url = "https://www.sqlite.org/src/rptview/7"
    # result = crawl_sqlite_core_crashes(target_url)
    # print(result)
    # test()
    crawl_sqlite_ticket_infos_from_csv()