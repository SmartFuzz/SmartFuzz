cmake_minimum_required(VERSION 3.14)
# 指定所需的最低 CMake 版本为 3.14，若使用的 CMake 版本低于此，会报错。

project(Squirrel)
# 定义项目名称为 Squirrel，CMake 会根据此名称生成一些默认的变量和配置。

set(BUILD_SHARED_LIBS ON)
# 设置默认构建共享库，即后续使用 add_library 未指定库类型时，默认构建共享库。

set(CMAKE_CXX_STANDARD 17)
# 设置 C++ 标准为 C++17，编译时会使用该标准。
# -O0 -fsanitize=address
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g ")
# 为调试模式设置 C++ 编译标志，添加 -g（生成调试信息）、-O2（二级优化）和 -fsanitize=address（地址消毒器）。

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")
# 为发布模式设置 C++ 编译标志，添加 -O3（最高级优化）。

set(LINK_FLAGS "${LINK_FLAGS} -fsanitize=address")
# 设置链接标志，添加 -fsanitize=address 用于地址消毒。

find_package(PkgConfig)
# 查找 PkgConfig 工具，用于查找和配置第三方库。

option(ALL "Build all types of database" ON)
# 定义一个 CMake 选项 ALL，描述为“构建所有类型的数据库”，默认开启。

option(SQLITE "Build sqlite" OFF)
# 定义一个 CMake 选项 SQLITE，描述为“构建 SQLite”，默认关闭。

option(MYSQL "Build mysql" OFF)
# 定义一个 CMake 选项 MYSQL，描述为“构建 MySQL”，默认关闭。

option(POSTGRESQL "Build postgresql" OFF)
# 定义一个 CMake 选项 POSTGRESQL，描述为“构建 PostgreSQL”，默认关闭。
option(MONETDB "Build monetdb" OFF)
# 定义一个 CMake 选项 MONETDB，描述为“构建 MonetDB”，默认关闭。

option(DUCKDB "Build duckdb" OFF)
# 定义一个 CMake 选项 DUCKDB，描述为“构建 DuckDB”，默认关闭。

option(CLICKHOUSE "Build clickhouse" OFF)
# 定义一个 CMake 选项 CLICKHOUSE，描述为“构建 ClickHouse”，默认关闭。

option(VIRTUOSO "Build virtuoso" OFF)
# 定义一个 CMake 选项 VIRTUOSO，描述为“构建 Virtuoso”，默认关闭。

if(SQLITE
   OR MYSQL
   OR POSTGRESQL
   OR MONETDB
   OR DUCKDB
   OR CLICKHOUSE
   OR VIRTUOSO
   )
  set(ALL OFF)
endif()
# 如果 SQLITE、MYSQL 或 POSTGRESQL 任意一个选项开启，则将 ALL 选项关闭。

if(ALL)
  set(SQLITE ON)
  # set(MYSQL ON)
  # set(POSTGRESQL ON)
  set(MONETDB ON)
  set(DUCKDB ON)
  set(CLICKHOUSE ON)
  set(VIRTUOSO ON)
endif()
# 如果 ALL 选项开启，则将 SQLITE、MYSQL、POSTGRESQL、DUCKDB、CLICKHOUSE 和 VIRTUOSO 选项都开启。

if(SQLITE)
  list(APPEND DBMS sqlite)
endif()
# 如果 SQLITE 选项开启，将 "sqlite" 添加到 DBMS 列表中。

