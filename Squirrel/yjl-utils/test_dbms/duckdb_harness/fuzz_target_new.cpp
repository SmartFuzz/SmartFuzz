#include <cstddef>
#include <cstdint>
#include <string>
#include <cstring>
#include "duckdb.h"
#include <vector>
#include <iostream>
using namespace std;
static duckdb_database db = NULL;
static duckdb_connection con = NULL;
static bool initialized = false;

static void init_duckdb() {
    if (initialized) return;

    if (duckdb_open(NULL, &db) != DuckDBSuccess) {
        abort();
    }
    if (duckdb_connect(db, &con) != DuckDBSuccess) {
        abort();
    }
    initialized = true;
}
static std::vector<std::string> SplitSQL(const std::string &sql) {
    std::vector<std::string> stmts;
    size_t start = 0;
    for (size_t i = 0; i < sql.size(); i++) {
        if (sql[i] == ';') {
            size_t len = i - start + 1;
            if (len > 1)
                stmts.emplace_back(sql.substr(start, len));
            start = i + 1;
        }
    }
    if (start < sql.size()) {
        stmts.emplace_back(sql.substr(start));
    }
    return stmts;
}
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) { 
    if (size == 0 || size > 1 << 20) return 0;

    init_duckdb();

    std::string sql(reinterpret_cast<const char *>(data), size);
    
    auto stmts = SplitSQL(sql);
    stmts.insert(stmts.begin(), "PRAGMA enable_verification;");
    //PRAGMA enable_verification;
    for (auto &stmt : stmts) {
        if (stmt.empty()||stmt.length()<2) continue;
        duckdb_result result;
        memset(&result, 0, sizeof(result));

        duckdb_state state = duckdb_query(con, stmt.c_str(), &result);
        // todo : 逐句执行
        if (state == DuckDBError) {
            duckdb_error_type type = duckdb_result_error_type(&result);
            switch (type) {
                /* === 这些是“正常 SQL 错误”，直接忽略 === */
                case DUCKDB_STATEMENT_TYPE_INVALID:
                case DUCKDB_ERROR_PARSER:
                case DUCKDB_ERROR_SYNTAX:
                case DUCKDB_ERROR_BINDER:
                case DUCKDB_ERROR_PLANNER:
                case DUCKDB_ERROR_CONSTRAINT:
                case DUCKDB_ERROR_DIVIDE_BY_ZERO:
                case DUCKDB_ERROR_INVALID_INPUT:
                case DUCKDB_ERROR_MISMATCH_TYPE:
                case DUCKDB_ERROR_CONVERSION:
                case DUCKDB_ERROR_CATALOG:
                case DUCKDB_ERROR_NOT_IMPLEMENTED:
                case DUCKDB_ERROR_OUT_OF_RANGE:
                case DUCKDB_ERROR_TRANSACTION:
                case DUCKDB_ERROR_IO:
                case DUCKDB_ERROR_MISSING_EXTENSION:
                case DUCKDB_ERROR_DEPENDENCY:
                case DUCKDB_ERROR_HTTP:
                case DUCKDB_ERROR_AUTOLOAD:
                case DUCKDB_ERROR_SERIALIZATION:
                    break;

                /* === 可疑错误：记录但不立刻 abort === */
                case DUCKDB_ERROR_EXECUTOR:
                case DUCKDB_ERROR_OPTIMIZER:
                case DUCKDB_ERROR_INDEX:
                    cout<<"duckdb_error_type: "<< type <<endl;
                    cout<<"可疑错误："<<stmt<<endl;
                    abort();

                /* === 绝对不应该出现的错误：直接 abort === */
                case DUCKDB_ERROR_INTERNAL:
                case DUCKDB_ERROR_FATAL:
                case DUCKDB_ERROR_OUT_OF_MEMORY:
                case DUCKDB_ERROR_NULL_POINTER:
                    abort();

                default:
                    /* 未知 error type，也值得 abort */
                    cout<<"duckdb_error_type: "<< type <<endl;
                    abort();
            }
        }
        duckdb_destroy_result(&result);

    }

    return 0;
}
