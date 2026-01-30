#include <unistd.h>

#include <cassert>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "client.h"
#include "yaml-cpp/yaml.h"
using namespace std;
void start_up(client::DBClient *test_client, std::string startup_cmd) {
  while (!test_client->check_alive()) {
    system(startup_cmd.c_str());
    std::cout << "[INFO] check alive failed,restarting..." << std::endl;
    sleep(5);
  }
}
/* 从 test_client.yml 中的 fuzz_dir 读取 fuzz 文件，依次执行里面的种子进行结果
 */
void read_from_fuzz_dir(client::DBClient *test_client, string startup_cmd) {
  string test_config = "/home/Squirrel/test_client.yml";
  YAML::Node config = YAML::LoadFile(test_config);
  string fuzz_dir = config["fuzz_dir"].as<std::string>();
  startup_cmd = config["startup_cmd"].as<std::string>();
  start_up(test_client, startup_cmd);
  std::vector<std::string> fuzz_files;
  // 按文件顺序读取 fuzz 文件
  for (const auto &entry : filesystem::directory_iterator(fuzz_dir)) {
    if (entry.path().string().find("id:") == string::npos) {
      continue;
    }
    fuzz_files.push_back(entry.path().string());
  }
  // 排序
  sort(fuzz_files.begin(), fuzz_files.end());
  cout << "fuzz_files size:" << fuzz_files.size() << endl;
  cout << "fuzz_files:" << fuzz_files[0] << endl;
  for (int i = 0; i < fuzz_files.size(); i++) {
    std::cout << "------------------ start ------------------ " << i
              << std::endl;
    string fuzz_file = fuzz_files[i];
    cout << "[info] handling fuzz_file:" << fuzz_file << "..." << endl;
    std::ifstream infile(fuzz_file);
    std::string query((std::istreambuf_iterator<char>(infile)),
                      std::istreambuf_iterator<char>());
    // std::cout << content << std::endl;
    test_client->prepare_env();
    cout << "query:" << query << endl;
    client::ExecutionStatus result =
        test_client->execute(query.c_str(), strlen(query.c_str()));
    std::cout << "返回的当前状态: " << ExecutionStatusToString(result)
              << std::endl;
    cout << "excution result:" << result << endl;

    if (result == client::kServerCrash) {
      cout << "server crash, restart" << endl;
      start_up(test_client, startup_cmd);
    } else {
      cout << "server normal, checking status..." << endl;
      start_up(test_client, startup_cmd);
    }
    test_client->clean_up_env();
    std::cout << "------------------ end ------------------ " << i << std::endl;
    // 等待用户输入回车
    std::cout << "请输入回车继续..." << std::endl;
    // std::cin.get();
  }
}


