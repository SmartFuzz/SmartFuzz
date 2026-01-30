#ifndef __UTILS_H__
#define __UTILS_H__
#include <string>

#include "../parser/bison_parser.h"
#include "../parser/flex_lexer.h"
#include "ast.h"
#include "define.h"
//#include "/usr/local/mysql/include/mysql.h"

#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <cstdio>
#include <cstdlib>

using std::string;

#define get_rand_int(range) rand() % (range)
//#define vector_rand_ele(a) (a[get_rand_int(a.size())])
#define vector_rand_ele(a) \
  (a.size() != 0 ? a[get_rand_int(a.size())] : gen_id_name())
// 定义颜色常量（ANSI转义序列）
const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const int MAX_RECOVER_CNT = 20;
const std::string DEBUG_MODE = "DEBUG_MODE";
#define debug_log(stmt) if (getenv(DEBUG_MODE.c_str())) { stmt }

IR *deep_copy(const IR *root);
void deep_delete(IR *root);

Program *parser(string sql);
string get_string_by_type(IRTYPE);
void print_ir(IR *ir);
void print_v_ir(vector<IR *> &v_ir_collector);
uint64_t ducking_hash(const void *key, int len);
void trim_string(string &);
vector<string> get_all_files_in_dir(const char *dir_name,
                                    bool absolute = false);
string magic_string_generator(string &s);
Program *parser_with_error_recover(string sql, int cnt=1 ,bool is_recover=true,bool is_print=false);

#endif
