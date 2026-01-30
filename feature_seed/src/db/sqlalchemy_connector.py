from sqlalchemy import create_engine, text
from sqlalchemy.exc import SQLAlchemyError, OperationalError, ProgrammingError
from typing import Dict, Optional, Union, List
import glob
import json
from icecream import ic
class SQLAlchemyNativeExecutor:
    """
    SQLAlchemy原生SQL执行器，支持多数据库，提供执行状态判断。
    
    支持的数据库：MySQL、MariaDB、TiDB、PostgreSQL、SQLite、DuckDB、ClickHouse、MonetDB（需安装对应驱动）
    驱动安装参考：
    - MySQL/MariaDB/TiDB: pip install mysql-connector-python 或 pymysql
    - PostgreSQL: pip install psycopg2-binary
    - DuckDB: pip install duckdb duckdb-engine
    - ClickHouse: pip install sqlalchemy-clickhouse clickhouse-connect
    - MonetDB: pip install sqlalchemy-monetdb
    - SQLite: 无需额外安装（Python标准库自带）
    """

    def __init__(self, db_url: str, echo: bool = False):
        """
        初始化数据库连接引擎
        
        Args:
            db_url: 数据库连接字符串（SQLAlchemy格式），示例：
                - SQLite: "sqlite:///test.db"
                - MySQL: "mysql+mysqlconnector://user:password@host:port/db_name"
                - PostgreSQL: "postgresql+psycopg2://user:password@host:port/db_name"
                - DuckDB: "duckdb:///test.duckdb"
            echo: 是否打印SQLAlchemy执行日志（调试用，生产环境建议设为False）
        """
        self.db_url = db_url
        self.echo = echo
        self.engine = None  # 数据库引擎（延迟初始化，避免提前创建连接）

    def _init_engine(self) -> None:
        """延迟初始化数据库引擎，避免未执行SQL时创建无效连接"""
        if self.engine is None:
            try:
                self.engine = create_engine(
                    self.db_url,
                    echo=self.echo,
                    pool_pre_ping=True  # 连接前检查可用性，避免使用失效连接
                )
            except OperationalError as e:
                raise ConnectionError(f"数据库连接失败：{str(e)}") from e
            except Exception as e:
                raise RuntimeError(f"引擎初始化异常：{str(e)}") from e

    def execute_sql(
        self,
        sql: str,
        params: Optional[Union[Dict, List]] = None,
        is_query: bool = False
    ) -> Dict[str, Union[bool, List[Dict], int, str]]:
        """
        执行原生SQL，返回包含执行状态的结果字典
        
        Args:
            sql: 原生SQL语句（支持参数化，避免SQL注入）
            params: SQL参数（可选），格式：
                - 字典（对应命名参数，如:name）：{"name": "Alice", "age": 28}
                - 列表（对应位置参数，如?）：["Alice", 28]
            is_query: 是否为查询类SQL（SELECT），非查询类（INSERT/UPDATE/DELETE等）设为False
        
        Returns:
            结果字典，包含3个key：
                - success: 布尔值，True=执行成功，False=执行失败
                - data: 执行结果（查询类返回字典列表，非查询类返回影响行数）
                - message: 成功/错误信息（成功时为"执行成功"，失败时为错误详情）
        """
        # 初始化默认返回结果
        result = {
            "success": False,
            "data": None,
            "message": ""
        }

        # 处理默认参数（避免None导致SQLAlchemy报错）
        params = params or {}

        try:
            # 初始化引擎（首次执行时创建）
            self._init_engine()

            # 开启连接并执行SQL（with自动管理连接关闭）
            with self.engine.begin() as conn:
                # 用text()包装SQL，支持参数化（防注入）
                sql_text = text(sql)
                index=1
                schema_name = f"alchemy_test_{index}"
                conn.execute(text(f"create schema if not exists {schema_name};"))
                conn.execute(text(f"set schema {schema_name};"))
                # 执行SQL（区分查询/非查询）
                if is_query:
                    # 查询类：获取结果集并转换为字典列表（便于后续处理）
                    query_result = conn.execute(sql_text, params)
                    # 提取列名，将每行数据映射为{列名: 值}
                    columns = query_result.keys()
                    data = [dict(zip(columns, row)) for row in query_result.fetchall()]
                    result["data"] = data
                    result["message"] = f"查询成功，共{len(data)}条数据"
                else:
                    # 非查询类：执行并获取影响行数（需commit提交事务，SQLAlchemy 2.0+默认自动commit）
                    exec_result = conn.execute(sql_text, params)
                    # 对于INSERT/UPDATE/DELETE，rowcount为影响行数；对于CREATE TABLE，rowcount为-1（视为成功）
                    affected_rows = exec_result.rowcount
                    result["data"] = affected_rows
                    result["message"] = f"执行成功，影响行数：{affected_rows}"
                    # conn.commit()
                # 执行无异常，标记为成功
                result["success"] = True
                # 执行成功，返回结果
                return result

        except OperationalError as e:
            # 连接异常（如主机不可达、密码错误）
            result["message"] = f"连接错误：{str(e)}"
        except ProgrammingError as e:
            # SQL语法错误、表不存在、权限不足等
            result["message"] = f"SQL执行错误：{str(e)}"
        except SQLAlchemyError as e:
            # 其他SQLAlchemy相关异常（如参数不匹配）
            result["message"] = f"数据库异常：{str(e)}"
        except Exception as e:
            # 非预期异常（兜底处理）
            result["message"] = f"未知错误：{str(e)}"

        return result

    def close(self) -> None:
        """关闭数据库引擎（释放连接池资源，生产环境建议程序退出前调用）"""
        if self.engine is not None:
            self.engine.dispose()
            self.engine = None

