#include "client_clickhouse.h"
#include "client.h"

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <atomic>
#include <iostream>

namespace client {

// ANSI colors
const std::string RESET   = "\033[0m";
const std::string RED     = "\033[31m";
const std::string GREEN   = "\033[32m";
const std::string YELLOW  = "\033[33m";

void ClickHouseClient::initialize(YAML::Node config) {
    curl_global_init(CURL_GLOBAL_DEFAULT);   

    if (config["host"]) {
        server_url_ = "http://" + config["host"].as<std::string>() + ":8123/";
    }
    std::cout << "Server URL: " << server_url_ << std::endl;
}

bool ClickHouseClient::check_alive() {
    CURL *c = curl_easy_init();
    if (!c) return false;

    curl_easy_setopt(c, CURLOPT_URL, server_url_.c_str());
    curl_easy_setopt(c, CURLOPT_TIMEOUT_MS, 1500L);
    curl_easy_setopt(c, CURLOPT_NOBODY, 1L);
    curl_easy_setopt(c, CURLOPT_NOSIGNAL, 1L);

    CURLcode res = curl_easy_perform(c);
    curl_easy_cleanup(c);
    return res == CURLE_OK;
}

void ClickHouseClient::prepare_env() {
    database_id_++;
    db_name_ = "test" + std::to_string(database_id_);

    std::string sql = "CREATE DATABASE IF NOT EXISTS " + db_name_ + ";";
    ExecutionStatus s = send_sql(sql);

    db_created_ = (s == kNormal);
}

ExecutionStatus ClickHouseClient::execute(const char *query, size_t size) {
    if (!query || size == 0) return kSyntaxError;
    if (!db_created_ || db_name_.empty()) return kConnectFailed;
    
    std::string sql_body(reinterpret_cast<const char*>(query), size);
    std::vector<std::string> sqls;
    std::stringstream ss(sql_body);
    std::string line;
    while (std::getline(ss, line, ';')) {
        if (line.empty()) continue;
        sqls.push_back(line);
    }
    for (size_t i = 0; i < sqls.size(); i++)
    {

        ExecutionStatus s = send_sql_use_database(sqls[i]);
        // std::cout << "Executing SQL: " << sqls[i] << std::endl;
        if (s == kServerCrash) {
            std::cout << RED << "Error: Server crashed" << RESET << std::endl;
            return s;
        }
    }
    

    return kNormal;
}

void ClickHouseClient::clean_up_env(int g_db_pid) {
    if (db_name_.empty()) return;

    std::string sql = "DROP DATABASE IF EXISTS " + db_name_ + ";";
    send_sql(sql);
}

ExecutionStatus ClickHouseClient::send_sql(const std::string &sql) {
    CURL *curl = curl_easy_init();   // ✔ one handle per request
    if (!curl) return kConnectFailed;
    curl_easy_setopt(curl, CURLOPT_URL, server_url_.c_str());
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, sql.c_str());
    curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, sql.size());
    curl_easy_setopt(curl, CURLOPT_TIMEOUT_MS, 5000L);
    curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1L);

    struct curl_slist *headers = nullptr;
    headers = curl_slist_append(headers, "Content-Type: text/plain");
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

    CURLcode res = curl_easy_perform(curl);

    long http_code = 0;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);

    curl_slist_free_all(headers);
    curl_easy_cleanup(curl);

    if (res != CURLE_OK) {
        if (res == CURLE_OPERATION_TIMEDOUT) return kTimeout;
        return kConnectFailed;
    }

    if (http_code >= 500) return kServerCrash;
    if (http_code >= 400) return kSyntaxError;

    return kNormal;
}
ExecutionStatus ClickHouseClient::send_sql_use_database(const std::string &sql) {
    CURL *curl = curl_easy_init();   // ✔ one handle per request
    if (!curl) return kConnectFailed;
    std::string database_url=server_url_+"?database="+db_name_;
    curl_easy_setopt(curl, CURLOPT_URL, database_url.c_str());
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, sql.c_str());
    curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, sql.size());
    curl_easy_setopt(curl, CURLOPT_TIMEOUT_MS, 5000L);
    curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1L);
    std::string response;  // 用来保存返回内容
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION,
        +[](char *ptr, size_t size, size_t nmemb, void *userdata) -> size_t {
            auto *resp = static_cast<std::string*>(userdata);
            resp->append(ptr, size * nmemb);
            return size * nmemb;
        }
    );
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    struct curl_slist *headers = nullptr;
    headers = curl_slist_append(headers, "Content-Type: text/plain");
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

    CURLcode res = curl_easy_perform(curl);

    long http_code = 0;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);

    curl_slist_free_all(headers);
    curl_easy_cleanup(curl);

    if (res != CURLE_OK) {
        if (res == CURLE_OPERATION_TIMEDOUT) return kTimeout;
        // std::cout<<"res:"<<res<<std::endl;
        if (res == CURLE_GOT_NOTHING) return kServerCrash;
        // 默认兜底：暂时不要使用
        // return kServerCrash;
        
    }
    if (res != CURLE_OK) {
        response = curl_easy_strerror(res);  // 可返回错误原因
    // std::cout << "Executing SQL: " << sql << std::endl;

    }
    if(!check_alive()) return kServerCrash;
    // std::cout << " Response: " << response << std::endl;
    if (response.find("Server returned nothing") != std::string::npos) return kServerCrash;
   
    return kNormal;
}

} // namespace client
