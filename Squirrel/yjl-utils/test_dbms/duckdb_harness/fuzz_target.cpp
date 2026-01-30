#include <cstdint>
#include <cstddef>
#include <string>
#include <vector>
#include <signal.h>
#include <unistd.h>
#include <cstring>
#include "duckdb.h"
#include <iostream>
using namespace std;

/* -------------------------
 * Global persistent state
 * ------------------------- */
static duckdb_database g_db = nullptr;
static duckdb_connection g_con = nullptr;

/* -------------------------
 * Utilities
 * ------------------------- */
static void EnsureConnection() {
    if (!g_db) {
        if (duckdb_open(NULL, &g_db) != DuckDBSuccess) {
            abort(); // DB open must not fail
        }
    }
    if (!g_con) {
        if (duckdb_connect(g_db, &g_con) != DuckDBSuccess) {
            abort(); // Connection must not fail
        }
    }
}

static void ResetConnection() {
    if (g_con) {
        duckdb_disconnect(&g_con);
        g_con = nullptr;
    }
    EnsureConnection();
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

static bool IsBegin(const std::string &s) {
    // 忽略大小写
    
    return s.find("BEGIN") != std::string::npos ||
           s.find("START TRANSACTION") != std::string::npos;
}

static bool IsEndTxn(const std::string &s) {
    return s.find("COMMIT") != std::string::npos ||
           s.find("ROLLBACK") != std::string::npos;
}

/* -------------------------
 * Fuzzer entry
 * ------------------------- */
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    if (size == 0 )
        return 0;
    alarm(6);
    EnsureConnection();

    std::string input(reinterpret_cast<const char *>(data), size);
    auto stmts = SplitSQL(input);

    bool in_txn = false;

    for (auto &stmt : stmts) {
        if (stmt.empty()) continue;
        // cout << "stmt: " << stmt << endl;
        duckdb_result res;
        memset(&res, 0, sizeof(res));

        auto rc = duckdb_query(g_con, stmt.c_str(), &res);
        duckdb_destroy_result(&res);

        if (rc == DuckDBError) {
            // SQL error ≠ bug
            // 如果事务被打断，自动回滚
            // 如果是事务的话，是否考虑不要执行 begin，让其看看会不会有内部错误
            if (in_txn) {
                duckdb_query(g_con, "ROLLBACK", &res);
                duckdb_destroy_result(&res);
                in_txn = false;
            }
            continue;
        }

        if (IsBegin(stmt))
            in_txn = true;
        if (IsEndTxn(stmt))
            in_txn = false;
    }

    /* -------------------------
     * Liveness check
     * ------------------------- */
    duckdb_result ping;
    memset(&ping, 0, sizeof(ping));

    if (duckdb_query(g_con, "SELECT 1", &ping) == DuckDBError) {
        // 连接状态损坏 → 尝试自愈
        ResetConnection();
        if (duckdb_query(g_con, "SELECT 1", &ping) == DuckDBError) {
            // 真正不该发生
            abort();
        }
    }
    duckdb_destroy_result(&ping);
    alarm(0);
    return 0;
}
