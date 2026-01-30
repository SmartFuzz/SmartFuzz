#include "client_virtuoso.h"
#include "client.h"
#include <unistd.h>
#include <algorithm>
#include <cctype>
#include <regex>
#include <wait.h>
#include <sql.h>
#include <sqlext.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <atomic>
#include <iostream>
#include <unordered_set>

using namespace std;
namespace client {

// ANSI colors
const std::string RESET   = "\033[0m";
const std::string RED     = "\033[31m";
const std::string GREEN   = "\033[32m";
const std::string YELLOW  = "\033[33m";
ExecutionStatus print_odbc_error(
    SQLSMALLINT handleType,
    SQLHANDLE handle,
    const char* msg
) {
    SQLINTEGER  native;
    SQLCHAR     state[7];
    SQLCHAR     text[512];
    SQLSMALLINT len;
    SQLRETURN   ret;
    int i = 1;

    // std::cerr << "[ODBC ERROR] " << msg << std::endl;

    while ((ret = SQLGetDiagRec(
        handleType,
        handle,
        i,
        state,
        &native,
        text,
        sizeof(text),
        &len
    )) == SQL_SUCCESS) {
        std::cerr
            << "  #" << i
            << " SQLSTATE=" << state
            << " Native=" << native
            << " Msg=" << text
            << std::endl;
        i++;
        // text 中包含 bug 信息
        if (strstr((const char*)text, "Lost connection to server") != nullptr) {
            return kServerCrash;
        }
        if (strstr((const char*)text, "Connect failed to ") != nullptr) {
            return kServerCrash;
        }
        // if(is_bug_state(state)){
        //     return kServerCrash;
        // }
    }
    
    return kNormal;
}
void VirtuosoClient::initialize(YAML::Node config) {
    curl_global_init(CURL_GLOBAL_DEFAULT);   
    this->system_tables = {
        "LDLOCK",
        "LOAD_LIST",
        "RDF_DATATYPE",
        "RDF_EXPLICITLY_CREATED_GRAPH",
        "RDF_GEO",
        "RDF_GRAPH_GROUP",
        "RDF_GRAPH_GROUP_MEMBER",
        "RDF_GRAPH_USER",
        "RDF_IRI",
        "RDF_LABEL",
        "RDF_LANGUAGE",
        "RDF_OBJ",
        "RDF_OBJ_FT_RULES",
        "RDF_OBJ_RO_FLAGS_WORDS",
        "RDF_PREFIX",
        "RDF_QUAD",
        "RDF_QUAD_DELETE_QUEUE",
        "RDF_QUAD_RECOV_TMP",
        "RDF_VOID_GRAPH",
        "RDF_VOID_GRAPH_MEMBER",
        "RDF_WEBID_ACL_GROUPS",
        "RO_START",
        "SYS_ANN_AD_ACCOUNT",
        "SYS_ANN_AD_RULE",
        "SYS_ANN_LINK",
        "SYS_ANN_PHRASE",
        "SYS_ANN_PHRASE_CLASS",
        "SYS_ANN_PHRASE_SET",
        "SYS_CLUSTER",
        "SYS_COL_INFO",
        "SYS_DPIPE",
        "SYS_HTTP_CLIENT_CACHE",
        "SYS_HTTP_SPONGE",
        "SYS_HTTP_SPONGE_REFRESH_DEFAULTS",
        "SYS_IDONLY_EMPTY",
        "SYS_IDONLY_ONE",
        "SYS_PARTITION",
        "SYS_RDF_MAPPERS",
        "SYS_RDF_SCHEMA",
        "SYS_SPARQL_HOST",
        "SYS_SPARQL_SW_LOG",
        "SYS_USER_WEBID",
        "SYS_X509_CERTIFICATES",
        "SYS_XML_PERSISTENT_NS_DECL",
        "VTLOG_DB_DBA_RDF_OBJ"
    };
    this->system_views = {
        "ALL_COL_HIST",
        "ALL_COL_STAT",
        "SPARQL_BINDINGS_VIEW",
        "SPARQL_BINDINGS_VIEW_C_0",
        "SPARQL_BINDINGS_VIEW_C_1",
        "SPARQL_BINDINGS_VIEW_C_2",
        "SPARQL_BINDINGS_VIEW_C_3",
        "SPARQL_BINDINGS_VIEW_C_4",
        "SPARQL_SINV_2",
        "SYS_COL_AUTO_STAT",
        "SYS_D_STAT",
        "SYS_INDEX_SPACE_STATS",
        "SYS_KEY_COLUMNS",
        "SYS_K_STAT",
        "SYS_L_STAT",
        "SYS_QUERY_LOG",
        "SYS_USER_GROUP",
        "TABLE_COLS",
        "USER_COL_HIST",
        "USER_COL_STAT",
        "CHECK_CONSTRAINTS",
        "COLUMNS",
        "COLUMN_DOMAIN_USAGE",
        "COLUMN_PRIVILEGES",
        "KEY_COLUMN_USAGE",
        "PARAMETERS",
        "REFERENTIAL_CONSTRAINTS",
        "ROUTINES",
        "SCHEMATA",
        "TABLES",
        "TABLE_CONSTRAINTS",
        "TABLE_PRIVILEGES",
        "VIEWS"
        };
   
    if (config["host"]) {
        server_url_ = "http://" + config["host"].as<std::string>() + ":8123/";
    }
    if (config["startup_cmd"]) {
        startup_cmd_ = config["startup_cmd"].as<std::string>();
    }
    std::cout << "Server URL: " << server_url_ << std::endl;
}
void VirtuosoClient::extract_create_tables_views(const std::string& sql) {

    // 正则说明：
    // CREATE TABLE [IF NOT EXISTS] schema.table | table
    std::regex re(
        R"(CREATE\s+TABLE\s+(?:IF\s+NOT\s+EXISTS\s+)?((?:"[^"]+"|`[^`]+`|\w+)(?:\.(?:"[^"]+"|`[^`]+`|\w+))?))",
        std::regex::icase
    );

    auto begin = std::sregex_iterator(sql.begin(), sql.end(), re);
    auto end   = std::sregex_iterator();

    for (auto it = begin; it != end; ++it) {
        std::string table = (*it)[1].str();
        used_tables.push_back(table);
    }
     std::regex re1(
        R"(CREATE\s+VIEW\s+(?:IF\s+NOT\s+EXISTS\s+)?((?:"[^"]+"|`[^`]+`|\w+)(?:\.(?:"[^"]+"|`[^`]+`|\w+))?))",
        std::regex::icase
    );
    // RENAME TABLE t0 TO t1;
    begin = std::sregex_iterator(sql.begin(), sql.end(), re1);
    end   = std::sregex_iterator();

    for (auto it = begin; it != end; ++it) {
        std::string view = (*it)[1].str();
        used_views.push_back(view);
    }
}

