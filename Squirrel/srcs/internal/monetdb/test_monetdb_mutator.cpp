#include <fstream>
#include <iostream>
#include <string>

#include "absl/strings/str_format.h"
#include "include/utils.h"
#include "monetdb.h"
#include "nlohmann/json.hpp"
using json = nlohmann::json;
void print_ir(Program* p) {
  vector<IR*> v_ir;
  auto res = p->translate(v_ir);
  cout << "parsing res:" << endl;
  cout << res->to_string() << endl;
  cout << "parsing res end----" << endl;
  p = NULL;
  deep_delete(res);
}
void parse_sql(std::string sql) {
  Program* p = parser_with_error_recover(sql, 1, true, true);
  if (p == NULL) {
    // std::cout <<RED<<"[ERROR] new parse failed" <<RESET << std::endl;
  } else {
    // std::cout <<GREEN<<"[INFO] new parse success" <<RESET << std::endl;
    print_ir(p);
    // p->deep_delete();
  }
  // 测试注释之后还能恢复到原来的 string
}
void test_comment() {
  // std::string sql = "CREATE TABLE (v1 Int32 NOT NULL PRIMARY KEY) ENGINE =
  // MergeTree() ORDER BY (v1);";
  std::string sql = "Select SUM(DISTINCT octet_length(name)) s1 FROM t1;";
  // std::string sql = "Select SUM(DISTINCT octet_length(name)) FROM t1 where
  // name = 'a';";
  // std::string sql = "Select SUM(DISTINCT octet_length(name))  FROM t1;";
  // parse_sql(sql);
  // sql = "Select SUM(DISTINCT octet_length(name)) /*s1*/ FROM t1;";
  // parse_sql(sql);
  sql = "Select * FROM t1;";
  parse_sql(sql);

  cout << GREEN << "---- 测试多个注释----" << RESET << endl;
  sql = "Select SUM(DISTINCT octet_length(name)) /*s1*/  FROM t1;";
  sql = "Select a /*s1*/ /*22222*/ FROM t1;";
  parse_sql(sql);
  sql = "Select a /* ,a > 11 */ FROM t1;";
  parse_sql(sql);
  // cout<<GREEN<<"---- 测试monetdb result----"<<RESET<<endl;
  // sql = "CREATE TABLE (v1);";
  // parse_sql(sql);

  cout << GREEN << "---- 测试monetdb demo----" << RESET << endl;
  // sql = "CREATE TABLE (v1 Int32 NOT NULL PRIMARY KEY) ENGINE = MergeTree()
  // ORDER BY (v1);";
  // parse_sql(sql);
  // 不 work
  // sql = R"(SELECT "movie_title", "movie_release_year" FROM "movies" ORDER BY
  // length("movie_popularity") DESC LIMIT 1;)"; parse_sql(sql);
  cout << GREEN << "---- 测试monetdb 中的 . ----" << RESET << endl;
  sql =
      R"(SELECT a.id FROM t1 AS a JOIN t1 AS b ON a.id=b.id WHERE a.id IN (1,2,3);)";
  parse_sql(sql);
  sql =
      R"(SELECT T2.movie_title FROM ratings AS T1 INNER JOIN movies AS T2 ON T1.movie_id = T2.movie_id WHERE CAST(substring(T1.rating_timestamp_utc from 1 for 4) AS INTEGER) = 2020 AND CAST(substring(T1.rating_timestamp_utc from 6 for 2) AS INTEGER) > 4;)";
  parse_sql(sql);
}
int test_comment_read_from_json() {
  /*
   * test.json 格式如下:
   * {
   *   "test_comment": [
   *       {
   *           "info": "---- 测试 monetdb 中的 . ----",
   *           "sqls": [
   *               "SELECT a.id FROM t1 AS a JOIN t1 AS b ON a.id=b.id WHERE
   * a.id IN (1,2,3);"
   *           ]
   *       }
   *   ]
   * }
   */
  ifstream ifs("test.json");
  if (!ifs.is_open()) {
    cerr << "无法打开文件" << endl;
    return 1;
  }

  try {
    // 解析JSON数据
    json j;
    ifs >> j;
    // 检查是否包含test_comment数组
    if (j.contains("test_comment") && j["test_comment"].is_array()) {
      // 遍历test_comment数组
      for (const auto& item : j["test_comment"]) {
        // 输出info字段
        if (item.contains("info") && item["info"].is_string()) {
          std::cout << GREEN << "[INFO] " << item["info"] << RESET << std::endl;
        }

        // 输出sql数组
        if (item.contains("sqls") && item["sqls"].is_array()) {
          for (const auto& sql : item["sqls"]) {
            if (sql.is_string()) {
              parse_sql(sql);
            }
          }
        }
      }
    } else {
      cerr << "JSON中不包含test_commnet数组" << endl;
    }
  } catch (const json::parse_error& e) {
    cerr << "JSON解析错误: " << e.what() << endl;
    return 1;
  } catch (const exception& e) {
    cerr << "错误: " << e.what() << endl;
    return 1;
  }
}
string get_string_in_file(string path) {
  string sql = "";
  ifstream ifs(path);
  if (ifs.is_open()) {
    string line;
    while (getline(ifs, line)) {
      sql += line + "\n";
    }
    ifs.close();
  } else {
    cerr << "无法打开文件" << endl;
  }
  return sql;
}
int main(int argc, char* argv[]) {
  cout<<argv[0]<<endl;
  cout<<argv[1]<<endl;
  // 读取参数
  if (argc < 1 || strcmp(argv[1], "1") == 0) {
    test_comment_read_from_json();
  } else if(strcmp(argv[1], "2") == 0) {
    MONETDB* db = create_monetdb();
    const char* config_file_path = "/home/Squirrel/data/config_monetdb.yml";
    std::string config_file(config_file_path);
    std::cerr << "Config file: " << config_file << std::endl;
    YAML::Node config = YAML::LoadFile(config_file);

    db->initialize(config);
    exit(0);
    // 批量读取某个文件夹的所有文件
    std::string init_lib_path =
        "/home/Squirrel/data/fuzz_root/feature_knowledge_base_plus/monetdb";
    vector<string> sql_files = get_all_files_in_dir(init_lib_path.c_str());
    // vector<string> sql_files ;
    // sql_files.push_back("function___sum_decimal_expr___.json");
    for (auto sql_file : sql_files) {
      cout << GREEN << "[INFO] 正在处理文件" << sql_file << RESET << endl;
      string sql =
          get_string_in_file(absl::StrFormat("%s/%s", init_lib_path, sql_file));
      cout << GREEN << "sql:" << sql << RESET << endl;
      Program* p = parser_with_error_recover(sql, 1, true, true);
      if (p == NULL) {
        std::cout << RED << "[ERROR] new parse failed" << RESET << std::endl;
      } else {
        std::cout << GREEN << "[INFO] new parse success" << RESET << std::endl;
        print_ir(p);
        p->deep_delete();
        size_t size = db->mutate(sql);
        cout << GREEN << "muatable size:" << size << RESET << endl;
      }
      
      // if (size > 0) {
      //   string mutated_sql = db->get_next_mutated_query();
      //   cout << GREEN << "mutated_sql:" << mutated_sql << RESET << endl;
    }
  }
  return 0;
}