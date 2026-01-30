

## 遍历文件夹下所有文件 /home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/merge_all_feature_seeds
import os
from icecream import ic
max_stmts=8
def simplify_seed(content):
    # content小于 max_stmts 行直接跳过
    if len(content.splitlines()) < max_stmts:
        return None
     ## 按照首个 token类型分类：create，select，with，insert，等
    res=[]
    previous_type=""
    prev_line=""
    for line in content.splitlines():
        line=line.strip()
        # 跳过空行
        if not line:
            continue
        # 跳过跨行语句
        if not line.endswith(";"):
            prev_line=line
        else:
            if prev_line!="":
                line=prev_line+"\n"+line
            prev_line=""
        if line:
            token=line.split()[0].lower()
            if token != "select" and token != "insert":
                res.append(line)
            elif token=="insert":
                if previous_type == "create":
                    res.append(line)
            else :
                if previous_type!='select':
                    res.append(line)
            # map[token].append(line)
            previous_type=token
    if len(res)> max_stmts:
        print(f"精简过后:len>{max_stmts}")
        print("res:",res)
        return None
    # res 中 stmt按照换号间隔返回
    return "\n".join(res)

    ## 保留所有的 create，保留其中一个 insert，最后一个 select



if __name__ == '__main__':
    
    ## 遍历文件夹下所有文件（包括子文件夹） /home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/merge_all_feature_seeds
    db_names = ['clickhouse','duckdb','virtuoso','monetdb']
    db_name='monetdb'
    folder_path = f'/home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/merge_all_feature_seeds/{db_name}'
    for filename in os.listdir(folder_path):
        file_path = os.path.join(folder_path, filename)
        if os.path.isfile(file_path):
            print(f"handing {file_path}...")
            # 打开文件
            with open(file_path, 'r') as f:
                content = f.read()
                # 处理文件
                ic(content)
                simplified_content=simplify_seed(content)
                if simplified_content:
                    ic(simplified_content)
                    # 输出到/home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/merge_all_feature_seeds/{db_name}/simplify_seed/底下
                    simplify_folder_path = f'/home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/merge_all_feature_seeds/{db_name}/simplify_seed'
                    if not os.path.exists(simplify_folder_path):
                        os.makedirs(simplify_folder_path)
                    simplify_file_path = os.path.join(simplify_folder_path, f"smp_{filename}")
                    with open(simplify_file_path, 'w') as f:
                        f.write(simplified_content)
            # exit(0)

