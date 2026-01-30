#ifndef __CLIENT_H__
#define __CLIENT_H__

#include <cstddef>
#include <string>

#include "yaml-cpp/yaml.h"

namespace client {

enum ExecutionStatus {
  kConnectFailed,
  kExecuteError,
  kServerCrash,
  kNormal,
  kTimeout,
  kSyntaxError,
  kSemanticError
};
inline const char* ExecutionStatusToString(ExecutionStatus status) {
  switch (status) {
    case kConnectFailed: return "kConnectFailed";
    case kExecuteError: return "kExecuteError";
    case kServerCrash: return "kServerCrash";
    case kNormal: return "kNormal";
    case kTimeout: return "kTimeout";
    case kSyntaxError: return "kSyntaxError";
    case kSemanticError: return "kSemanticError";
    default: return "UnknownStatus";
  }
}
class DBClient {
 public:
  virtual void initialize(YAML::Node) = 0;
  virtual bool check_alive() = 0;
  // Set up a clean environment for execution.
  virtual void prepare_env() = 0;
  virtual ExecutionStatus execute(const char *query, size_t size) = 0;
  virtual void clean_up_env(int g_db_pid=0) = 0;
};

DBClient *create_client(const std::string &db_name, const YAML::Node &config);
};  // namespace client

#endif
