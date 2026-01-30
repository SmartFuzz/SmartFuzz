#ifndef __UTILS_H__
#define __UTILS_H__

#include <string>
#include <vector>

#include "../parser/bison_parser.h"
#include "../parser/flex_lexer.h"
using std::string;
using std::vector;
#define get_rand_int(range) rand() % (range)
#define vector_rand_ele_safe(a) \
  (a.size() != 0 ? a[get_rand_int(a.size())] : gen_id_name())
#define vector_rand_ele(a) (a[get_rand_int(a.size())])
// 定义颜色常量（ANSI转义序列）
const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const int MAX_RECOVER_CNT = 40;
const std::string DEBUG_MODE = "DEBUG_MODE";
#ifdef DEBUG
#    define DEBUG_PRINT(fmt, ...) fprintf(stderr, "%s[DEBUG] %s" fmt, YELLOW.c_str(), RESET.c_str(), ##__VA_ARGS__)
#    define RELEASE_PRINT(fmt, ...) fprintf(stderr, "%s[RELEASE] %s" fmt, GREEN.c_str(), RESET.c_str(), ##__VA_ARGS__)
#else
#    define DEBUG_PRINT(fmt, ...) 
#    define RELEASE_PRINT(fmt, ...) fprintf(stderr, "%s[RELEASE] %s" fmt, GREEN.c_str(), RESET.c_str(), ##__VA_ARGS__)
#endif

#define debug_log(stmt) if (getenv(DEBUG_MODE.c_str())) { stmt }
void trim_string(string &);

string gen_string();

double gen_float();

long gen_long();

int gen_int();

uint64_t ducking_hash(const void *key, int len);
vector<string> get_all_files_in_dir(const char *dir_name);
Program *parser(string sql);
Program *parser_with_error_recover(string sql, int cnt ,bool is_recover,bool is_print);

#endif
