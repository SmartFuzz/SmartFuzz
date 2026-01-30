import json
import os
from icecream import ic

def analyze_path(abs_filename,ouput_dir='/tmp/fuzz'):

    filename = os.path.basename(abs_filename)
    path_attributes = {}
    path_attributes['current_path']= abs_filename
    parts = filename.split(',')
    for part in parts:
        if ':' in part:
            key, value = part.split(':', 1)  # 使用maxsplit=1确保值中包含的冒号不会被分割
            path_attributes[key] = value
    if 'sync' in path_attributes:
        sync = path_attributes['sync']
    else:
        sync = os.path.basename(os.path.dirname(os.path.dirname(crash_abspath)))
    ic(sync)
    if 'src' in path_attributes:
        src_ids = path_attributes['src'].split('+')
        parent_path_prefixs = [os.path.join(output_dir,sync,'queue',f"id:{item}") for item in src_ids]
        
        # path_attributes['parent_paths'] = [find_files_with_prefix(os.path.dirname(item),os.path.basename(item)) for item in parent_path_prefixs]
        path_attributes['parent_paths'] =[result for item in parent_path_prefixs 
            if (result := find_files_with_prefix(os.path.dirname(item), os.path.basename(item))) is not None]
    return path_attributes

# 根据绝对路径前缀搜索文件
def find_files_with_prefix(root_dir, prefix):
    """
    查找指定目录下所有以给定前缀开头的文件的绝对路径
    
    参数:
        root_dir: 要搜索的根目录
        prefix: 文件名前缀
        
    返回:
        符合条件的文件绝对路径列表
    """
    # 检查目录是否存在
    if not os.path.isdir(root_dir):
        # raise ValueError(f"目录不存在: {root_dir}")
        ic(f"目录不存在: {root_dir}")
        return None
    
    # 存储结果的列表
    
    # 遍历目录中的所有条目
    for entry in os.listdir(root_dir):
        entry_path = os.path.join(root_dir, entry)
        # 检查是否为文件且文件名以指定前缀开头
        if os.path.isfile(entry_path) and entry.startswith(prefix):
            # 获取绝对路径并添加到结果列表
            return os.path.abspath(entry_path)
    
    return None
# def find_parent_seed(crash_abspath, origin_path_result):
#     if crash_abspath in is_visit:
#         ic("is visit",crash_abspath)
#         return
#     else :
#         is_visit.append(crash_abspath)
#     res=analyze_path(crash_abspath)
#     ic(res)
#     if 'src' not in res:
#         origin_path_result.append(crash_abspath)
#         return 
#     if 'parent_paths' in res:
#         for parent_path in res['parent_paths']:
#             # 递归找parent的 parent
#             find_parent_seed(parent_path,origin_path_result)
def find_parent_seed(crash_abspath, origin_path_result):
    stack = [crash_abspath]
    is_visit=[]
    while stack:
        current_path = stack.pop()
        
        if current_path in is_visit:
            ic("is visit", current_path)
            continue
        else:
            is_visit.append(current_path)
            
        res = analyze_path(current_path)
        ic(res)
        
        if 'src' not in res:
            origin_path_result.append(current_path)
            continue
            
        if 'parent_paths' in res:
            # 将父路径添加到栈中，注意顺序以保证处理顺序与递归一致
            for parent_path in reversed(res['parent_paths']):
                stack.append(parent_path)    
if __name__ == "__main__":
    # 遍历 
    output_dir = "/tmp/fuzz"
    crash_abspaths=[
        # '/tmp/fuzz/monetdb_20250904_77744e/queue/id:013554,src:007759+009570,time:30890874,execs:483679,op:libmonetdb_mutator.so,pos:0',
                #    '/tmp/fuzz/monetdb_20250904_77744e/queue/id:000205,sync:af641c47-2,src:000010',
                   '/tmp/fuzz/monetdb_20250904_77744e/queue/id:000288,sync:af641c47-2,src:001112,+cov',
                   '/tmp/fuzz/3a97b8f6-a/queue/id:000010,src:000000+000007,time:1030,execs:72,op:libmysql_mutator.so,pos:0,+cov',
                   '/tmp/fuzz/3a97b8f6-a/queue/id:000005,time:0,execs:0,orig:5.txt'
                   ]
    for crash_abspath in crash_abspaths:
        # res=analyze_path(crash_abspath)
        origin_path_result=[]
        find_parent_seed(crash_abspath,origin_path_result)
        ic(origin_path_result)
        input("press enter")
        
        # 提取里面 crash_filename 里面的结构，先按照','分隔，然后再根据':'获取他的属性名和值
        
    