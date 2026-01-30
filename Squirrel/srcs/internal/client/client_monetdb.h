#ifndef __CLIENT_MONETDB_H__
#define __CLIENT_MONETDB_H__

#include <cstddef>
#include <optional>
#include <string>

#include "client.h"
#include "yaml-cpp/yaml.h"
#include <mapi.h>

namespace client {

class MonetDBClient : public DBClient {
 public:
  virtual void initialize(YAML::Node config) ;
  virtual bool check_alive() ;
  virtual void prepare_env() ;
  virtual ExecutionStatus execute(const char *query, size_t size) ;
  virtual void clean_up_env(int g_db_pid=0) ;
  bool connect_database_execute_cmd(const std::string &database, std::string &cmd);

 private:
  std::string host_;
  std::string port_;
  std::string user_name_;
  std::string passwd_;
  std::string db_name_;
  Mapi conn_ = nullptr;
  MapiHdl hdl_ = nullptr;
  std::string db_prefix_;

  int die(Mapi dbh, MapiHdl hdl);
  bool is_crash_code(const char * code);

  // bool create_database(const std::string &database);
  // std::optional<Mapi> create_connection(const std::string_view db_name);
};

};  // namespace client

#endif
