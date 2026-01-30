#include "client_clickhouse.h"
#include "client.h"

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <atomic>
#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/socket.h>

namespace client {

// ANSI colors
const std::string RESET   = "\033[0m";
const std::string RED     = "\033[31m";
const std::string GREEN   = "\033[32m";
const std::string YELLOW  = "\033[33m";
static const uint64_t CLIENT_REVISION       = 54454;
static const uint64_t CLIENT_VERSION_MAJOR  = 22;
static const uint64_t CLIENT_VERSION_MINOR  = 3;

// ----------------------- Low-level helpers ------------------------

static uint8_t *write_uvarint(uint8_t *p, uint64_t x) {
    while (x >= 0x80) {
        *p++ = (uint8_t)(x | 0x80);
        x >>= 7;
    }
    *p++ = (uint8_t)x;
    return p;
}

static uint8_t *write_str(uint8_t *p, const std::string &s) {
    p = write_uvarint(p, s.size());
    memcpy(p, s.data(), s.size());
    return p + s.size();
}

static int tcp_connect(const std::string &host, uint16_t port) {
    struct addrinfo hints{}, *res;
    char portbuf[16];
    snprintf(portbuf, sizeof(portbuf), "%u", port);

    hints.ai_socktype = SOCK_STREAM;

    if (getaddrinfo(host.c_str(), portbuf, &hints, &res) != 0)
        return -1;

    int sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (sock < 0) return -1;

    if (connect(sock, res->ai_addr, res->ai_addrlen) < 0) {
        close(sock);
        return -1;
    }

    freeaddrinfo(res);
    return sock;
}

// ----------------------- ClickHouseClient ------------------------

void ClickHouseClient::initialize(YAML::Node config) {
    host_ = config["host"] ? config["host"].as<std::string>() : "127.0.0.1";
    port_ = 9000;

    std::cout << "TCP ClickHouse server: " << host_ << ":" << port_ << std::endl;
}

bool ClickHouseClient::check_alive() {
    int s = tcp_connect(host_, port_);
    if (s >= 0) { close(s); return true; }
    return false;
}

void ClickHouseClient::prepare_env() {
    database_id_++;
    db_name_ = "test" + std::to_string(database_id_);

    std::string sql = "CREATE DATABASE IF NOT EXISTS " + db_name_;
    send_sql(sql);
    db_created_ = true;
}

void ClickHouseClient::clean_up_env() {
    if (!db_created_) return;
    std::string sql = "DROP DATABASE IF EXISTS " + db_name_;
    send_sql(sql);
    db_created_ = false;
}

// -------------------- Binary Protocol: Send Query --------------------

static int send_client_hello(int sock) {
    uint8_t buf[256];
    uint8_t *p = buf;

    *p++ = 0;   // ClientHello packet type

    *p++ = CLIENT_VERSION_MAJOR;
    *p++ = CLIENT_VERSION_MINOR;

    p = write_uvarint(p, CLIENT_REVISION);

    p = write_str(p, "FuzzClient");
    p = write_str(p, "default");   // default database

    size_t len = p - buf;
    return send(sock, buf, len, 0);
}

static void recv_server_hello(int sock) {
    uint8_t buf[4096];
    recv(sock, buf, sizeof(buf), 0);
}

// Build a "Query" packet
static int send_query_packet(int sock, const std::string &sql) {
    uint8_t buf[65536];
    uint8_t *p = buf;

    *p++ = 1;  // Query packet

    // query_id = ""
    p = write_str(p, "");

    // SETTINGS: allow multi-stmt (ON because fuzz uses many semicolons)
    p = write_uvarint(p, 1);               // num settings
    p = write_str(p, "allow_multi_statements");
    p = write_str(p, "1");

    // stage = Complete
    p = write_uvarint(p, 2);

    // no compression
    *p++ = 0;

    // SQL text
    p = write_str(p, sql);

    // ClientInfo: empty
    p = write_uvarint(p, 0);

    size_t len = p - buf;
    return send(sock, buf, len, 0);
}

// -------------------- High-level: send SQL --------------------

ExecutionStatus ClickHouseClient::send_sql(const std::string &sql) {
    int sock = tcp_connect(host_, port_);
    if (sock < 0) return kConnectFailed;

    // 1) ClientHello
    if (send_client_hello(sock) <= 0) {
        close(sock);
        return kConnectFailed;
    }

    // 2) ServerHello
    recv_server_hello(sock);

    // 3) Full query: USE db + sql
    std::string full = sql;

    // 4) Send binary Query packet
    if (send_query_packet(sock, full) <= 0) {
        close(sock);
        return kConnectFailed;
    }

    // 5) Read a small response; we don't need full block parsing
    uint8_t resp[8192];
    recv(sock, resp, sizeof(resp), 0);

    close(sock);
    return kNormal;
}
ExecutionStatus ClickHouseClient::execute(const char *query, size_t size) {
    // if (!query || size == 0) return kSyntaxError;
    // if (!db_created_ || db_name_.empty()) return kConnectFailed;

    std::string sql_body(reinterpret_cast<const char*>(query), size);
    std::string full = "USE " + db_name_ + "\n" + sql_body;

    return send_sql(full);
}
} // namespace client
