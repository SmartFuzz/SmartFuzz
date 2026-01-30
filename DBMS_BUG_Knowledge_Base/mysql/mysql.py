from concurrent.futures import as_completed
from concurrent.futures.thread import ThreadPoolExecutor
from datetime import timedelta, datetime
from operator import itemgetter

import requests
import os
import json
import re
import json
from bs4 import BeautifulSoup
import csv

current_dir = os.path.dirname(os.path.abspath(__file__))

def get_bugs(time_mode):
    if time_mode not in ['update', 'date']:
        print(f"error: time_mode {time_mode} wrong.")
        return []

    url = 'https://bugs.mysql.com/search.php'
    statuses = ["Closed", "Verified"]
    params = {
        "cmd": "display",
        "status[]": "",
        "order_by": "",
        "direction": "DESC",
        "limit": "All",
        "mine" : "0",
        "begin" : "0"
    }

    if time_mode == 'update':
        params["order_by"] = "mtime"
    elif time_mode == 'date':
        params["order_by"] = "date"

    headers = {
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36",
        "Referer": "https://bugs.mysql.com/"
    }

    session = requests.Session()
    session.headers.update(headers)

    results = []
    for status in statuses:
        params["status[]"] = status
        next_status = False
        page_cnt = 0
        target_time = datetime.today() - timedelta(days=5 * 365)

        while not next_status:
            # 获取列表页
            response = session.get(url, params=params, timeout=30)
            response.raise_for_status()
            soup = BeautifulSoup(response.text, 'html.parser')

            content_div = soup.find('div', id='content')
            bug_list_table = content_div.find('table', class_='buglist')
            rows = bug_list_table.find_all('tr')

            bug_links = []  # 存储待抓取的 bug 链接和元数据

            for row in rows:
                class_list = row.get('class', [])
                if status.lower() not in (cls.lower() for cls in class_list):
                    continue

                tds = row.find_all('td')
                link = tds[0].find('a', href=True)
                link_href = link['href']
                link_text = link.text.strip()

                # date
                date_info = list(tds[1].stripped_strings)
                date_part = date_info[0]  # '2003-05-03'
                time_part = date_info[1]  # '6:19'
                # 补全为标准格式
                datetime_str = f"{date_part} {time_part}"
                date = datetime.strptime(datetime_str, '%Y-%m-%d %H:%M')

                # last update time
                update_info = list(tds[2].stripped_strings)
                update_date_part = update_info[0]  # '2003-05-03'
                update_time_part = update_info[1]  # '6:19'
                # 补全为标准格式
                update_time_str = f"{update_date_part} {update_time_part}"
                last_update = datetime.strptime(update_time_str, '%Y-%m-%d %H:%M')

                # ✅ 先判断时间，只保留符合条件的
                if locals()[time_mode] < target_time:
                    next_status = True
                    break

                # ✅ 先判断类型
                bug_type = tds[3].text.strip()
                if 'Documentation' in bug_type:
                    continue

                # ✅ 只收集符合条件的链接
                row_data = {
                    'id': link_text,
                    'link': 'https://bugs.mysql.com/' + link_href,
                    'date': date.strftime('%Y-%m-%d %H:%M:%S'),
                    'update': last_update.strftime('%Y-%m-%d %H:%M:%S'),
                    'type': bug_type,
                    'status': tds[4].text.strip(),
                    'severity': tds[5].find('span').text.strip(),
                    'version': tds[6].text.strip(),
                    'OS': tds[7].text.strip(),
                    'CPU': tds[8].text.strip(),
                    'summary': tds[9].text.strip(),
                    'text': ""
                }
                bug_links.append(row_data)

            # ✅ 并发获取 text
            with ThreadPoolExecutor(max_workers=10) as executor:
                future_to_row = {
                    executor.submit(get_initial_message_text, row['link'], session): row
                    for row in bug_links
                }
                for future in as_completed(future_to_row):
                    row = future_to_row[future]
                    try:
                        row['text'] = future.result()
                        results.append(row)
                    except Exception as e:
                        print(f"获取正文失败 {row['link']}: {e}")

            # 分页
            page_cnt += 1
            params['begin'] = str(page_cnt * 1000)

        # 最后排序
    sorted_results = sorted(results, key=itemgetter(time_mode), reverse=True)
    return sorted_results

def get_initial_message_text(bug_url, session):
    try:
        response = session.get(bug_url, timeout=10)
        response.raise_for_status()
        soup = BeautifulSoup(response.text, 'html.parser')

        content_area = soup.find(id='content')
        if not content_area:
            return "Error: Cannot find content area."

        first_comment = content_area.find(class_='comment')
        if not first_comment:
            return "Error: No element with class 'comment' found."

        note_element = first_comment.find(class_='note')
        if not note_element:
            return "Error: No element with class 'note' found inside 'comment'."

        lines = [line.strip() for line in note_element.get_text(separator='\n').splitlines()]
        return '\n'.join([line for line in lines if line])

    except Exception as e:
        return f"Error: {e}"


def bug_filter(bugs,keywords):
    view_bug = []
    for bug in bugs:
        summary = bug.get("summary", "").lower()
        if any(keyword in summary for keyword in keywords):
            view_bug.append(bug)
    return view_bug

def to_csv(bugs,csv_file):
    with open(csv_file, 'w', newline='', encoding='utf-8') as f:
        writer = csv.writer(f)
        writer.writerow(["序号", "MySQL中ID","链接",
                         "创建日期","最近更新","类型",
                         "状态","严重性","版本",
                         "操作系统","CPU架构","摘要"])
        for idx,data in enumerate(bugs):
            writer.writerow( [idx+1, data['id'], data['link'],
                              data['date'],data['update'],data['type'],
                              data['status'], data['severity'], data['version'],
                              data['OS'],data['CPU'],data['summary']])