void read_from_files(std::vector<std::string> fuzz_files,client::DBClient *test_client, string startup_cmd) {
  string test_config = "/home/Squirrel/test_client.yml";
  YAML::Node config = YAML::LoadFile(test_config);
  string fuzz_dir = config["fuzz_dir"].as<std::string>();
  startup_cmd = config["startup_cmd"].as<std::string>();
  start_up(test_client, startup_cmd);
  // 按文件顺序读取 fuzz 文件
  for (int i = 0; i < fuzz_files.size(); i++) {
    std::cout << "------------------ start ------------------ " << i
              << std::endl;
    string fuzz_file = fuzz_files[i];
    cout << "[info] handling fuzz_file:" << fuzz_file << "..." << endl;
    std::ifstream infile(fuzz_file);
    std::string query((std::istreambuf_iterator<char>(infile)),
                      std::istreambuf_iterator<char>());
    // std::cout << content << std::endl;
    test_client->prepare_env();
    cout << "query:" << query << endl;
    client::ExecutionStatus result =
        test_client->execute(query.c_str(), strlen(query.c_str()));
    std::cout << "返回的当前状态: " << ExecutionStatusToString(result)
              << std::endl;
    cout << "excution result:" << result << endl;

    if (result == client::kServerCrash) {
      cout << "server crash, restart" << endl;
      start_up(test_client, startup_cmd);
    } else {
      cout << "server normal, checking status..." << endl;
      start_up(test_client, startup_cmd);
    }
    test_client->clean_up_env();
    std::cout << "------------------ end ------------------ " << i << std::endl;
    // 等待用户输入回车
    std::cout << "请输入回车继续..." << std::endl;
    // std::cin.get();
  }
}
void test_several_case(client::DBClient *test_client, std::string startup_cmd) {
  cout << startup_cmd << endl;
  if (!test_client->check_alive()) {
    cout << "server crash or not start, restart" << endl;
    start_up(test_client, startup_cmd);
  }
  char
      *
          queries
              [] =
                  {

                      "select 1;",
                      /*syntax error*/
                      "CREATE TABLE v0 ( v2 INT , v1 INT ) ; INSERT INTO v0 ( "
                      "v1 , v2 ) VALUES "
                      "( 1 , 1 ) ; SELECT v1 , v1 , v1 , v1 FROM ( SELECT v2 , "
                      "v1 , v1 , v2 , "
                      "regr_r2 ( ) OVER ( PARTITION BY v2 ORDER BY v1 DESC) AS "
                      "v4 FROM v0 ) AS "
                      "v3 WHERE v1 < 3 ;",
                      /*normal*/
                      "CREATE TABLE v0 ( v2 INT , v1 INT ) ; INSERT INTO v0 ( "
                      "v1 , v2 ) "
                      "VALUES ( 3 , 0 ) ; SELECT * FROM v0 ;",
                      /*virtuoso bug */
                      "CREATE TABLE test_encode (input_text VARCHAR, "
                      "lines_per_section INTEGER); INSERT INTO test_encode "
                      "(input_text, lines_per_section) VALUES (REPEAT('B', "
                      "200000), 20)",
                      /*normal*/
                      "CREATE TABLE v0 ( v2 INT , v1 INT ) ; CREATE TABLE v3 ( "
                      "v4 INT , v5 INT ) ; INSERT INTO v0 ( v1 , v2 ) "
                      "VALUES ( 3 , 0 ) ; SELECT * , '1995-03-15' FROM v0 "
                      "WHERE v1 NOT IN "
                      "( 10 ) AND v2 NOT IN ( 3 ) ORDER BY v2 DESC ; ",
                      "CREATE TABLE test_table (id INT, data VARCHAR(255), "
                      "more_data VARCHAR(255)); INSERT INTO test_table (id, "
                      "data, more_data) VALUES (1, 'Hello', 'World');INSERT "
                      "INTO test_table (id, data, more_data) VALUES (2, 'Foo', "
                      "NULL);INSERT INTO test_table (id, data, more_data) "
                      "VALUES (3, '', 'Bar');INSERT INTO test_table (id, data, "
                      "more_data) VALUES (4, 'Baz', '');SELECT "
                      "xte_nodebld_acc(data, more_data) FROM test_table WHERE "
                      "id = 1; ",
                      /*crash*/
                      "CREATE TABLE v0 ( v1 FLOAT , v2 INT CONSTRAINT x CHECK "
                      "( ( v1 ) IS NULL "
                      "AND MAX ( -128 ) OVER ( ORDER BY v1 ) ) ) ;INSERT INTO "
                      "v0 ( v1 ) VALUES "
                      "( 57853173.000000 ) , ( 255 ) , ( 13 ) , ( "
                      "41807059.000000 ) ;CREATE "
                      "TABLE v4 AS SELECT VAR_SAMP ( ) OVER ( PARTITION BY v1 "
                      "/ 33 , v1 / "
                      "-32768 ) AS v3 , v2 FROMREAL FROM v0 ;CREATE TRIGGER v5 "
                      "BEFORE INSERT "
                      "ON v4 FOR EACH ROW INSERT INTO v0 VALUES ( 127 , 8 ) "
                      ";INSERT INTO v0 "
                      "VALUES ( 83 , 94 ) ;SELECT * FROM v4 WHERE ( v1 , v2 > "
                      "73 OR CASE v1 "
                      "WHEN 127 THEN v2 x | | b2 . v0 ELSE 57 END != "
                      "-2147483648 OR v2 = 'x' ) "
                      "NOT IN ( SELECT v2 , ( 16 < v2 AND v1 = -128 ) FROM v4 "
                      "WHERE v1 > 0 ) ;",
                      /*normal*/
                      "SELECT toDecimalString ( '110' :: Decimal256 ( 45 ) , * "
                      ") ;", /*crash*/
                      "SELECT match ( 'xyz' , repeat ( '!(1, ' , 320000 ) ) AS "
                      "token ;", /*crash*/

                      "SELECT singleValueOrNull(toNullable('x'))", /*crash */
                      "CREATE TABLE geometry1 (id INT, geom GEOMETRY); CREATE "
                      "TABLE geometry2 (id INT, geom GEOMETRY); INSERT INTO "
                      "geometry1 (id, geom) VALUES (1, 'POLYGON((0 0, 0 2, 2 "
                      "2, 2 0, 0 0))'::GEOMETRY); INSERT INTO geometry2 (id, "
                      "geom) VALUES (1, 'POLYGON((1 1, 1 3, 3 3, 3 1, 1 "
                      "1))'::GEOMETRY); INSERT INTO geometry2 (id, geom) "
                      "VALUES (2, 'POLYGON((3 3, 3 5, 5 5, 5 3, 3 "
                      "3))'::GEOMETRY); SELECT g1.id FROM geometry1 g1, "
                      "geometry2 g2 WHERE bif:st_within(g2.geom, g1.geom); "
                      "SELECT g1.id, g2.id FROM geometry1 g1 JOIN geometry2 g2 "
                      "ON bif:st_within(g2.geom, g1.geom); SELECT g1.id FROM "
                      "geometry1 g1 WHERE EXISTS (SELECT 1 FROM geometry2 g2 "
                      "WHERE bif:st_within(g2.geom, g1.geom)); SELECT g1.id "
                      "FROM geometry1 g1 WHERE NOT EXISTS (SELECT 1 FROM "
                      "geometry2 g2 WHERE bif:st_within(g2.geom, g1.geom)); "
                      "SELECT g1.id FROM geometry1 g1 WHERE g1.id IN (SELECT "
                      "g2.id FROM geometry2 g2 WHERE bif:st_within(g2.geom, "
                      "g1.geom)); SELECT g1.id FROM geometry1 g1 WHERE "
                      "bif:st_within(g1.geom, (SELECT g2.geom FROM geometry2 "
                      "g2 WHERE g2.id = 1));",
                      "CREATE TABLE IF NOT EXISTS t1 (id UInt32, s String, ts "
                      "DateTime DEFAULT "
                      "now() ) ENGINE = MergeTree() ORDER BY id;INSERT INTO t1 "
                      "VALUES (1, 'a', "
                      "now()), (2, 'b', now());select * from t1;",
                      "CREATE TABLE v0 ( v1 LONG NVARCHAR , v2 CHAR ) ;CREATE VIEW v5 AS SELECT * , DENSE_RANK ( v1 ) AS v3 , ( SELECT STDDEV_POP ( v2 ) FROM v0 tt1 JOIN v0 tt2 ON v0 . v1 = v0 . v2 , v0 WHERE v2 = v2 ) AS v4 FROM v0 a FULL OUTER JOIN v0 tt USING ( v2 , v1 ) NATURAL JOIN v0 WHERE v1 = 'x' ;",
                       
                      "CREATE TABLE v0 ( v1 LONG NVARCHAR , v2 CHAR ) ;CREATE VIEW v5 AS SELECT * , DENSE_RANK ( v1 ) AS v3 , ( SELECT STDDEV_POP ( v2 ) FROM v0 tt1 JOIN v0 tt2 ON v0 . v1 = v0 . v2 , v0 WHERE v2 = v2 ) AS v4 FROM v0 a FULL OUTER JOIN v0 tt USING ( v2 , v1 ) NATURAL JOIN v0 WHERE v1 = 'x' ;",
                       "CREATE TABLE v0 ( v2 INT , v1 INT ) ; INSERT INTO v0 ( "
                      "v1 , v2 ) "
                      "VALUES ( 3 , 0 ) ; SELECT * FROM v0 ;",
                      "CREATE TABLE v0 ( v1 LONG NVARCHAR , v2 CHAR ) ;CREATE VIEW v5 AS SELECT * , DENSE_RANK ( v1 ) AS v3 , ( SELECT STDDEV_POP ( v2 ) FROM v0 tt1 JOIN v0 tt2 ON v0 . v1 = v0 . v2 , v0 WHERE v2 = v2 ) AS v4 FROM v0 a FULL OUTER JOIN v0 tt USING ( v2 , v1 ) NATURAL JOIN v0 WHERE v1 = 'x' ;",
                      "CREATE TABLE v0 ( v1 LONG NVARCHAR , v2 CHAR ) ;CREATE VIEW v5 AS SELECT * , DENSE_RANK ( v1 ) AS v3 , ( SELECT STDDEV_POP ( v2 ) FROM v0 tt1 JOIN v0 tt2 ON v0 . v1 = v0 . v2 , v0 WHERE v2 = v2 ) AS v4 FROM v0 a FULL OUTER JOIN v0 tt USING ( v2 , v1 ) NATURAL JOIN v0 WHERE v1 = 'x' ;",


                  };
  int len = sizeof(queries) / sizeof(queries[0]);
  char *query =
      "CREATE TABLE v0 ( v2 INT , v1 INT ) ; INSERT INTO v0 ( v1 , v2 ) VALUES "
      "( 1 , 1 ) ; SELECT v1 , v1 , v1 , v1 FROM ( SELECT v2 , v1 , v1 , v2 , "
      "regr_r2 ( ) OVER ( PARTITION BY v2 ORDER BY v1 DESC) AS v4 FROM v0 ) AS "
      "v3 WHERE v1 < 3 ;";
  // const char *query = "CREATE TABLE v0 ( v2 INT , v1 INT ) ; INSERT INTO v0 (
  // v1 , v2 ) VALUES ( 3 , 0 ) ; SELECT * , '1995-03-15' FROM v0 WHERE v1 NOT
  // IN ( 10 ) AND v2 NOT IN ( 3 ) ORDER BY v2 DESC ; ";
  for (int i = 0; i < len; ++i) {
    //  if (i == 2) {
    //    query =
    //        "CREATE TABLE v0 ( v2 INT , v1 INT ) ; INSERT INTO v0 ( v1 , v2 )
    //        " "VALUES ( 3 , 0 ) ; SELECT * , '1995-03-15' FROM v0 WHERE v1 NOT
    //        IN "
    //        "( 10 ) AND v2 NOT IN ( 3 ) ORDER BY v2 DESC ; ";
    //  }
    query = queries[i];
    std::cout << "------------------ start ------------------ " << i
              << std::endl;

    test_client->prepare_env();
    client::ExecutionStatus result = test_client->execute(query, strlen(query));
    std::cout << "返回的当前状态: " << ExecutionStatusToString(result)
              << std::endl;
    cout << "excution result:" << result << endl;
    cout << "check alive:" << test_client->check_alive() << endl;
    if (result == client::kServerCrash) {
      cout << "server crash, restart" << endl;
      start_up(test_client, startup_cmd);
    }
    // assert(result == client::kNormal);
    // test_client->clean_up_env();
    // test_client->prepare_env();
    // result = test_client->execute(drop_query, strlen(drop_query));
    // assert(result == client::kNormal);
    test_client->clean_up_env();
    std::cout << "------------------ end ------------------ " << i << std::endl;
  }
}
int main(int argc, char **argv) {
  YAML::Node config = YAML::LoadFile(std::string(argv[1]));
  std::string db_name = config["db"].as<std::string>();
  client::DBClient *test_client = client::create_client(db_name, config);
  test_client->initialize(config);
  std::string startup_cmd = config["startup_cmd"].as<std::string>();

  YAML::Node test_client_config =
      YAML::LoadFile("/home/Squirrel/test_client.yml");
  if (test_client_config["enable_rerun_fuzz_dir"].as<bool>()) {
    // start_up(test_client, startup_cmd);
    read_from_fuzz_dir(test_client, startup_cmd);
  } else if(test_client_config["test_fuzz_files"].as<bool>()){
    std::vector<std::string> fuzz_files = test_client_config["fuzz_files"].as<std::vector<std::string>>();
    read_from_files(fuzz_files, test_client, startup_cmd);
  }else {
    test_several_case(test_client, startup_cmd);
  }

  // todo：改成能够动态中文件读取 sql 语句的格式
}
