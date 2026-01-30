import re
import os
import json
from icecream import ic
def format_array(obj):
    if isinstance(obj, (list, tuple)):
        return '\n'.join(f"sql: {str(item)}" for item in obj)  # 每个元素换行显示
    return str(obj)
def get_sql_statements(text):
    """
    使用正则表达式判断一行文本是否为SQL语句
    
    Args:
        line: 待检查的文本行
        
    Returns:
        bool: 如果是SQL语句则返回True，否则返回False
    """
    # 去除首尾空白字符
    text = text.strip()
    
    # 如果是空行，不是SQL语句
    if not text:
        return False
    
    # 常见的SQL关键字（不区分大小写）
    sql_keywords = r'(select|insert|update|delete|create|alter|drop|truncate|grant|revoke|show|describe|explain|use)'
    
   
    pattern = re.compile(
        rf'^\s*{sql_keywords}\s+.*?(;|$)',
        re.IGNORECASE | re.DOTALL
    )
     # 正则表达式模式：以SQL关键字开头，以分号或换行结尾
    matches = pattern.findall(text)
    sql_statements = [match[0] or match[1] or match[2] or match[3] for match in matches]

    # 去除多余的空白符并返回结果
    return [stmt.strip() for stmt in sql_statements if stmt.strip()]

def check_sql_lines(input_string):
    """
    将输入字符串按换行符分割，并检查每一行是否为SQL语句
    
    Args:
        input_string: 包含多行文本的字符串
    """
    extracted_sql = get_sql_statements(input_string)
    # 输出结果
    for i, sql in enumerate(extracted_sql, start=1):
        print(f"SQL {i}:\n{sql}\n")
    # # 按换行符分割字符串
    # lines = input_string.split('\n')
    
    # for i, line in enumerate(lines, 1):
    #     if is_sql_statement(line):
    #         print(f"行 {i}: 是SQL语句 - {line}")
    #     else:
    #         print(f"行 {i}: 不是SQL语句 - {line}")

def extract_all_sqlite_statements(text):
    """
    从混合文本中提取所有 SQLite 语句。
    支持所有主要的 SQLite 语法类型。
    """
    ic(text)
    # 定义正则表达式，匹配所有 SQLite 支持的语法
    sql_pattern = re.compile(
        r"""
        (
            (?:CREATE\s+(?:TABLE|VIEW|INDEX|TRIGGER|VIRTUAL)\s.+?;)|               # CREATE TABLE/VIEW/INDEX/TRIGGER
            (?:DROP\s+(?:TABLE|VIEW|INDEX|TRIGGER)\s.+?;)|                # DROP TABLE/VIEW/INDEX/TRIGGER
            (?:ALTER\s+TABLE\s.+?;)|                                      # ALTER TABLE
            (?:DEALLOCATE\s+PREPARE\s.+?;)|                                      # DEALLOCATE PREPARE
            (?:IMPORT\s+FROM\s.+?;)|                                      # IMPORT FROM
            (?:(?:INSERT|IGNORE|REPLACE|ROLLBACK|ABORT|FAIL)\s+INTO\s.+?;)|                                      # INSERT INTO
            (?:REPLACE\s+INTO\s.+?;)|                                      # REPLACE INTO
            (?:UPDATE\s.+?\sSET\s.+?;)|                                   # UPDATE ... SET
            (?:DELETE\s+FROM\s.+?;)|                                      # DELETE FROM
            (?:CREATE\s.+?;)|                                             # CREATE
            (?:TRUNCATE\s.+?;)|                                             # TRUNCATE
            (?:REPLACE\s+INTO\s.+?;)|                                    # REPLACE INTO
            (?:BEGIN\s+(?:DEFERRED|IMMEDIATE|EXCLUSIVE)?\s+TRANSACTION;)| # BEGIN TRANSACTION
            (?:COMMIT\s+TRANSACTION;)|                                   # COMMIT TRANSACTION
            (?:ROLLBACK\s+TRANSACTION;)|                                 # ROLLBACK TRANSACTION
            (?:PRAGMA\s.+?;)|                                            # PRAGMA
            (?:EXPLAIN\s.+?;)|                                           # EXPLAIN
            (?:DESCRIBE\s.+?;)|                                           # DESCRIBE
            (?:SHOW\s+COLUMNS\s.+?;)|                                     # SHOW COLUMNS
            (?:SHOW\s+TABLES\s.+?;)|                                     # SHOW TABLES
            (?:PRAGMA\s.+?;)|                                       # cmd：PRAGMA
            (?:REINDEX\s.+?;)|                                       # cmd：cmd_reindex
            (?:ANALYZE\s.+?;)|                                       # cmd：cmd_analyze
            (?:ATTACH\s.+?;)|                                       # cmd：cmd_attach
            (?:DETACH\s.+?;)|                                       # cmd：cmd_detach
            (?:RELEASE\s+SAVEPOINT\s.+?;)|                                 # RELEASE SAVEPOINT
            (?:RELEASE\s.+?;)|                                 # RELEASE
            (?:ROLLBACK\s.+?;)|                                 # ROLLBACK
            (?:VACUUM(?:\s.+?)?;)|                                 # ROLLBACK
            (?:BEGIN\s.+?;)|                                 # BEGIN
            (?:COMMIT\s.+?;)|                                 # COMMIT
            (?:END\s.+?;)|                                 # END
            (?:PREPARE\s.+?;)|                                 # PREPARE
            (?:EXECUTE\s.+?;)|                                 # EXECUTE
            (?:ATTACH\s+DATABASE\s.+?;)|                                 # ATTACH DATABASE
            (?:WITH\s.+?SELECT\s.+?;)|
            (?:SELECT\s.+?;)|                                                  # SELECT
            (?:DETACH\s+DATABASE\s.+?;)                                  # DETACH DATABASE
        )
        """,
        re.IGNORECASE | re.DOTALL | re.VERBOSE  # 忽略大小写，支持跨行匹配，支持注释
    )

    # 使用正则表达式查找所有匹配的 SQL 语句
    matches = sql_pattern.findall(text)
    # 提取出匹配的 SQL 语句（元组中的第一个元素）
    sql_statements = [match.strip() for match in matches]

    return sql_statements
