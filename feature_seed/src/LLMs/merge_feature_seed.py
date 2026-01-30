import json
import glob
import os
import re
from icecream import ic
from pathlib import Path
def getFolderName(file):
    # 获取所在文件夹路径
    dir_path = os.path.dirname(file)
    # 提取文件夹名（最后一级目录名）
    folder_name = os.path.basename(dir_path)
    return folder_name

def normalize_data(data):
    new_data = []
    for item in data:
        parts = item.split(";")
        for part in parts:
            stmt = part.strip()
            if stmt:
                new_data.append(stmt+ ";")
    return new_data
def merge_single_feature():
    db_names = ['clickhouse','duckdb','virtuoso','monetdb']
    types = ['operator','datatype','function','keyword']
    # type = 'operator'
    # 读取/home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/
    os.chdir(os.path.dirname(__file__))
    for db_name in db_names:
        for type in types:
            base_dir = Path("../prepare/FeatureKnowledgeBaseSeed")
            json_dir = base_dir / db_name / type
            json_files = list(json_dir.glob("*.json"))
            os.makedirs(base_dir/'merge_seeds'/db_name, exist_ok=True)
            ## 新建输出的文件夹
            for json_file in json_files:
                # json_file 是 Path 对象
                # print(json_file)
                # ic(json_file.name)
                with open(json_file, 'r') as f:
                    data = json.load(f)
                    # ic(data)
                    normalized_data = normalize_data(data)
                    clean_file_name = re.sub(r'[^\w.]', '_', json_file.name) 
                    merge_filename=f"{type}_{clean_file_name}"
                    merge_filename= merge_filename[:150]
                    with open(base_dir/'merge_seeds'/db_name/merge_filename, 'w') as f:
                        f.write("\n".join(normalized_data))          
if __name__ == '__main__':
    # db_names = ['clickhouse','duckdb','virtuoso','monetdb']
    # types = ['operator','datatype','function','keyword']
    # # type = 'operator'
    # # 读取/home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/
    # os.chdir(os.path.dirname(__file__))
    # for db_name in db_names:
    #     for type in types:
    #         base_dir = Path("../prepare/FeatureKnowledgeBaseSeed")
    #         json_dir = base_dir / db_name / type
    #         json_files = list(json_dir.glob("*.json"))
    #         os.makedirs(base_dir/'merge_all_feature_seeds'/db_name, exist_ok=True)
    #         ## 新建输出的文件夹
    #         for json_file in json_files:
    #             # json_file 是 Path 对象
    #             # print(json_file)
    #             # ic(json_file.name)
    #             with open(json_file, 'r') as f:
    #                 data = json.load(f)
    #                 # ic(data)
    #                 normalized_data = normalize_data(data)
    #                 clean_file_name = re.sub(r'[^\w.]', '_', json_file.name) 
    #                 merge_filename=f"{type}_{clean_file_name}"
    #                 merge_filename= merge_filename[:150]
    #                 with open(base_dir/'merge_all_feature_seeds'/db_name/merge_filename, 'w') as f:
    #                     f.write("\n".join(normalized_data))
    # db_names = ['clickhouse','duckdb','virtuoso','monetdb']
    db_names = ['monetdb']
    
    types = ['simpleSeed']
    # type = 'operator'
    # 读取/home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/
    os.chdir(os.path.dirname(__file__))
    for db_name in db_names:
        for type in types:
            base_dir = Path("../prepare/FeatureKnowledgeBaseSeed")
            json_dir = base_dir / db_name / type
            json_files = list(json_dir.glob("*.json"))
            to_merge_dir_name='simpleSeed'
            os.makedirs(base_dir/to_merge_dir_name/db_name, exist_ok=True)
            ## 新建输出的文件夹
            for json_file in json_files:
                # json_file 是 Path 对象
                # print(json_file)
                # ic(json_file.name)
                with open(json_file, 'r') as f:
                    data = json.load(f)
                    # ic(data)
                    normalized_data = normalize_data(data['sql_array'])
                    clean_file_name = re.sub(r'[^\w.]', '_', json_file.name) 
                    merge_filename=f"{2}_{clean_file_name}"
                    merge_filename= merge_filename[:150]
                    with open(base_dir/to_merge_dir_name/db_name/merge_filename, 'w') as f:
                        f.write("\n".join(normalized_data))        
            
            # 获取 ../prepare/FeatureKnowledgeBaseSeed/{db_name}/{type}/*.json
            # json_files = glob.glob(f"../prepare/FeatureKnowledgeBaseSeed/**/*.json",recursive=True)
            # for file in json_files:
            #     ic(file)
            #     if file.find(db_name) == -1:
            #         continue
            #     type_prefix=getFolderName(file)
            #     file_name = os.path.basename(file)
            #     merge_name = f"{type_prefix}_{file_name}.txt"
            #     ic(merge_name)
            #     # 去除 merge_name文件名的特殊字符
            #     clean_file_name = re.sub(r'[^\w.]', '_', merge_name) 
            #     with open(file, 'r') as f:
            #         data = json.load(f)
            #         ic(data)
            #         # 每个文件检查是否有多个 ; 如果有，则split
                    
            #         # 每个元素检查是否有多个 ; 如果有，则split
            #         new_data = []
            #         for item in data:
            #             parts = item.split(";")
            #             for part in parts:
            #                 stmt = part.strip()
            #                 if stmt:  # 忽略空字符串
            #                     new_data.append(stmt + ";")
            #         ic(new_data)
            #         os.makedirs(f"/home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/{db_name}/merge_seed",exist_ok=True)
            #         # 逐行输出到文件中
            #         with open(f"/home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/{db_name}/merge_seed/{clean_file_name}", 'w') as f:
            #             f.write("\n".join(new_data))
            # # input("press enter to continue")