int get_virtuoso_port(void) {
    FILE *fp = popen("ss -lntp | grep virtuoso-t", "r");
    if (!fp)
        return -1;

    char buf[512];
    int port = -1;

    while (fgets(buf, sizeof(buf), fp)) {
        /*
         * 示例行：
         * LISTEN ... 127.0.0.1:1111 ... virtuoso-t
         */

        char *p = strstr(buf, ":");
        if (!p)
            continue;

        /* 跳过 ':' */
        p++;

        /* 解析端口 */
        int tmp = atoi(p);
        if (tmp > 0) {
            port = tmp;
            break;  // 取第一个即可
        }
    }
    if (getenv("DEBUG_MODE"))
        cout << "Get Virtuoso Port: " << port << endl;
    pclose(fp);
    return port;
}
// bool VirtuosoClient::check_alive() {

//     SQLHENV env;
//     SQLHDBC dbc;
//     SQLHSTMT stmt;
//     SQLRETURN ret;

//     // 1. 分配环境句柄
//     SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
//     SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (void*)SQL_OV_ODBC3, 0);

//     // 2. 分配连接句柄
//     SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc);

//     // 3. 连接数据库（使用 DSN）
//     ret = SQLConnect(dbc, 
//                      (SQLCHAR*)"VirtuosoDSN", SQL_NTS, 
//                      (SQLCHAR*)"dba", SQL_NTS, 
//                      (SQLCHAR*)"dba", SQL_NTS);