def extract_all_postgresql_statements(text):
    """
    从混合文本中提取所有 PostgreSQL 语句。
    支持所有主要的 PostgreSQL 语法类型。
    """
    # 定义正则表达式，匹配所有 PostgreSQL 支持的语法
    sql_pattern = re.compile(
        r"""
        (
            (?:CREATE\s+(?:TABLE|VIEW|INDEX|SEQUENCE|FUNCTION|TRIGGER)\s.+?;)|  # CREATE TABLE/VIEW/INDEX/SEQUENCE/FUNCTION/TRIGGER
            (?:DROP\s+(?:TABLE|VIEW|INDEX|SEQUENCE|FUNCTION|TRIGGER)\s.+?;)|   # DROP TABLE/VIEW/INDEX/SEQUENCE/FUNCTION/TRIGGER
            (?:ALTER\s+(?:TABLE|VIEW|INDEX|SEQUENCE|FUNCTION|TRIGGER)\s.+?;)| # ALTER TABLE/VIEW/INDEX/SEQUENCE/FUNCTION/TRIGGER
            (?:INSERT\s+INTO\s.+?;)|                                           # INSERT INTO
            (?:UPDATE\s+.+?\sSET\s.+?;)|                                       # UPDATE ... SET
            (?:DELETE\s+FROM\s.+?;)|                                           # DELETE FROM
            (?:SELECT\s.+?;)|                                                  # SELECT
            (?:WITH\s.+?SELECT\s.+?;)|                                         # WITH ... SELECT (CTE)
            (?:DO\s+\$\$.+?\$\$;)|                                             # DO (anonymous code blocks)
            (?:BEGIN;)|                                                        # BEGIN (transaction)
            (?:COMMIT;)|                                                       # COMMIT
            (?:ROLLBACK;)|                                                     # ROLLBACK
            (?:TRUNCATE\s+.+?;)|                                               # TRUNCATE
            (?:GRANT\s+.+?;)|                                                  # GRANT
            (?:REVOKE\s+.+?;)|                                                 # REVOKE
            (?:EXPLAIN\s+.+?;)|                                                # EXPLAIN
            (?:ANALYZE\s+.+?;)|                                                # ANALYZE
            (?:VACUUM\s+.+?;)|                                                 # VACUUM
            (?:SET\s+.+?;)|                                                    # SET
            (?:RESET\s+.+?;)|                                                  # RESET
            (?:SHOW\s+.+?;)|                                                   # SHOW
            (?:COMMENT\s+ON\s.+?;)|                                            # COMMENT ON
            (?:LISTEN\s+.+?;)|                                                 # LISTEN
            (?:NOTIFY\s+.+?;)|                                                 # NOTIFY
            (?:UNLISTEN\s+.+?;)                                                # UNLISTEN
        )
        """,
        re.IGNORECASE | re.DOTALL | re.VERBOSE  # 忽略大小写，支持跨行匹配，支持注释
    )

    # 使用正则表达式查找所有匹配的 SQL 语句
    matches = sql_pattern.findall(text)

    # 提取出匹配的 SQL 语句（元组中的第一个元素）
    sql_statements = [match.strip() for match in matches]

    return sql_statements



if __name__ == "__main__":

    # 读取/home/crawl_bugs/ticket_output 文件底下的所有 json 文件
    ticket_path ='/home/crawl_bugs/sqlite/ticket_output'
    for file in os.listdir(ticket_path):
        if file.endswith('.json'):
            cur_json_path = os.path.join(ticket_path, file)
            with open(cur_json_path, 'r') as f:
                ic(cur_json_path)
                data = json.load(f)
                ticket_hash = data['Ticket Hash']
                ic(ticket_hash)
                # 检查User Comments 字段是否包含 SQL 语句
                if 'User Comments' in data:
                    extracted_sqls = extract_all_sqlite_statements(data['User Comments'])
                    
                    ic(format_array(extracted_sqls))
                output_json = {
                        'path':cur_json_path,
                        'ticket_hash': ticket_hash,
                        'extracted_sql': extracted_sqls,
                        'User Comments':data['User Comments']
                    }
                # 导出 json 到文件，格式化输出,保存中文
                output_sql_json_file = f'/home/crawl_bugs/sqlite/crash_sqls/{ticket_hash}.json'
                with open(output_sql_json_file, 'w',encoding='utf-8') as f:
                    json.dump(output_json, f, indent=4,ensure_ascii=False)
            # pause
            # input("Press Enter to continue...")


    # example_text = """mrigger added on 2019-08-06 20:43:05:\nConsider the following test case:\nCREATE TABLE t0(c0 TEXT);\nCREATE VIEW v0(c0) AS SELECT t0.c0 FROM t0;\nINSERT INTO t0(c0) VALUES ('0');\nSELECT 0 IN (c0) FROM v0; -- expected: 0, actual: 1\nThe expression 0 in (c0) unexpectedly yields TRUE, although c0 is a string and 0 an integer; according to the documentation, values in the right list should have no affinity, so I would not expect an affinity conversion to be performed. When fetching from the table, rather than the view, the result is as expected:\nSELECT 0 IN (c0) FROM t0; -- 0"""
    # print("检查结果：")
    # check_sql_lines(example_text)
