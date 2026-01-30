#ifndef __CLIENT_VIRTUOSO_H__
#define __CLIENT_VIRTUOSO_H__

#include <cstddef>
#include <optional>
#include <string>
#include <curl/curl.h>
#include <unordered_set>
#include <cstring>
#include "client.h"
#include <vector>
#include "yaml-cpp/yaml.h"

namespace client {

class VirtuosoClient : public DBClient {
 public:
  virtual void initialize(YAML::Node config) ;
  virtual bool check_alive() ;
  virtual void prepare_env() ;
  virtual ExecutionStatus execute(const char *query, size_t size) ;
  virtual void clean_up_env(int g_db_pid) ;
  bool connect_database_execute_cmd(const std::string &database, std::string &cmd);
  std::vector<std::string> split_sql(const std::string &sql);

 private:
  ExecutionStatus send_sql(const std::string &sql);
  void query_view_and_tables(const std::string &sql, std::vector<std::string> &tables);
  void extract_create_tables_views(const std::string& sql);
  ExecutionStatus send_sql_use_database(const std::string &sql);
  void clean_up_all();
  std::string host_;
  uint16_t port_;
  std::string user_name_;
  std::string passwd_;
  std::string db_name_;
  std::string server_url_;
  std::string startup_cmd_;
  
  std::atomic<long long> database_id_=0;
  private:
    CURL* curl_handle_;
    std::vector<std::string> used_tables;
    std::vector<std::string> used_views;
    bool db_created_;
    static std::atomic<uint64_t> counter_;
    std::string db_prefix_;
    std::unordered_set<std::string> system_tables;
    std::unordered_set<std::string> system_views;

  

};

};  // namespace client

#endif