//         // 4. 分配语句句柄
//         SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt);
//         ret = SQLExecDirect(stmt, (SQLCHAR*)"select 1", SQL_NTS);
//         if (!SQL_SUCCEEDED(ret)) {
//             SQLFreeStmt(stmt, SQL_CLOSE);
//             return false;
//         }
//         SQLFreeStmt(stmt, SQL_CLOSE);
//         // 5. 执行查询
//     SQLFreeHandle(SQL_HANDLE_STMT, stmt);
//     SQLDisconnect(dbc);
 
//     SQLFreeHandle(SQL_HANDLE_DBC, dbc);
//     SQLFreeHandle(SQL_HANDLE_ENV, env);
//     return true;
// }
bool VirtuosoClient::check_alive() {
    SQLHENV  env  = SQL_NULL_HENV;
    SQLHDBC  dbc  = SQL_NULL_HDBC;
    SQLHSTMT stmt = SQL_NULL_HSTMT;
    SQLRETURN ret;
    bool ok = false;

    int port = get_virtuoso_port();
    if (port <= 0)
        return false;

    char connstr[256];
    snprintf(connstr, sizeof(connstr),
             "DRIVER=Virtuoso;HOST=127.0.0.1:%d;UID=dba;PWD=dba;",
             port);
    if(getenv("DEBUG_MODE"))cout<<"[INFO] connstr:"<<connstr<<endl;
    /* ENV */
    if (SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env) != SQL_SUCCESS){
        goto cleanup;
    }

    SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION,
                  (void*)SQL_OV_ODBC3, 0);

    /* DBC */
    if (SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc) != SQL_SUCCESS)
        goto cleanup;

    /* ⏱ 非常关键：超时 */
    SQLSetConnectAttr(dbc, SQL_LOGIN_TIMEOUT, (SQLPOINTER)2, 0);
    SQLSetConnectAttr(dbc, SQL_ATTR_CONNECTION_TIMEOUT, (SQLPOINTER)2, 0);

    ret = SQLDriverConnect(
        dbc,
        NULL,
        (SQLCHAR*)connstr,
        SQL_NTS,
        NULL,
        0,
        NULL,
        SQL_DRIVER_NOPROMPT
    );

    if (!SQL_SUCCEEDED(ret)){

        if(getenv("DEBUG_MODE"))cout<<"[INFO]can not SQLDriverConnect"<<endl;
        if(getenv("DEBUG_MODE"))print_odbc_error(SQL_HANDLE_DBC, dbc, "SQLDriverConnect failed");
        goto cleanup;
    }

    /* STMT */
    if (SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt) != SQL_SUCCESS){
        if(getenv("DEBUG_MODE"))cout<<"can not SQLAllocHandle"<<endl;

        goto cleanup;
    }
    /* 执行最轻量的 SQL */
    ret = SQLExecDirect(stmt, (SQLCHAR*)"select 1", SQL_NTS);
    if (!SQL_SUCCEEDED(ret)){
        if(getenv("DEBUG_MODE"))cout<<"can not execute select 1"<<endl;
        goto cleanup;
    }

    ok = true;

cleanup:
    if (stmt != SQL_NULL_HSTMT)
        SQLFreeHandle(SQL_HANDLE_STMT, stmt);
    if (dbc != SQL_NULL_HDBC) {
        SQLDisconnect(dbc);
        SQLFreeHandle(SQL_HANDLE_DBC, dbc);
    }
    if (env != SQL_NULL_HENV)
        SQLFreeHandle(SQL_HANDLE_ENV, env);

    return ok;
}

