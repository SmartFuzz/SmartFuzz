#include "../include/utils.h"

#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <algorithm>
void trim_string(string &res) {
  // 新增 sql 中的换行符，去除多余的空格
  int count = 0;
  int idx = 0;
  bool expect_space = false;
  for (int i = 0; i < res.size(); i++) {
    if (res[i] == ';' && i != res.size() - 1) {
      res[i + 1] = '\n';
    }
    if (res[i] == ' ') {
      if (expect_space == false) {
        continue;
      } else {
        expect_space = false;
        res[idx++] = res[i];
        count++;
      }
    } else {
      expect_space = true;
      res[idx++] = res[i];
      count++;
    }
  }

  res.resize(count);
}

string gen_string() { return string("x"); }

double gen_float() { return 1.2; }

long gen_long() { return 1; }

int gen_int() { return 1; }

typedef unsigned long uint64_t;

Program *parser(string sql) {
  yyscan_t scanner;          // 声明词法分析器实例
  YY_BUFFER_STATE state;     // 声明缓冲区状态对象
  Program *p = new Program(); // 创建Program对象存储解析结果
  // yy_buf_pos in YY_BUFFER_STATE
  if (ff_lex_init(&scanner)) { // 初始化词法分析器
    return NULL;              // 初始化失败返回NULL
  }
  state = ff__scan_string(sql.c_str(), scanner); // 将SQL字符串绑定到扫描器缓冲区

  int ret = ff_parse(p, scanner);

  ff__delete_buffer(state, scanner);
  ff_lex_destroy(scanner);
  // 错误处理
  if (ret != 0) {
    p->deep_delete();
    return NULL;
  }

  return p;
}
// 辅助函数：将行列号转换为字符串索引
int get_position(const std::string& input, int line, int col) {
    int current_line = 0;
    int current_col = 0;
    for (size_t i = 0; i < input.size(); ++i) {
        if (current_line == line && current_col == col) return i;
        if (input[i] == '\n') {
            current_line++;
            current_col = 0;
        } else {
            current_col++;
        }
    }
    return input.size();  // 未找到时返回末尾
}

Program *parser_with_error_recover(string sql, int cnt=1,bool is_recover=true,bool is_print=true) {
  if (cnt > MAX_RECOVER_CNT) {
    if(is_print) std::cout << RED << "[INFO] 达到最大重试次数" << RESET << std::endl;
    return NULL;
  }
  if(is_print) std::cout << MAGENTA << "[INFO] parsing sql:"<<sql << RESET << std::endl;

  yyscan_t scanner;            // 声明词法分析器实例
  YY_BUFFER_STATE state;       // 声明缓冲区状态对象
  Program *p = new Program();  // 创建Program对象存储解析结果

  if (ff_lex_init(&scanner)) {  // 初始化词法分析器
    return NULL;                // 初始化失败返回NULL
  }
  state =
      ff__scan_string(sql.c_str(), scanner);  // 将SQL字符串绑定到扫描器缓冲区
  int ret = ff_parse(p, scanner);  // 调用解析器处理SQL，结果存入Program对象

  ff__delete_buffer(state, scanner);  // 释放缓冲区
  ff_lex_destroy(scanner);            // 销毁词法分析器
  if (ret != 0 && is_recover) {
    if(is_print) std::cout << RED << "[ERROR] 第" << cnt << "次解析失败, 尝试插入注释" << RESET << endl;  // 检查解析是否成功
    std::string modified = sql;
    int offset = 0;  // 记录插入注释导致的偏移量
    // 按错误位置倒序处理（避免偏移影响）
    std::sort(
        p->errors.begin(), p->errors.end(),
        [](const ErrorPosition &a, const ErrorPosition &b) {
          return a.first_line > b.first_line ||
                 (a.first_line == b.first_line && a.first_col > b.first_col);
        });

    for (const auto &err : p->errors) {
      if(is_print) std::cout << "err: " << err.first_line << " " << err.first_col << " "
                << err.last_line << " " << err.last_col << std::endl;
      int start =
          get_position(modified, err.first_line, err.first_col) + offset;
      int end = get_position(modified, err.last_line, err.last_col) +
                offset;  // 插入注释符号
      // 如果 modified start，end 之间为 ";"，跳过
      if (modified[start] == ';' ) {
         if(is_print) std::cout<<RED<<"[ERROR] 包含\";\" 跳过"<<RESET<<endl;
         return NULL;
      }
      modified.insert(end, "*/");
      modified.insert(start, "/*");
      offset += 4;  // 每次插入增加4个字符（/*和*/）
    }
    // std::cout << "modified: " << modified << std::endl;
    p->deep_delete();  // 解析失败时深度释放Program对象
    return parser_with_error_recover(modified, cnt + 1, is_recover,is_print);
    // 返回NULL表示解析失败
  } else {
    if(is_print) std::cout << GREEN << "[INFO] 第" << cnt << "次解析成功" << RESET << std::endl;
  }
  return p;  // 返回解析成功的Program对象
}

uint64_t ducking_hash(const void *key, int len) {
  const uint64_t m = 0xc6a4a7935bd1e995;
  const int r = 47;
  uint64_t h = 0xdeadbeefdeadbeef ^ (len * m);

  const uint64_t *data = (const uint64_t *)key;
  const uint64_t *end = data + (len / 8);

  while (data != end) {
    uint64_t k = *data++;

    k *= m;
    k ^= k >> r;
    k *= m;

    h ^= k;
    h *= m;
  }

  const unsigned char *data2 = (const unsigned char *)data;

  switch (len & 7) {
    case 7:
      h ^= uint64_t(data2[6]) << 48;
    case 6:
      h ^= uint64_t(data2[5]) << 40;
    case 5:
      h ^= uint64_t(data2[4]) << 32;
    case 4:
      h ^= uint64_t(data2[3]) << 24;
    case 3:
      h ^= uint64_t(data2[2]) << 16;
    case 2:
      h ^= uint64_t(data2[1]) << 8;
    case 1:
      h ^= uint64_t(data2[0]);
      h *= m;
  };

  h ^= h >> r;
  h *= m;
  h ^= h >> r;

  return h;
}

vector<string> get_all_files_in_dir(const char *dir_name) {
  vector<string> file_list;
  if (NULL == dir_name) {
    cout << " dir_name is null ! " << endl;
    return file_list;
  }

  struct stat s;
  lstat(dir_name, &s);
  if (!S_ISDIR(s.st_mode)) {
    cout << "dir_name is not a valid directory !" << endl;
    return file_list;
  }

  struct dirent *filename;  // return value for readdir()
  DIR *dir;                 // return value for opendir()
  dir = opendir(dir_name);
  if (NULL == dir) {
    cout << "Can not open dir " << dir_name << endl;
    return file_list;
  }
  cout << "Successfully opened the dir !" << endl;

  while ((filename = readdir(dir)) != NULL) {
    if (strcmp(filename->d_name, ".") == 0 ||
        strcmp(filename->d_name, "..") == 0)
      continue;
    cout << filename->d_name << endl;
    file_list.push_back(string(filename->d_name));
  }
  return file_list;
}