#!/usr/bin/bash
# cd /home/Squirrel/srcs/internal/duckdb/parser/ && make
cd /home/Squirrel/srcs/internal/clickhouse/parser/ && make
cd /home/Squirrel/srcs/internal/monetdb/parser/ && make

# cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -Wno-dev
# 获取make 执行结果


cd /home/Squirrel/yjl-utils/test_dbms/duckdb_harness/build && make
cd /home/Squirrel
# 输入enter 继续
read -p "Press enter to continue" -r
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug -Wno-dev
cmake --build build -j100
# gdb --args ./test_client /home/Squirrel/data/config_monetdb.yml