if(MYSQL)
  list(APPEND DBMS mysql)
  pkg_check_modules(MySQL REQUIRED mysqlclient>=5.7)
  # 使用 PkgConfig 查找 MySQL 客户端库，要求版本不低于 5.7，若未找到会报错。

  add_library(mysql_client OBJECT srcs/internal/client/client_mysql.cc)
  # 创建一个对象库 mysql_client，源文件为 client_mysql.cc。

  target_include_directories(mysql_client PUBLIC ${MySQL_INCLUDE_DIRS}
                                                 srcs/internal/client)
  # 为 mysql_client 库添加公共头文件搜索路径，包括 MySQL 客户端库的头文件目录和项目内部目录。

  target_link_libraries(mysql_client PUBLIC ${MySQL_LIBRARIES}
                                            ${YAML_CPP_LIBRARIES})
  # 为 mysql_client 库添加公共链接库，包括 MySQL 客户端库和 YAML-CPP 库。

  target_compile_options(mysql_client PRIVATE -fPIC)
  # 为 mysql_client 库添加私有编译选项 -fPIC（生成位置无关代码）。

  list(APPEND LINK_CLIENT mysql_client)
  # 将 mysql_client 库添加到 LINK_CLIENT 列表中。

  list(APPEND CLIENT_DEFINITION __SQUIRREL_MYSQL__)
  # 将 __SQUIRREL_MYSQL__ 添加到 CLIENT_DEFINITION 列表中。
endif()

if(POSTGRESQL)
  list(APPEND DBMS postgresql)
  find_package(PostgreSQL REQUIRED)
  # 查找 PostgreSQL 库，若未找到会报错。

  add_library(postgresql_client OBJECT
              srcs/internal/client/client_postgresql.cc)
  # 创建一个对象库 postgresql_client，源文件为 client_postgresql.cc。

  target_include_directories(postgresql_client PUBLIC ${PostgreSQL_INCLUDE_DIRS}
                                                      srcs/internal/client)
  # 为 postgresql_client 库添加公共头文件搜索路径，包括 PostgreSQL 库的头文件目录和项目内部目录。

  target_link_libraries(
    postgresql_client PUBLIC ${PostgreSQL_LIBRARIES} ${YAML_CPP_LIBRARIES}
                             absl::strings absl::str_format)
  # 为 postgresql_client 库添加公共链接库，包括 PostgreSQL 库、YAML-CPP 库和 Abseil 库。

  target_compile_options(postgresql_client PRIVATE -fPIC)
  # 为 postgresql_client 库添加私有编译选项 -fPIC。

  list(APPEND LINK_CLIENT postgresql_client)
  # 将 postgresql_client 库添加到 LINK_CLIENT 列表中。

  list(APPEND CLIENT_DEFINITION __SQUIRREL_POSTGRESQL__)
  # 将 __SQUIRREL_POSTGRESQL__ 添加到 CLIENT_DEFINITION 列表中。
  
endif()

if(MONETDB AND TRUE)
  list(APPEND DBMS monetdb)
  list(APPEND TEST_MUATOR_DBMS monetdb)
  add_library(monetdb_client OBJECT srcs/internal/client/client_monetdb.cc)
  # 创建一个对象库 monetdb_client，源文件为 client_monetdb.cc。
  pkg_check_modules(MONETDB_MAPI REQUIRED monetdb-mapi)
  # include_directories(/usr/include/monetdb)
  message(WARNING ${MONETDB_MAPI_FOUND}) 
  message(WARNING ${MONETDB_MAPI_INCLUDE_DIRS}) 
  message(WARNING ${MONETDB_MAPI_LIBRARIES}) 
 
  target_include_directories(monetdb_client PUBLIC  ${MONETDB_MAPI_INCLUDE_DIRS} srcs/internal/client) 
  # 为 monetdb_client 库添加公共头文件搜索路径，包括 MonetDB 库的头文件目录和项目内部目录。
  # pkg-config --cflags monetdb-mapi 转换成 cmake 命令  
  # pkg-config --libs monetdb-mapi转换成 cmake 命令
  
  target_link_libraries(monetdb_client PUBLIC ${MONETDB_MAPI_LIBRARIES}  
                                            ${YAML_CPP_LIBRARIES}  )
  # 为 monetdb_client 库添加公共链接库，包括 MySQL 客户端库和 YAML-CPP 库。

  target_compile_options(monetdb_client PRIVATE -fPIC)
  # 为 monetdb_client 库添加私有编译选项 -fPIC（生成位置无关代码）。

  list(APPEND LINK_CLIENT monetdb_client)
  # 将 monetdb_client 库添加到 LINK_CLIENT 列表中。

  list(APPEND CLIENT_DEFINITION __SQUIRREL_MONETDB__)
  # 将 __SQUIRREL_MONETDB__ 添加到 CLIENT_DEFINITION 列表中。
