import pymonetdb
import json
from typing import Dict, Any, List, Optional
from icecream import ic
class DatabaseConnector:
    """
    通用数据库连接器，支持连接不同类型的数据库并执行SQL查询
    """
    def __init__(self, db_type: str, **kwargs):
        """
        初始化数据库连接器
        
        Args:
            db_type: 数据库类型，如'monetdb', 'mysql', 'postgres'等
            **kwargs: 数据库连接参数，如host, port, username, password, database等
        """
        self.db_type = db_type
        self.connection_params = kwargs
        self.connection = None
        self.cursor = None
    
    def connect(self) -> bool:
        """
        连接到数据库
        
        Returns:
            bool: 连接是否成功
        """
        try:
            if self.db_type.lower() == 'monetdb':
                # 连接MonetDB数据库
                self.connection = pymonetdb.connect(
                    hostname=self.connection_params.get('host', 'localhost'),
                    port=self.connection_params.get('port', 50000),
                    username=self.connection_params.get('username', 'monetdb'),
                    password=self.connection_params.get('password', 'monetdb'),
                    database=self.connection_params.get('database', 'voc')
                )
            # 可以在这里添加其他数据库类型的连接代码
            # elif self.db_type.lower() == 'mysql':
            #     import pymysql
            #     self.connection = pymysql.connect(...)
            
            if self.connection:
                self.cursor = self.connection.cursor()
                print(f"成功连接到{self.db_type}数据库")
                return True
            return False
        except Exception as e:
            print(f"连接数据库失败: {e}")
            return False
    
    def execute_sql(self, sql: str, params: Optional[tuple] = None) -> Dict[str, Any]:
        """
        执行SQL语句
        
        Args:
            sql: 要执行的SQL语句
            params: SQL参数（可选）
        
        Returns:
            Dict: 包含执行结果的字典
        """
        result = {
            'success': False,
            'data': None,
            'error': None,
            'rowcount': 0
        }
        
        if not self.connection or not self.cursor:
            result['error'] = "未连接到数据库"
            return result
        
        try:
            if params:
                self.cursor.execute(sql, params)
            else:
                self.cursor.execute(sql)
            
            # 检查是否是查询语句
            if sql.strip().upper().startswith('SELECT'):
                # 获取列名
                columns = [desc[0] for desc in self.cursor.description]
                # 获取数据
                rows = self.cursor.fetchall()
                # 转换为字典列表
                data = [dict(zip(columns, row)) for row in rows]
                result['data'] = data
            
            result['rowcount'] = self.cursor.rowcount
            result['success'] = True
            
            # 如果不是只读操作，提交事务
            if not sql.strip().upper().startswith('SELECT'):
                self.connection.commit()
                
        except Exception as e:
            # 发生错误时回滚
            if self.connection:
                self.connection.rollback()
            result['error'] = str(e)
        
        return result
    
    def execute_multiple(self, sql_list: List[str]) -> List[Dict[str, Any]]:
        """
        执行多条SQL语句
        
        Args:
            sql_list: SQL语句列表
        
        Returns:
            List: 每条SQL语句的执行结果列表
        """
        results = []
        for sql in sql_list:
            results.append(self.execute_sql(sql))
        return results
    
    def close(self):
        """
        关闭数据库连接
        """
        if self.cursor:
            self.cursor.close()
        if self.connection:
            self.connection.close()
            print("数据库连接已关闭")

# 示例用法
if __name__ == "__main__":
    # 初始化MonetDB连接器
    db = DatabaseConnector(
        db_type='monetdb',
        host='localhost',
        port=50000,
        username='monetdb',
        password='monetdb',
        database='voc'
    )
    
    # 连接数据库
    if db.connect():
        # 执行查询
        
        result = db.execute_sql('SELECT * FROM tables ')
        # ic(result)
        if result['success']:
            print("查询结果:")
            for row in result['data']:
                print(row)
        else:
            print(f"查询失败: {result['error']}")
        
        # 执行创建表的SQL
        create_table_sql = '''
        CREATE TABLE IF NOT EXISTS test_table (
            id INTEGER PRIMARY KEY,
            name VARCHAR(100),
            value DOUBLE
        );
        '''
        create_result = db.execute_sql(create_table_sql)
        print(f"创建表结果: {'成功' if create_result['success'] else '失败'}")
        
        # 插入数据
        insert_sql = "INSERT INTO test_table VALUES (1,'测试数据',123.45);"
        insert_result = db.execute_sql(insert_sql)
        print(f"插入数据结果: {'成功' if insert_result['success'] else '失败'}")
        
       
        # 查询插入的数据
        select_result = db.execute_sql("SELECT * FROM test_table;")
        if select_result['success']:
            print("插入后查询结果:")
            for row in select_result['data']:
                print(row)
         # 查询插入的数据
        select_result = db.execute_sql( 'SELECT * FROM tables where system =false')
        if select_result['success']:
            print("非系统表查询结果:")
            for row in select_result['data']:
                print(row)
        # 关闭连接
        db.close()