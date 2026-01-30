

import os
import json
import random
from icecream import ic
from llm_service import LLMService
from tqdm import tqdm
import traceback
# 读取../prepare/{db}/function/result 下面的所有 json 文件
current_path = os.path.dirname(os.path.abspath(__file__))

import ast
import json
import re

def parse_llm_json(raw: str):
    """
    从 LLM 输出中提取 JSON 数组（不会卡住）。
    支持带 ```json 包裹、不规则前后文本。
    """
    # raw = raw.strip()

    # # 1. 去掉 markdown 包裹
    # raw = re.sub(r"^```(?:json)?", "", raw, flags=re.IGNORECASE).strip()
    # raw = re.sub(r"```$", "", raw, flags=re.IGNORECASE).strip()

    # 2. 尝试直接 json.loads
    try:
        return json.loads(raw)
    except:
        pass

    # 3. 尝试从文本中提取 *第一个* JSON 数组
    match = re.search(r"\[[\s\S]*\]", raw)
    if match:
        arr = match.group(0)
        try:
            return json.loads(arr)
        except:
            pass

    # 4. 到这里说明 LLM 输出错误，抛出调试信息
    raise ValueError(f"Cannot parse valid JSON array from output:\n{raw}")
def read_FNB_json_files(db_name, type='function'):
    """
    读取FeatureKnowledgeBase/{db_name}/{type}/results 下面的所有 json 文件
    """
    json_files = []
    # 当前文件路径
    for file in os.listdir(os.path.join(current_path, f"../prepare/FeatureKnowledgeBase/{db_name}/{type}/results")):
        if file.endswith(".json"):
            abs_path = os.path.join(current_path, f"../prepare/FeatureKnowledgeBase/{db_name}/{type}/results/{file}")
            json_files.append(abs_path)
    return json_files


def rerun():
    db_name = 'clickhouse'
    error_file = []
    abs_json_files=['/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/288.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/877.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/869.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/527.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/677.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/419.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/242.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/519.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/871.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/1238.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/1062.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/837.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/897.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/107.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/682.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/1237.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/1026.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/672.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/331.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/1254.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/1050.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/489.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/1089.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/924.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/902.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/309.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/1027.json', '/home/SmartFuzz/src/LLMs/../prepare/FeatureKnowledgeBase/clickhouse/function/results/967.json']
    type = 'function'
    pbar=tqdm(abs_json_files)
    for file in pbar:
        pbar.set_description(f"处理文件 {file}")
        # 进度条，预估还需要多久
        try:
            with open(file, 'r') as f:
            # ic(f)
            # 输出正在处理的文件
            # print(f"正在处理文件：{f}")
                data = json.load(f)
                title = data['Title']
                Description = data['Description']
                Examples = data['Examples']
                Feature = data['Feature']
                Category = data['Category']
                # 执行过就跳过
                output_abs_path = os.path.join(current_path, f"../prepare/FeatureKnowledgeBaseSeed/{db_name}/{type}")
                os.makedirs(output_abs_path, exist_ok=True)
                if os.path.exists(os.path.join(output_abs_path, f"{title}.json")):
                    print(f"文件 {file} 已处理，跳过")
                    continue
                
                ic(data)
                llm_service = LLMService("/home/SmartFuzz/config.json")
                # input("等等")
                system_prompt = f"You are an expert in testing the functionality of the {db_name} database. You need to generate comprehensive test cases based on the functional description of the {db_name} database for fuzz testing."

                user_prompt = f"""
                    # Documentation:
                    Feature: {title}
                    Description: {Description}
                    Examples: {Examples}
                    # Task:
                    - Thoroughly test the {Category} {title} functionality by generating SQL statements that consider boundary conditions.
                    - SQL statements must comply with the syntax of the {db_name} database.
                    - Statements should have structural complexity to demonstrate rich and flexible usage scenarios, including: nested subqueries, multi-table joins, and combinations with other operators.
                    - Referring to the Examples, generate multiple syntactically and semantically correct statements. Include relevant DDL statements to ensure SQL can be executed directly.
                    # Output Requirements:
                    Output strictly as a JSON array containing only SQL statements without comments. 
                    Each SQL statement must end with ';'.
                    Please output only a JSON array, where each element is a SQL statement string.
Do NOT include any explanations, comments, markdown formatting, or extra text.
The output must be valid JSON.
                    Example:
                    ["CREATE TABLE ...;", "INSERT INTO ...;", "SELECT ...;"]

                    """
                messages = [
                        {"role": "system", "content": system_prompt},
                        {"role": "user", "content": user_prompt}
                    ]
                ic(messages)
                
                # input("press enter to continue gpt request")
                #  TODO:格式化输出，按照 sql 语句数组的形式
                
                chat_result = llm_service.chat_completion(messages)
                ic(chat_result)
                sql_json = parse_llm_json(chat_result["content"])
                # 导出
                with open(os.path.join(output_abs_path, f"{title}.json"), 'w') as f:
                    json.dump(sql_json, f, indent=4)
                # input("press enter to continue")
            #  TODO:语句的校验执行
        except Exception as e:
            print(f"occur error,while processing{file}")
            print(e)
            traceback.print_exc()  
            error_file.append(file)
            input("press enter to continue")
            continue