endif()


if(CLICKHOUSE AND TRUE)
  list(APPEND DBMS clickhouse)
  list(APPEND TEST_MUATOR_DBMS clickhouse)
  add_library(clickhouse_client OBJECT srcs/internal/client/client_clickhouse.cc)
  # 创建一个对象库 clickhouse_client，源文件为 client_clickhouse.cc。
  # pkg_check_modules(CLICKHOUSE_MAPI REQUIRED clickhouse-mapi)
  # include_directories(/usr/include/monetdb)
  # message(WARNING ${MONETDB_MAPI_FOUND}) 
  # message(WARNING ${MONETDB_MAPI_INCLUDE_DIRS}) 
  # message(WARNING ${MONETDB_MAPI_LIBRARIES}) 
 
  target_include_directories(clickhouse_client PUBLIC  srcs/internal/client) 
  # 为 monetdb_client 库添加公共头文件搜索路径，包括 MonetDB 库的头文件目录和项目内部目录。
  # pkg-config --cflags monetdb-mapi 转换成 cmake 命令  
  # pkg-config --libs monetdb-mapi转换成 cmake 命令
  find_package(CURL REQUIRED)
  target_link_libraries(clickhouse_client PUBLIC  CURL::libcurl
                                            ${YAML_CPP_LIBRARIES}  )
  # 为 clickhouse_client 库添加公共链接库，包括 ClickHouse 客户端库和 YAML-CPP 库。

  target_compile_options(clickhouse_client PRIVATE -fPIC)
  # 为 monetdb_client 库添加私有编译选项 -fPIC（生成位置无关代码）。

  list(APPEND LINK_CLIENT clickhouse_client)
  # 将 clickhouse_client 库添加到 LINK_CLIENT 列表中。

  list(APPEND CLIENT_DEFINITION __SQUIRREL_CLICKHOUSE__)
  # 将 __SQUIRREL_CLICKHOUSE__ 添加到 CLIENT_DEFINITION 列表中。
endif()
if(DUCKDB AND TRUE)
  list(APPEND DBMS duckdb)
  list(APPEND TEST_MUATOR_DBMS duckdb)
endif()


if(VIRTUOSO OR TRUE)
  list(APPEND DBMS virtuoso)
  list(APPEND TEST_MUATOR_DBMS virtuoso)
  add_library(virtuoso_client OBJECT srcs/internal/client/client_virtuoso.cc)
  # 创建一个对象库 virtuoso_client，源文件为 client_virtuoso.cc。
  target_include_directories(virtuoso_client PUBLIC  ${VIRTUOSO_MAPI_INCLUDE_DIRS} srcs/internal/client) 
  # 为 virtuoso_client 库添加公共头文件搜索路径，包括 Virtuoso 库的头文件目录和项目内部目录。
  # pkg-config --cflags virtuoso-mapi 转换成 cmake 命令  
  # pkg-config --libs monetdb-mapi转换成 cmake 命令
  
  target_link_libraries(virtuoso_client PUBLIC odbc
                                            ${YAML_CPP_LIBRARIES}  )
  # 为 virtuoso_client 库添加公共链接库，包括 Virtuoso 客户端库和 YAML-CPP 库。

  target_compile_options(virtuoso_client PRIVATE -fPIC)
  # 为 virtuoso_client 库添加私有编译选项 -fPIC（生成位置无关代码）。

  list(APPEND LINK_CLIENT virtuoso_client)
  # 将 virtuoso_client 库添加到 LINK_CLIENT 列表中。

  list(APPEND CLIENT_DEFINITION __SQUIRREL_VIRTUOSO__)
  # 将 __SQUIRREL_VIRTUOSO__ 添加到 CLIENT_DEFINITION 列表中。
endif()
include(FetchContent)
# 包含 FetchContent 模块，用于下载和管理外部项目。

find_package(yaml-cpp REQUIRED)
# 查找 YAML-CPP 库，若未找到会报错。

