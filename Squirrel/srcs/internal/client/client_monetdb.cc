#include "client_monetdb.h"

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <atomic>
#include <iostream>
namespace client {

std::atomic<long long> database_id_;
// 定义颜色常量（ANSI转义序列）
const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";

void MonetDBClient::initialize(YAML::Node config) {
  host_ = config["host"].as<std::string>();
  port_ = config["port"].as<std::string>();
  user_name_ = config["user_name"].as<std::string>();
  passwd_ = config["passwd"].as<std::string>();
  db_name_ = config["db_name"].as<std::string>();
  db_prefix_ = config["db_prefix"].as<std::string>();
  std::cout << RED << "[" << "INFO" << "] " << "初始化完成" << RESET
            << std::endl;
}
int MonetDBClient::die(Mapi dbh, MapiHdl hdl) {
  if (hdl != NULL) {
    // std::cout << "mapi_explain_query" << std::endl;
    // // 输出执行的query
    // mapi_explain_query(hdl, stderr);
    /* 执行错误的query，例子如下：
     * MAPI  = monetdb@localhost:50000
     * QUERY = DROP TABLE v0;
     * ERROR = !DROP TABLE: no such table 'v0'
     * CODE  = 42S02
     */
    // std::cout << "mapi_result_error" << std::endl;

    do {
      if (mapi_result_error(hdl) != NULL) {
        // mapi_explain_result(hdl, stderr);
      }
    } while (mapi_next_result(hdl) == 1);
    mapi_close_handle(hdl);
  }
  // Mapi
  MapiMsg status = MOK;
  if (dbh != NULL) {
    // mapi_explain(dbh, stderr);
    status = mapi_destroy(dbh);
    dbh = NULL;
  }
  return status;
}
bool MonetDBClient::check_alive() {
  // 用于判断是否server 启动
  // 判断 crash之后 服务器是否正常重启
  Mapi conn_2 =
      mapi_connect(host_.c_str(), std::stoi(port_), user_name_.c_str(),
                   passwd_.c_str(), "sql", db_name_.c_str());
  
  if (mapi_error(conn_2)) {
    die(conn_2, NULL);
    std::cout << "check_alive::mapi_connect failed" << std::endl;
    return false;
  }
  if (mapi_ping(conn_2) != MOK) {
    die(conn_2, NULL);
    std::cout << "check_alive::mapi_ping failed" << std::endl;
    return false;
  }
  die(conn_2, NULL);
  return true;
}

bool MonetDBClient::connect_database_execute_cmd(const std::string& database,
                                                 std::string& cmd) {
  Mapi conn_2 =
      mapi_connect(host_.c_str(), std::stoi(port_), user_name_.c_str(),
                   passwd_.c_str(), "sql", database.c_str());

  if (mapi_error(conn_2) != MOK) {
    die(conn_2, NULL);
    std::cout << "mapi_connect failed" << std::endl;
    return false;
  }
  MapiHdl ret = NULL;
  if ((ret = mapi_query(conn_2, cmd.c_str())) == NULL ||
      mapi_error(conn_2) != MOK) {
    die(conn_2, ret);
    return false;
  }
  die(conn_2, ret);
  return true;
}
void MonetDBClient::prepare_env() {
  // 这里可以添加环境准备逻辑

  ++database_id_;
  std::string database_name = db_prefix_ + std::to_string(database_id_);

  // std::cout << GREEN << "[" << "INFO" << "] " << "MonetDBClient::prepare_env
  // " << RESET << std::endl; std::string create_db_cmd = "monetdb create " +
  // database_name; std::string release_db_cmd = "monetdb release " +
  // database_name; system(create_db_cmd.c_str());
  // system(release_db_cmd.c_str());

  std::string cmd = "CREATE SCHEMA IF NOT EXISTS " + database_name + ";";
  if (!connect_database_execute_cmd(db_name_, cmd)) {
    std::cerr << "Failed to create schema." << std::endl;
  }
}
inline const char* MapiMsgToString(int status) {
  switch (status) {
    case MTIMEOUT: return "MTIMEOUT";
    case MERROR: return "MERROR";
    case MSERVER: return "MSERVER";
    case MOK: return "MOK";
    case MREDIRECT: return "MREDIRECT";
    case MMORE: return "MMORE";
    default: return "UnknownStatus";
  }
}
ExecutionStatus MonetDBClient::execute(const char* query, size_t size) {
  std::string database_name = db_prefix_ + std::to_string(database_id_);
  conn_ = mapi_connect(host_.c_str(), std::stoi(port_), user_name_.c_str(),
                       passwd_.c_str(), "sql", db_name_.c_str());
  if (mapi_error(conn_) != MOK) {
    die(conn_, NULL);
    std::cout << RED << "[" << "ERROR" << "] " << "mapi_connect failed" << RESET
              << std::endl;

    std::cout << RED << "[" << "ERROR" << "] "
              << "MonetDBClient::execute error:" << mapi_error_str(conn_)
              << RESET << std::endl;
    return kServerCrash;
  }
  std::string schema_prefix_sql = "SET SCHEMA " + database_name + ";";
  std::string time_out_sql = "CALL sys.setquerytimeout(60);";// 设置超时时间
  std::string execute_sql = schema_prefix_sql+ time_out_sql + query;
  // std::string execute_sql = schema_prefix_sql + query;
  MapiHdl ret = NULL;
  int crash_code = 0;
  // 这个判断 bug 比较有效一点
  if ((ret = mapi_query(conn_, execute_sql.c_str())) == NULL ||
      (crash_code = mapi_error(conn_)) != MOK) {
    const char* errorCode =
        mapi_result_errorcode(ret);  // syntax error MSERVER =-4
    if (errorCode != NULL) std::cout << "errorCode:" << errorCode << std::endl;

    //crash_code


// #endif
    if (crash_code == MSERVER) {
      die(conn_, ret);
      return kSyntaxError;
    }
    // MERROR		(-1) 
    // MTIMEOUT	(-2) 可能为 error
    // MMORE		(-3) 需要更多的输入，也报 error吧
    // MSERVER		(-4) 语法错误
    // MREDIRECT	(-5)
    std::cout << RED << "[ERROR] " << "crash_code:" << MapiMsgToString(crash_code) << std::endl;
    if (errorCode != NULL && is_crash_code(errorCode)) {
      die(conn_, ret);
      return kServerCrash;
    }
    
    
    if (die(conn_, ret) != MOK) {
      std::cout << RED << "[ERROR] "
        << "MonetDBClient::execute crash fail execute_sql:\n" << execute_sql
        << RESET << std::endl;
      return kServerCrash;
    }
    return kServerCrash;
  }
  // std::cout << GREEN << "[" << "INFO" << "] "
  //           << "MonetDBClient::execute success execute_sql:\n" << execute_sql
  //           << RESET << std::endl;
  if (die(conn_, ret) != MOK) {
    return kServerCrash;
  }
  return kNormal;
}

void MonetDBClient::clean_up_env( int g_db_pid) {
  // std::cout << GREEN << "[" << "INFO" << "] " << "MonetDBClient::clean_up_env
  // "
  //           << RESET << std::endl;
  std::string database_name = db_prefix_ + std::to_string(database_id_);
  std::string last_database_name =
      db_prefix_ + std::to_string(database_id_ - 1);
  std::string next_database_name =
      db_prefix_ + std::to_string(database_id_ + 1);
  // std::string destroy_db_cmd = "monetdb destroy -f " + database_name;
  // system(destroy_db_cmd.c_str());
  std::string reset_query =
      "DROP SCHEMA IF EXISTS " + database_name + " CASCADE;";
  std::string reset_last_query =
      "DROP SCHEMA IF EXISTS " + last_database_name + " CASCADE;";
  std::string reset_next_query =
      "DROP SCHEMA IF EXISTS " + next_database_name + " CASCADE;";
  std::string all_command = reset_query + reset_last_query + reset_next_query;
  if (!connect_database_execute_cmd(db_name_, all_command)) {
    std::cerr << "Failed to drop schema." << std::endl;
  }
}
bool MonetDBClient::is_crash_code(const char* code) {
  // {"01002", "Disconnect error"},
  // {"08007", "Connection failure during transaction"}
  // {"HYT00", "Timeout expired"},
  // {"HYT01", "Connection timeout expired"},
  char* crash_codes_array[] = {"01002", "08007", "HYT00", "HYT01"};
  // 获取数组长度
  int array_size = sizeof(crash_codes_array) / sizeof(crash_codes_array[0]);
  // 遍历数组，查找匹配的字符串
  for (int i = 0; i < array_size; i++) {
    if (strcmp(code, crash_codes_array[i]) == 0) {
      return true;
    }
  }
  return false;
}
};  // namespace client