def normalize_title(title) -> str:
    if isinstance(title, list):
        # 常见情况：["abs"] / ["+"]
        return "_".join(map(str, title))
    if isinstance(title, str):
        return title
    return str(title)
def sanitize_filename(s: str) -> str:
    s = s.strip()
    s = re.sub(r'[\\/:"*?<>|]+', '_', s)  # Windows + Unix 安全
    if not s:
        s = "unnamed"
    return s
def genearate_one_feature():
    # db_name = 'monetdb'
    db_name = 'clickhouse'
    # db_name = 'duckdb'
    
    # db_name = 'virtuoso'
    
    for type in ['operator','datatype','function','keyword']:
    # type='datatype'
    # type='operator'
        abs_json_files = read_FNB_json_files(db_name,type)
        error_file = []
        pbar=tqdm(abs_json_files)
        for file in pbar:
            pbar.set_description(f"处理文件 {file}")
            # 进度条，预估还需要多久
            try:
                with open(file, 'r') as f:
                # ic(f)
                # 输出正在处理的文件
                # print(f"正在处理文件：{f}")
                    data = json.load(f)
                    title = data['Title']
                    Description = data['Description']
                    Examples = data['Examples']
                    Feature = data['Feature']
                    Category = data['Category']
                    # 执行过就跳过  
                    output_abs_path = os.path.join(current_path, f"../prepare/FeatureKnowledgeBaseSeed/{db_name}/{type}")
                    os.makedirs(output_abs_path, exist_ok=True)
                    if os.path.exists(os.path.join(output_abs_path, f"{title}.json")):
                        print(f"文件 {file} 已处理，跳过")
                        continue
                    sanitize_title = sanitize_filename(normalize_title(title))
                    if os.path.exists(os.path.join(output_abs_path, f"{sanitize_title}.json")):
                        print(f"文件 {file} 已处理，跳过")
                        continue
                    ic(data)
                    llm_service = LLMService("/home/SmartFuzz/config.json")
                    # input("等等")
                    system_prompt = f"You are an expert in testing the functionality of the {db_name} database. You need to generate comprehensive test cases based on the functional description of the {db_name} database for fuzz testing."

                    user_prompt = f"""
                    # Documentation:
                    Feature: {title}
                    Description: {Description}
                    Examples: {Examples}
                    # Task:
                    - Thoroughly test the {Category} {title} functionality by generating SQL statements that consider boundary conditions.
                    - SQL statements must comply with the syntax and semantics of the {db_name} database.
                    - Statements should have structural complexity to demonstrate rich and flexible usage scenarios, including: nested subqueries, multi-table joins, and combinations with other operators.
                    - Referring to the Examples, generate multiple syntactically and semantically correct {db_name} statements. Include relevant DDL statements to ensure SQL can be executed directly.
                    # Output Requirements:
                    Output strictly as a JSON array containing only SQL statements without comments. 
                    Each SQL statement must end with ';'.
                    Please output only a JSON array, where each element is a SQL statement string.
Do NOT include any explanations, comments, markdown formatting, or extra text.
The output must be valid JSON.
                    Example:
                    ["CREATE TABLE ...;", "INSERT INTO ...;", "SELECT ...;"]
                        """
                    messages = [
                            {"role": "system", "content": system_prompt},
                            {"role": "user", "content": user_prompt}
                        ]
                    ic(messages)
                    
                    # input("press enter to continue gpt request")
                    #  TODO:格式化输出，按照 sql 语句数组的形式
                    
                    chat_result = llm_service.chat_completion(messages)
                    ic(chat_result)
                    sql_json = parse_llm_json(chat_result["content"])
                    # 导出
                    with open(os.path.join(output_abs_path, f"{sanitize_title}.json"), 'w') as f:
                        json.dump(sql_json, f, indent=4)
                    # input("press enter to continue")
                #  TODO:语句的校验执行
            except Exception as e:
                print(f"occur error,while processing{file}")
                print(e)
                traceback.print_exc()  
                error_file.append(file)
                # input("press enter to continue")
                continue
        print("错误的文件列表:", error_file)
def random_select_operator_file(operator_json_files):
    random.shuffle(operator_json_files)
    return operator_json_files[0]


