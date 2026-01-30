#ifndef __CLIENT_CLICKHOUSE_H__
#define __CLIENT_CLICKHOUSE_H__

#include <cstddef>
#include <optional>
#include <string>
#include <curl/curl.h>

#include "client.h"
#include "yaml-cpp/yaml.h"

namespace client {

class ClickHouseClient : public DBClient {
 public:
  virtual void initialize(YAML::Node config) ;
  virtual bool check_alive() ;
  virtual void prepare_env() ;
  virtual ExecutionStatus execute(const char *query, size_t size) ;
  virtual void clean_up_env(int g_db_pid=0) ;
  bool connect_database_execute_cmd(const std::string &database, std::string &cmd);

 private:
  ExecutionStatus send_sql(const std::string &sql);
  ExecutionStatus send_sql_use_database(const std::string &sql);
  void clean_up_all();
  std::string host_;
  uint16_t port_;
  std::string user_name_;
  std::string passwd_;
  std::string db_name_;
  std::string server_url_;
  std::atomic<long long> database_id_=0;
  private:
    CURL* curl_handle_;
    bool db_created_;
    static std::atomic<uint64_t> counter_;
    std::string db_prefix_;

  

  // bool create_database(const std::string &database);
  // std::optional<Mapi> create_connection(const std::string_view db_name);
};

};  // namespace client

#endif
