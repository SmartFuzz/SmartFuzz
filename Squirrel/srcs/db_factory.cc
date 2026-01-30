#include <cassert>

#ifdef __SQUIRREL_SQLITE__
#include "sqlite.h"
#endif

#ifdef __SQUIRREL_MYSQL__
#include "mysql.h"
#endif

#ifdef __SQUIRREL_POSTGRESQL__
#include "postgresql.h"
#endif
#ifdef __SQUIRREL_MONETDB__
#include "monetdb.h"
#endif
#ifdef __SQUIRREL_DUCKDB__
#include "duckdb.h"
#endif
#ifdef __SQUIRREL_CLICKHOUSE__
#include "clickhouse.h"
#endif

#ifdef __SQUIRREL_VIRTUOSO__
#include "virtuoso.h"
#endif
#include "db.h"

DataBase* create_database(YAML::Node config) {
  const std::string db_name = config["db"].as<std::string>();
  DataBase* result = nullptr;
  if (db_name == "sqlite") {
#ifdef __SQUIRREL_SQLITE__
    result = create_sqlite();
#endif
  } else if (db_name == "mysql") {
#ifdef __SQUIRREL_MYSQL__
    result = create_mysql();
#endif
  } else if (db_name == "postgresql") {
#ifdef __SQUIRREL_POSTGRESQL__
    result = create_postgresql();
#endif
  } else if (db_name == "monetdb") {
#ifdef __SQUIRREL_MONETDB__
    result = create_monetdb();
#endif
  }  else if (db_name == "duckdb") {
  #ifdef __SQUIRREL_DUCKDB__
      result = create_duckdb();
  #endif
  }  else if (db_name == "clickhouse") {
  #ifdef __SQUIRREL_CLICKHOUSE__
      result = create_clickhouse();
  #endif
  }  else if (db_name == "virtuoso") {
  #ifdef __SQUIRREL_VIRTUOSO__
      result = create_virtuoso();
  #endif
  }
  else {
    assert(false && "Unreachable");
  }
  assert(result && "Unreachable");
  result->initialize(config);
  return result;
}