void VirtuosoClient::prepare_env() {
    database_id_++;
    
    vector<string> all_tables;
    query_view_and_tables("SELECT TABLE_NAME FROM INFORMATION_SCHEMA.TABLES", all_tables);
    
     // 读取所有的视图
    vector<string> all_views;
    query_view_and_tables("SELECT TABLE_NAME FROM INFORMATION_SCHEMA.VIEWS", all_views);
   
    // 排除所有的数据系统表，删除用户表
    for (auto& table : all_tables) {
        if (system_tables.find(table) == system_tables.end()) {
            if(getenv("DEBUG_MODE")){
                cout<<"Drop table " + table + ";"<<endl;
            }
            send_sql("Drop table " + table + ";");
        }
    }
    // 排除所有的数据系统视图，删除用户视图
    for (auto& view : all_views) {
        if (system_views.find(view) == system_views.end()) {
            if(getenv("DEBUG_MODE")){
                cout<<"Drop view " + view + ";"<<endl;
            }
            send_sql("Drop view " + view + ";");
        }
    }
   
}

ExecutionStatus VirtuosoClient::execute(const char *query, size_t size) {
    return send_sql(query);
}

void VirtuosoClient::clean_up_env(int g_db_pid) {
    // for (auto& table : used_tables) {
    //     send_sql("Drop table " + table + ";");
    // }
    // for (auto& table : used_views) {
    //     send_sql("Drop view " + table + ";");
    // }


    // system("pkill -KILL virtuoso-t");
    // system("pkill  virtuoso-t");
    // cout<< "g_db_pid:"<< g_db_pid << endl;
    // if (g_db_pid > 0) {
    //     // killpg(g_db_pid, SIGKILL);
    //     // waitpid(g_db_pid, NULL, 0);
    //     // g_db_pid = -1;
    //     system("pkill virtuoso-t");
    // }
    system("rm -rf /home/dbms/virtuoso-opensource/db/*.db /home/dbms/virtuoso-opensource/db/*.trx");

    // int ret = system(startup_cmd_.c_str());
    // sleep(2);

    // if (ret != 0) {
    //     fprintf(stderr, "Failed to start virtuoso\n");
        
    // }
}
bool is_blank(const std::string& s) {
    return std::all_of(s.begin(), s.end(),
                       [](unsigned char c) { return std::isspace(c); });
}
std::vector<std::string> VirtuosoClient::split_sql(const std::string &sql) {
    std::vector<std::string> sqls;
    std::stringstream ss(sql);
    std::string item;
    while (std::getline(ss, item, ';')&& !is_blank(item)) {
        if (!item.empty()) {
            sqls.push_back(item);
        }
    }
    return sqls;
}
bool sqlstate_is_non_crash(const char* state) {
    return
        strncmp(state, "00", 2) == 0 ||
        strncmp(state, "01", 2) == 0 ||
        strncmp(state, "02", 2) == 0 ||
        strncmp(state, "07", 2) == 0 ||
        strncmp(state, "20", 2) == 0 ||
        strncmp(state, "21", 2) == 0 ||
        strncmp(state, "22", 2) == 0 ||
        strncmp(state, "23", 2) == 0 ||
        strncmp(state, "24", 2) == 0 ||
        strncmp(state, "25", 2) == 0 ||
        strncmp(state, "26", 2) == 0 ||
        strncmp(state, "27", 2) == 0 ||
        strncmp(state, "28", 2) == 0 ||
        strncmp(state, "2A", 2) == 0 ||
        strncmp(state, "2B", 2) == 0 ||
        strncmp(state, "2C", 2) == 0 ||
        strncmp(state, "2D", 2) == 0 ||
        strncmp(state, "2E", 2) == 0 ||
        strncmp(state, "33", 2) == 0 ||
        strncmp(state, "34", 2) == 0 ||
        strncmp(state, "3D", 2) == 0 ||
        strncmp(state, "3F", 2) == 0 ||
        strncmp(state, "40", 2) == 0 ||
        strncmp(state, "42", 2) == 0 ||
        strncmp(state, "44", 2) == 0;
}
bool is_bug_state (SQLCHAR* state) {

    char* is_not_bug_state[] = {
        "42S02",/* no such table*/
        "42000",/* syntax*/
        "23000",/* 约束违反*/
        "22023",/* 参数类型错误*/
        "HY091",/* Not supported function*/
        "HY000",/* FOREIGN KEY*/
        "RDF99",/* FOREIGN KEY*/
        "HTCLI",/* FOREIGN KEY*/
        "39000",/* FOREIGN KEY*/
        "DEPRE",/* FOREIGN KEY*/
        "HY105",/* LIKE must be between strings.*/
    };
    //   #1 SQLSTATE=HY105 Native=-1 Msg=[OpenLink][Virtuoso ODBC Driver][Virtuoso Server]SR194: LIKE must be between strings.
    //#1 SQLSTATE=DEPRE Native=-1 Msg=[OpenLink][Virtuoso ODBC Driver][Virtuoso Server]TTLP_MT_LOCAL_FILE  deprecated.  Use TTLP
    //   #1 SQLSTATE=RDF99 Native=-1 Msg=[OpenLink][Virtuoso ODBC Driver][Virtuoso Server]RDF replication is not enabled
    //   #1 SQLSTATE=39000 Native=-1 Msg=[OpenLink][Virtuoso ODBC Driver][Virtuoso Server]FA006: Can't open file 'tmp/MyContacts.csv', error : 
    // #1 SQLSTATE=HY000 Native=-1 Msg=[OpenLink][Virtuoso ODBC Driver][Virtuoso Server]SR306: INSERT statement conflicted with FOREIGN KEY constraint referencing table "DB.DBA.md5_test"
    // #1 SQLSTATE=HTCLI Native=-1 Msg=[OpenLink][Virtuoso ODBC Driver][Virtuoso Server]HC001: Connection Error in HTTP Client
    for (auto &s : is_not_bug_state) {
        if (strcmp((const char*)state, s) == 0) {
            return false;
        }
    }
    return !sqlstate_is_non_crash((const char*)state);
    // return true;
}