def extract_sql_from_text(text):
    sql_pattern = re.compile(r"""
            (?:
                # ========== DDL: 表、索引、视图、数据库 ==========
                (?:CREATE\s+(?:TABLE|INDEX|VIEW|PROCEDURE|FUNCTION|TRIGGER|EVENT|DATABASE|SCHEMA)\b[^;]*?;) |
                (?:ALTER\s+(?:TABLE|PROCEDURE|FUNCTION|EVENT|DATABASE|SCHEMA)\b[^;]*?;) |
                (?:DROP\s+(?:TABLE|INDEX|VIEW|PROCEDURE|FUNCTION|TRIGGER|EVENT|DATABASE|SCHEMA)\b[^;]*?;) |
                (?:RENAME\s+TABLE\b[^;]*?;) |
                (?:TRUNCATE\s+(?:TABLE\s+)?\w[^;]*?;) |

                # ========== DML: 数据操作 ==========
                (?:(?:INSERT|REPLACE|UPDATE|DELETE)\b[^;]*?;) |
                (?:SELECT\b[^;]*?(?:FOR\s+UPDATE|LOCK\s+IN\s+SHARE\s+MODE)?\s*;) |

                # ========== 事务控制 ==========
                (?:START\s+TRANSACTION\s*;) |
                (?:BEGIN\s*(?:WORK|TRANSACTION)?\s*;) |
                (?:COMMIT\s*(?:WORK)?(?:\s+AND\s+(?:NO\s+)?CHAIN)?\s*;) |
                (?:ROLLBACK\s*(?:WORK)?(?:\s+AND\s+(?:NO\s+)?CHAIN)?\s*;) |
                (?:SAVEPOINT\s+\w+\s*;) |
                (?:ROLLBACK\s+TO\s+(?:SAVEPOINT\s+)?\w+\s*;) |
                (?:RELEASE\s+SAVEPOINT\s+\w+\s*;) |

                # ========== DCL: 权限控制 ==========
                (?:GRANT\b[^;]*?;) |
                (?:REVOKE\b[^;]*?;) |
                (?:CREATE\s+USER\b[^;]*?;) |
                (?:DROP\s+USER\b[^;]*?;) |
                (?:ALTER\s+USER\b[^;]*?;) |
                (?:SET\s+PASSWORD\b[^;]*?;) |

                # ========== 变量与配置 ==========
                (?:SET\s+(?:GLOBAL|SESSION|@|@@)?\s*[a-zA-Z0-9_.$@]+\s*=?[^;]*?;) |
                (?:USE\s+\w+\s*;) |
                (?:SHOW\b[^;]*?;) |

                # ========== 预处理语句 ==========
                (?:PREPARE\s+\w+\s+FROM\s+[^;]*?;) |
                (?:EXECUTE\s+\w+(?:\s+USING\s+[^;]*?)?\s*;) |
                (?:DEALLOCATE\s+PREPARE\s+\w+\s*;) |

                # ========== 存储过程/函数中的语句 ==========
                (?:CALL\s+\w+\([^;]*?\)\s*;) |
                (?:DO\s+[^;]*?;) |
                (?:LOAD\s+DATA\b[^;]*?;) |
                (?:HANDLER\b[^;]*?;)
            )
        """, re.IGNORECASE | re.DOTALL | re.VERBOSE)

    matches = sql_pattern.finditer(text)
    return [match.group(0).strip() for match in matches if match.group(0).strip()]

def extract_bug_description(text: str) -> str:
    """
    提取 'Describe the bug' 和下一个 section（如 Environment, FastReproduce）之间的内容
    遇到新一行以 'Environment' 或 'FastReproduce' 开头时停止。
    """
    if not text or not isinstance(text, str):
        return ""

    lines = text.splitlines()
    description_lines = []
    in_description = False

    start_patterns = [
        r"description[\s-]",
    ]
    end_patterns = [
        r"environment",
        r"how[\s-]+to[\s-]+repeat",
    ]

    start_regex = re.compile("|".join(start_patterns), re.IGNORECASE)
    end_regex = re.compile("|".join(end_patterns), re.IGNORECASE)

    for line in lines:
        stripped = line.strip()

        # 检查是否进入 "Describe the bug" 段
        if not in_description and start_regex.search(stripped):
            in_description = True
            continue  # 不收集标题行本身

        # 检查是否进入下一个 section
        if in_description and end_regex.search(stripped):
            break  # 终止提取

        # 收集描述内容
        if in_description:
            description_lines.append(line)

        # 返回去除了首尾空白的内容
    return "\n".join(description_lines).strip()

def save_bugs_json(bugs, base_dir):
    bugs_dir = os.path.join(base_dir, "bugs")
    os.makedirs(bugs_dir, exist_ok=True)

    for bug in bugs:
        number = bug['id']
        print(number)
        file_path = os.path.join(bugs_dir, f"bug_{number}.json")
        description = extract_bug_description(bug['text'])
        bug_report = {
            "url": bug["link"],
            "title": bug["summary"],
            "vulnerable_database": bug["type"],  # 你可能需要从 body 或 label 中提取
            "date": bug["date"],
            "vulnerable_version": bug["version"],
            "description": description,
            "poc": extract_sql_from_text(bug["text"])
        }

        with open(file_path, 'w', encoding='utf-8') as f:
            json.dump(bug_report, f, indent=4, ensure_ascii=False)



if __name__ == '__main__':
    bugs = get_bugs('date')
    print(1)
    to_csv(bugs,'mysql_bugs.csv')
    save_bugs_json(bugs, current_dir)

    keywords = ['view']
    view_bugs = bug_filter(bugs,keywords)
    to_csv(view_bugs,'mysql_bugs_about_view.csv')