# FetchContent_Declare( ${YAML_CPP_LIBRARIES} URL
# https://github.com/jbeder/${YAML_CPP_LIBRARIES}/archive/refs/tags/${YAML_CPP_LIBRARIES}-0.7.0.zip)
# FetchContent_MakeAvailable(${YAML_CPP_LIBRARIES})
# 这部分代码被注释，作用是使用 FetchContent 下载并引入指定版本的 YAML-CPP 库。

include_directories(${YAML_INCLUDE_DIRS})
# 添加 YAML-CPP 库的头文件目录到全局头文件搜索路径。

# set_target_properties(${YAML_CPP_LIBRARIES} PROPERTIES COMPILE_FLAGS "-w")
# 这行代码被注释，作用是为 YAML-CPP 库设置编译选项 -w（忽略所有警告）。

set(ABSL_PROPAGATE_CXX_STD ON)
# 设置 Abseil 库传播 C++ 标准，即子目标使用相同的 C++ 标准。

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")
# 为 C++ 编译标志添加 -w 选项，忽略所有警告。

add_subdirectory(third_party/abseil-cpp)
add_subdirectory(third_party/json)
# 包含 third_party/abseil-cpp 目录下的 CMakeLists.txt 文件，构建 Abseil 库。

string(REPLACE " -w" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
# 移除 C++ 编译标志中的 -w 选项。

set(AFLPP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/AFLplusplus/include)
# 设置 AFLPP_DIR 变量为项目当前目录下 AFLplusplus/include 路径。

include_directories(${AFLPP_DIR} third_party/json/include)
# 添加 AFLplusplus 的头文件目录到全局头文件搜索路径。

# generate mutator for each dbms
foreach(dbms IN LISTS DBMS)
  message(WARNING ${dbms})
  add_library(
    ${dbms}_impl OBJECT
    srcs/internal/${dbms}/${dbms}.cc
    srcs/internal/${dbms}/${dbms}.h
    srcs/internal/${dbms}/srcs/ast.cpp
    srcs/internal/${dbms}/srcs/mutator.cpp
    srcs/internal/${dbms}/srcs/utils.cpp
    srcs/internal/${dbms}/parser/bison_parser.cpp
    srcs/internal/${dbms}/parser/flex_lexer.cpp)
  # 为 DBMS 列表中的每个数据库类型创建一个对象库，源文件包含相关实现文件。

  target_include_directories(${dbms}_impl PRIVATE srcs/internal/${dbms}/include
                                                  srcs)
  # 为对象库添加私有头文件搜索路径。

  target_compile_options(${dbms}_impl PRIVATE -fPIC)
  # 为对象库添加私有编译选项 -fPIC。

  target_link_libraries(${dbms}_impl ${YAML_CPP_LIBRARIES} absl::strings
                        absl::str_format)
  # 为对象库添加链接库，包括 YAML-CPP 库和 Abseil 库。

  string(TOUPPER ${dbms} UPPER_CASE_DBMS)
  # 将数据库类型名称转换为大写，存储在 UPPER_CASE_DBMS 变量中。

  add_library(${dbms}_mutator SHARED srcs/custom_mutator.cc srcs/db_factory.cc)
  # 为每个数据库类型创建一个共享库，源文件为 custom_mutator.cc 和 db_factory.cc。

  target_link_libraries(${dbms}_mutator ${dbms}_impl config_validator)
  # 为共享库添加链接库，包括对应对象库和 config_validator 库。

  target_include_directories(${dbms}_mutator PRIVATE srcs/internal/${dbms} srcs)
  # 为共享库添加私有头文件搜索路径。

  # target_compile_options(${dbms}_mutator PRIVATE -fPIC)
  # 这行代码被注释，作用是为共享库添加私有编译选项 -fPIC。

  target_compile_definitions(${dbms}_mutator
                             PRIVATE __SQUIRREL_${UPPER_CASE_DBMS}__)
  # 为共享库添加私有预处理器定义，标识当前数据库类型。
endforeach()

# generate test_${dbms}_mutator for each dbms
foreach(dbms IN LISTS TEST_MUATOR_DBMS)
  message(WARNING ${dbms})

  add_executable(test_${dbms}_mutator srcs/internal/${dbms}/test_${dbms}_mutator.cpp)
  target_include_directories(test_${dbms}_mutator PRIVATE srcs/internal/${dbms} srcs/internal/${dbms}/include srcs)
  target_link_libraries(test_${dbms}_mutator ${YAML_CPP_LIBRARIES} absl::strings
                          absl::str_format nlohmann_json::nlohmann_json ${dbms}_impl)
endforeach()

# if(MONETDB)
#   # 添加可执行目标
#   add_executable(test_mutator srcs/internal/monetdb/test_monetdb_mutator.cpp)
#   target_include_directories(test_mutator PRIVATE srcs/internal/monetdb srcs/internal/monetdb/include srcs)
#   target_link_libraries(test_mutator ${YAML_CPP_LIBRARIES} absl::strings
#                           absl::str_format nlohmann_json::nlohmann_json monetdb_impl)

# endif()


# db_driver
if(MYSQL OR POSTGRESQL OR MONETDB)
  add_executable(db_driver srcs/db_driver.cc)
  # 如果 MYSQL 或 POSTGRESQL 或 MONETDB 选项开启，创建一个可执行文件 db_driver，源文件为 db_driver.cc。
  target_link_libraries(db_driver ${YAML_CPP_LIBRARIES} all_client
                        absl::strings absl::str_format)
  # 为 db_driver 可执行文件添加链接库，包括 YAML-CPP 库、all_client 库和 Abseil 库。

  add_executable(test_client srcs/internal/client/test_client.cc)
  # 创建一个可执行文件 test_client，源文件为 test_client.cc。

  target_link_libraries(test_client all_client ${YAML_CPP_LIBRARIES})
  # 为 test_client 可执行文件添加链接库，包括 all_client 库和 YAML-CPP 库。

  target_include_directories(test_client PUBLIC srcs/internal/client)
  # 为 test_client 可执行文件添加公共头文件搜索路径。

  add_executable(server_up srcs/internal/client/server_up.cc)
  # 创建一个可执行文件 server_up，源文件为 server_up.cc。

  target_link_libraries(server_up all_client ${YAML_CPP_LIBRARIES})
  # 为 server_up 可执行文件添加链接库，包括 all_client 库和 YAML-CPP 库。

  target_include_directories(server_up PUBLIC srcs/internal/client)
  # 为 server_up 可执行文件添加公共头文件搜索路径。

  add_library(all_client SHARED srcs/internal/client/client.cc)
  # 创建一个共享库 all_client，源文件为 client.cc。

  target_include_directories(all_client PUBLIC srcs/internal/client)
  # 为 all_client 库添加公共头文件搜索路径。

  target_link_libraries(all_client PUBLIC ${LINK_CLIENT})
  # 为 all_client 库添加公共链接库，包括之前添加到 LINK_CLIENT 列表中的库。

  target_compile_definitions(all_client PRIVATE ${CLIENT_DEFINITION})
  # 为 all_client 库添加私有预处理器定义，包括之前添加到 CLIENT_DEFINITION 列表中的定义。
endif()

add_library(config_validator OBJECT srcs/utils/config_validate.cc)
# 创建一个对象库 config_validator，源文件为 config_validate.cc。

target_link_libraries(config_validator PRIVATE ${YAML_CPP_LIBRARIES}
                                               absl::strings absl::str_format)
# 为 config_validator 库添加私有链接库，包括 YAML-CPP 库和 Abseil 库。

target_include_directories(config_validator PUBLIC srcs/utils)
# 为 config_validator 库添加公共头文件搜索路径。

target_compile_options(config_validator PRIVATE -fPIC)
# 为 config_validator 库添加私有编译选项 -fPIC。

include(lint.cmake)
# 包含 lint.cmake 文件，执行其中的 CMake 脚本。

add_subdirectory(tests)
# 包含 tests 目录下的 CMakeLists.txt 文件，构建测试项目。