void VirtuosoClient::query_view_and_tables(const std::string &query, std::vector<std::string> &tables) {
    SQLHENV env;
    SQLHDBC dbc;
    SQLHSTMT stmt;
    SQLRETURN ret;
    do{
    int port = get_virtuoso_port();
        if (port <= 0) {
            break;
        }

        char connstr[256];
        snprintf(connstr, sizeof(connstr),
                 "DRIVER=Virtuoso;HOST=127.0.0.1:%d;UID=dba;PWD=dba;",
                 port);

        if (SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env) != SQL_SUCCESS) {
            break;
        }

        SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION,
                      (void*)SQL_OV_ODBC3, 0);

        if (SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc) != SQL_SUCCESS) {
            break;
        }

        SQLSetConnectAttr(dbc, SQL_LOGIN_TIMEOUT, (SQLPOINTER)2, 0);
        SQLSetConnectAttr(dbc, SQL_ATTR_CONNECTION_TIMEOUT, (SQLPOINTER)2, 0);

        ret = SQLDriverConnect(
            dbc, NULL,
            (SQLCHAR*)connstr, SQL_NTS,
            NULL, 0, NULL,
            SQL_DRIVER_NOPROMPT
        );
         if(SQL_SUCCEEDED(ret)){
        // 4. 分配语句句柄
        SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt);
        
        ret = SQLExecDirect(stmt, (SQLCHAR*)query.c_str(), SQL_NTS);
        if (!SQL_SUCCEEDED(ret)) {
            break;
        }
        else  {
            SQLCHAR tablename[128];
            while (SQLFetch(stmt) == SQL_SUCCESS) {
                SQLGetData(stmt, 1, SQL_C_CHAR, tablename, sizeof(tablename), nullptr);
                tables.push_back((const char*)tablename);
            }
        }
        SQLFreeStmt(stmt, SQL_CLOSE);
        /* code */
    } else {
        print_odbc_error(SQL_HANDLE_DBC, dbc, "SQLConnect failed");
    }
    }while(false);
   


    if (stmt != SQL_NULL_HSTMT)
        SQLFreeHandle(SQL_HANDLE_STMT, stmt);
    if (dbc != SQL_NULL_HDBC) {
        SQLDisconnect(dbc);
        SQLFreeHandle(SQL_HANDLE_DBC, dbc);
    }
    if (env != SQL_NULL_HENV)
        SQLFreeHandle(SQL_HANDLE_ENV, env);
}