if __name__ == '__main__':
    
    db_name = 'monetdb'
    # db_name = 'clickhouse'
    # db_name = 'duckdb'
    
    # db_name = 'virtuoso'
    
    # for type in ['operator','datatype','function','keyword']:
    # type='datatype'
    # type='operator'
    function_json_files = read_FNB_json_files(db_name,'function')
    operator_json_files = read_FNB_json_files(db_name,"operator")
    error_file = []
    pbar=tqdm(function_json_files)
    for file in pbar:
        pbar.set_description(f"处理文件 {file}")
        # 进度条，预估还需要多久
        try:
            with open(file, 'r') as f:
            # ic(f)
            # 输出正在处理的文件
            # print(f"正在处理文件：{f}")
                data = json.load(f)
                Title = data['Title'][0]
                Description = data['Description']
                Examples = data['Examples']
                Feature = data['Feature']
                Category = data['Category']
                
                output_abs_path = os.path.join(current_path, f"../prepare/FeatureKnowledgeBaseSeed/{db_name}/twoFeatureSeed")
                # 检测两种输出文件格式是否处理过
                os.makedirs(output_abs_path, exist_ok=True)
                # if os.path.exists(os.path.join(output_abs_path, f"{Title}.json")):
                #     print(f"文件 {file} 已处理，跳过")
                #     continue
                sanitize_title = sanitize_filename(normalize_title(Title))
                # if os.path.exists(os.path.join(output_abs_path, f"{sanitize_title}.json")):
                #     print(f"文件 {file} 已处理，跳过")
                #     continue
                selected_operator_file = random_select_operator_file(operator_json_files)
                with open(selected_operator_file, 'r') as f:
                    operator_data = json.load(f)
                    operator_Title = operator_data['Title'][0]
                    operator_Description = operator_data['Description']
                    operator_Examples = operator_data['Examples']
                    operator_Feature = operator_data['Feature']
                    operator_Category = operator_data['Category']
                ic(data)
                # input("等等")
                llm_service = LLMService("/home/SmartFuzz/config.json")
                
                system_prompt = f"""
You are a senior database fuzzing engineer and SQL semantics expert.
Your goal is to generate highly diverse, execution-path-rich SQL test cases
for fuzz testing the {db_name} database.

You must actively combine:
- feature specifications
- operator semantics
- function behaviors
to trigger complex interactions, implicit conversions, and edge cases.

You think in terms of:
execution paths, boundary values, type coercion, NULL propagation,
query planning, and expression evaluation.
"""
                user_prompt = f"""
## Function Documentation
The following functions are available and must be actively used:
Function Name: {Title}
Category: {Category}
Description:
{Description}
Examples:
{Examples}
## Operator Documentation
The following operators are available and must be actively used:
Operator Name: {operator_Title}
Category: {operator_Category}
Description:
{operator_Description}
Examples:
{operator_Examples}
# Task

Generate SQL statements for fuzz testing the {db_name} database by
**deeply combining the  Functions, and Operators**.

You must go beyond testing the Feature in isolation.

## Generation Requirements

1. **Cross-Documentation Combination**
- Every SQL statement must combine:
    - at least target function
    - at least target operator
- Prefer nesting functions inside operators and operators inside function arguments.

2. **Structural Complexity**
Generate statements that include a mix of:
- nested subqueries (including correlated subqueries)
- multi-table JOINs with complex ON conditions
- GROUP BY / HAVING with expressions
- window functions or aggregation where applicable
- expressions reused across SELECT, WHERE, JOIN, HAVING, ORDER BY

3. **Fuzzing-Oriented Edge Cases**
Explicitly try to trigger:
- implicit type casting (e.g., string ↔ numeric ↔ date)
- NULL handling and NULL-sensitive operators
- boundary values (min/max, empty strings, extreme precision)
- operator precedence ambiguities
- function + operator combinations that are rarely used together

4. **DDL + DML Coverage**
- Include necessary CREATE TABLE statements
- Use diverse column types and constraints
- Insert data that stresses edge cases
- Optionally include ALTER, DROP, or temporary tables if supported

5. **Semantic Validity**
- All SQL must be syntactically and semantically valid for {db_name}
- Avoid comments or undefined behavior
- Ensure statements can be executed in sequence

# Output Requirements

- Output strictly as a JSON array
- Each element must be a complete SQL statement string
- Each SQL statement must end with ';'
- Do NOT include:
- explanations
- comments
- markdown
- extra text

The output must be valid JSON only.

## Example Output Format
[
"CREATE TABLE ...;",
"INSERT INTO ...;",
"UPDATE ...;",
"SELECT ...;"
]
"""

                messages = [
                        {"role": "system", "content": system_prompt},
                        {"role": "user", "content": user_prompt}
                    ]
                ic(messages)
                
                # input("press enter to continue gpt request")
                #  TODO:格式化输出，按照 sql 语句数组的形式
                
                chat_result = llm_service.chat_completion(messages)
                ic(chat_result)
                sql_array = parse_llm_json(chat_result["content"])
                sql_json={}
                sql_json["function"] = Title
                sql_json["operator"] = operator_Title
                sql_json['sql_array'] = sql_array
                # 导出
                with open(os.path.join(output_abs_path, f" {sanitize_title}.json"), 'w') as f:
                    json.dump(sql_json, f, indent=4)
                # input("press enter to continue")
            #  TODO:语句的校验执行
        except Exception as e:
            print(f"occur error,while processing{file}")
            print(e)
            traceback.print_exc()  
            error_file.append(file)
            continue
    print("错误的文件列表:", error_file)
        
        
        
    
                
            