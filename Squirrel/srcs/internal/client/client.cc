#include "client.h"

#include <cassert>
#include <string>

#ifdef __SQUIRREL_MYSQL__
#include "client_mysql.h"
#endif

#ifdef __SQUIRREL_POSTGRESQL__
#include "client_postgresql.h"
#endif

#ifdef __SQUIRREL_MONETDB__
#include "client_monetdb.h"
#endif

#ifdef __SQUIRREL_CLICKHOUSE__
#include "client_clickhouse.h"
#endif

#ifdef __SQUIRREL_VIRTUOSO__
#include "client_virtuoso.h"
#endif
namespace client {

DBClient *create_client(const std::string &db_name, const YAML::Node &config) {
  DBClient *result = nullptr;
  if (db_name == "mysql") {
#ifdef __SQUIRREL_MYSQL__
    result = new MySQLClient;
#endif
  } else if (db_name == "postgresql") {
#ifdef __SQUIRREL_POSTGRESQL__
    result = new PostgreSQLClient;
#endif
  } else if (db_name == "monetdb") {
#ifdef __SQUIRREL_MONETDB__
    result = new MonetDBClient;
#endif
  } else if (db_name == "clickhouse") {
#ifdef __SQUIRREL_CLICKHOUSE__
    result = new ClickHouseClient;
#endif
  } else if (db_name == "virtuoso") {
#ifdef __SQUIRREL_VIRTUOSO__
    result = new VirtuosoClient;
#endif
  } else {
    assert(false && "It is not supported!");
  }

  result->initialize(config);
  return result;
}
};  // namespace client