// void VirtuosoClient::query_view_and_tables(const std::string &query, std::vector<std::string> &tables) {
//     SQLHENV env;
//     SQLHDBC dbc;
//     SQLHSTMT stmt;
//     SQLRETURN ret;
//     // 1. 分配环境句柄
//     SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
//     SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (void*)SQL_OV_ODBC3, 0);
//     // 2. 分配连接句柄
//     SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc);
//     // 3. 连接数据库（使用 DSN）
//     ret = SQLConnect(dbc, 
//                      (SQLCHAR*)"VirtuosoDSN", SQL_NTS, 
//                      (SQLCHAR*)"dba", SQL_NTS, 
//                      (SQLCHAR*)"dba", SQL_NTS);
//     if(SQL_SUCCEEDED(ret)){
//         // cout<<"Connected to Virtuoso successfully!" << std::endl;
//         // 4. 分配语句句柄
//         SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt);
        
//         ret = SQLExecDirect(stmt, (SQLCHAR*)query.c_str(), SQL_NTS);
//         if (!SQL_SUCCEEDED(ret)) {
            
//         }
//         else  {
//             SQLCHAR tablename[128];
//             while (SQLFetch(stmt) == SQL_SUCCESS) {
//                 SQLGetData(stmt, 1, SQL_C_CHAR, tablename, sizeof(tablename), nullptr);
//                 tables.push_back((const char*)tablename);
//             }
//         }
        
//         SQLFreeStmt(stmt, SQL_CLOSE);
//         /* code */
//     } else {
//         print_odbc_error(SQL_HANDLE_DBC, dbc, "SQLConnect failed");
//     }
//     // 5. 执行查询
//     SQLFreeHandle(SQL_HANDLE_STMT, stmt);
//     SQLDisconnect(dbc);

//     SQLFreeHandle(SQL_HANDLE_DBC, dbc);
//     SQLFreeHandle(SQL_HANDLE_ENV, env);
// }
// 使用DSN连接Virtuoso数据库
// ExecutionStatus VirtuosoClient::send_sql(const std::string &query) {
//     SQLHENV env;
//     SQLHDBC dbc;
//     SQLHSTMT stmt;
//     SQLRETURN ret;

//     // 1. 分配环境句柄
//     SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
//     SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (void*)SQL_OV_ODBC3, 0);

//     // 2. 分配连接句柄
//     SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc);

//     // 3. 连接数据库（使用 DSN）
//     ret = SQLConnect(dbc, 
//                      (SQLCHAR*)"VirtuosoDSN", SQL_NTS, 
//                      (SQLCHAR*)"dba", SQL_NTS, 
//                      (SQLCHAR*)"dba", SQL_NTS);
//     if(SQL_SUCCEEDED(ret)){
//         // cout<<"Connected to Virtuoso successfully!" << std::endl;
//         // 4. 分配语句句柄
//         SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt);
//         std::vector<std::string> sqls = split_sql(query);
//         for (const auto &sql : sqls) {
//             if(getenv("DEBUG_MODE"))cout<<"sql:"<<sql<<endl;
//             extract_create_tables_views(sql);
//             ret = SQLExecDirect(stmt, (SQLCHAR*)sql.c_str(), SQL_NTS);
//             if (!SQL_SUCCEEDED(ret)) {
//                 if(print_odbc_error(SQL_HANDLE_STMT, stmt, "SQLExecDirect failed") == kServerCrash){
//                     cout<<"crash sql: "<<sql<<endl;
//                     std::cout<<"Failed to execute SQL: "<<sql<<std::endl;
//                     return kServerCrash;
//                 }
                