def usage_demo():
     # 1. 配置不同数据库的连接字符串（根据需要选择）
    db_configs = {
        "sqlite": "sqlite:///test_sqlalchemy.db",  # SQLite（文件数据库）
        "mysql": "mysql+mysqlconnector://root:123456@localhost:3306/test_db",  # MySQL
        "postgresql": "postgresql+psycopg2://postgres:123456@localhost:5432/test_db",  # PostgreSQL
        "monetdb": "monetdb://monetdb:monetdb@localhost:50000/voc"  # MonetDB
    }

    # 2. 选择一个数据库初始化执行器（示例：monetdb）
    # executor = SQLAlchemyNativeExecutor(db_url=db_configs["monetdb"], echo=True)
    executor = SQLAlchemyNativeExecutor(db_url=db_configs["monetdb"], echo=False)
    

    try:
        # ------------------------------
        # 示例1：执行非查询SQL（创建表、插入数据）
        # ------------------------------
        # 创建用户表
        create_table_sql = """
             CREATE TABLE IF NOT EXISTS test_table_sqlalchemy (
            id INTEGER PRIMARY KEY,
            name VARCHAR(100),
            age INTEGER
        )
        """
        create_result = executor.execute_sql(sql=create_table_sql, is_query=False)
        print("创建表结果：", create_result)
        
        # 插入单条数据（参数化，防注入）
        insert_sql = "INSERT INTO test_table_sqlalchemy (id, name, age) VALUES (1, 'Alice', 28)"
        insert_result = executor.execute_sql(sql=insert_sql, is_query=False)
        print("插入数据结果：", insert_result)

        # 批量插入数据（用位置参数）
        batch_insert_sql = "INSERT INTO test_table_sqlalchemy (id, name, age) VALUES (2, 'Bob', 32),(3, 'Charlie', 25)"
        batch_insert_result = executor.execute_sql(sql=batch_insert_sql)
        print("批量插入结果：", batch_insert_result)

        # ------------------------------
        # 示例2：执行查询SQL（查询数据）
        # ------------------------------
        # 查询所有用户
        select_all_sql = "SELECT * FROM test_table_sqlalchemy"
        select_all_result = executor.execute_sql(sql=select_all_sql, is_query=True)
        print("查询所有用户：", select_all_result)
        select_non_system_tables = "SELECT * FROM tables where system =false"
        select_all_result = executor.execute_sql(sql=select_non_system_tables, is_query=True)
        print("查询所有非系统表：", select_all_result)

        # 带条件查询（参数化）
        select_cond_sql = "SELECT name, age FROM test_table_sqlalchemy WHERE age > 26"
        select_cond_result = executor.execute_sql(sql=select_cond_sql,is_query=True)
        print("查询26岁以上用户：", select_cond_result)

        # ------------------------------
        # 示例3：执行更新/删除SQL
        # ------------------------------
        # 更新数据
        update_sql = "UPDATE test_table_sqlalchemy SET age = 33 WHERE name = 'Bob'"
        update_result = executor.execute_sql(sql=update_sql)
        print("更新数据结果：", update_result)

        # 删除数据
        delete_sql = "DELETE FROM test_table_sqlalchemy WHERE age = 33"
        delete_result = executor.execute_sql(sql=delete_sql)
        print("删除数据结果：", delete_result)
      

        # 再次查询，验证更新/删除效果
        print("最终用户数据：", executor.execute_sql(sql=select_all_sql, is_query=True))
        # 删除table
        delete_sql = "drop table test_table_sqlalchemy"
        delete_result = executor.execute_sql(sql=delete_sql)
        print("删除table 结果：", delete_result)

    finally:
        # 关闭引擎，释放资源
        executor.close()
# ------------------------------
# 使用示例
# ------------------------------
if __name__ == "__main__":
    # usage_demo()
    db_configs = {
        "sqlite": "sqlite:///test_sqlalchemy.db",  # SQLite（文件数据库）
        "mysql": "mysql+mysqlconnector://root:123456@localhost:3306/test_db",  # MySQL
        "postgresql": "postgresql+psycopg2://postgres:123456@localhost:5432/test_db",  # PostgreSQL
        "monetdb": "monetdb://monetdb:monetdb@localhost:50000/voc"  # MonetDB
    }

    # 2. 选择一个数据库初始化执行器（示例：monetdb）
    executor = SQLAlchemyNativeExecutor(db_url=db_configs["monetdb"], echo=True)
    # executor = SQLAlchemyNativeExecutor(db_url=db_configs["monetdb"], echo=False)
    # 批量读取 /home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/monetdb/*.json
    type = 'datatype'
    json_files = glob.glob(f"/home/SmartFuzz/src/prepare/FeatureKnowledgeBaseSeed/monetdb/{type}/*.json")
    for file in json_files:
        with open(file, 'r') as f:
            data = json.load(f)
            ic(data)
            for sql in data:
                executor.execute_sql(sql=sql, is_query=False)
            input("press enter to continue")