//             }
//             else  {
//                 // std::cout<<"success to execute SQL: "<<sql<<std::endl;

//                 // SQLCHAR user[128];
//                 // while (SQLFetch(stmt) == SQL_SUCCESS) {
//                 //     SQLGetData(stmt, 1, SQL_C_CHAR, user, sizeof(user), nullptr);
//                 //     std::cout << "User: " << user << std::endl;
//                 // }
//             }
            
//             SQLFreeStmt(stmt, SQL_CLOSE);
//             // 补丁，防止没有捕捉到异常
//             if (!check_alive()){
//                 return kServerCrash;
//             }
            
//         }
//         /* code */
//     } else {
//         print_odbc_error(SQL_HANDLE_DBC, dbc, "SQLConnect failed");
//     }
//     // 5. 执行查询
//     SQLFreeHandle(SQL_HANDLE_STMT, stmt);
//     SQLDisconnect(dbc);

//     SQLFreeHandle(SQL_HANDLE_DBC, dbc);
//     SQLFreeHandle(SQL_HANDLE_ENV, env);
//     return kNormal;
// }

ExecutionStatus VirtuosoClient::send_sql(const std::string &query) {
    ExecutionStatus status = kNormal;

    SQLHENV  env  = SQL_NULL_HENV;
    SQLHDBC  dbc  = SQL_NULL_HDBC;
    SQLHSTMT stmt = SQL_NULL_HSTMT;
    SQLRETURN ret;

    do {
        int port = get_virtuoso_port();
        if (port <= 0) {
            status = kServerCrash;
            break;
        }

        char connstr[256];
        snprintf(connstr, sizeof(connstr),
                 "DRIVER=Virtuoso;HOST=127.0.0.1:%d;UID=dba;PWD=dba;",
                 port);

        if (SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env) != SQL_SUCCESS) {
            status = kServerCrash;
            break;
        }

        SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION,
                      (void*)SQL_OV_ODBC3, 0);

        if (SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc) != SQL_SUCCESS) {
            status = kServerCrash;
            break;
        }

        SQLSetConnectAttr(dbc, SQL_LOGIN_TIMEOUT, (SQLPOINTER)2, 0);
        SQLSetConnectAttr(dbc, SQL_ATTR_CONNECTION_TIMEOUT, (SQLPOINTER)2, 0);

        ret = SQLDriverConnect(
            dbc, NULL,
            (SQLCHAR*)connstr, SQL_NTS,
            NULL, 0, NULL,
            SQL_DRIVER_NOPROMPT
        );

        if (!SQL_SUCCEEDED(ret)) {
            status = kServerCrash;
            break;
        }

        if (SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt) != SQL_SUCCESS) {
            status = kServerCrash;
            break;
        }

        SQLSetStmtAttr(stmt, SQL_ATTR_QUERY_TIMEOUT, (SQLPOINTER)60, 0);

        std::vector<std::string> sqls = split_sql(query);

        for (const auto &sql : sqls) {
            ret = SQLExecDirect(stmt, (SQLCHAR*)sql.c_str(), SQL_NTS);

            if (!SQL_SUCCEEDED(ret)) {
                if (print_odbc_error(SQL_HANDLE_STMT, stmt,
                                     "SQLExecDirect failed") == kServerCrash) {
                    status = kServerCrash;
                    break;
                }
            }

            SQLFreeStmt(stmt, SQL_CLOSE);

            if (!check_alive()) {
                status = kServerCrash;
                break;
            }
        }

    } while (false);

    /* 统一清理区 */
    if (stmt != SQL_NULL_HSTMT)
        SQLFreeHandle(SQL_HANDLE_STMT, stmt);
    if (dbc != SQL_NULL_HDBC) {
        SQLDisconnect(dbc);
        SQLFreeHandle(SQL_HANDLE_DBC, dbc);
    }
    if (env != SQL_NULL_HENV)
        SQLFreeHandle(SQL_HANDLE_ENV, env);

    return status;
}
} // namespace client
