# Squirrel, a coverage-guided DBMS fuzzer.
[![build](https://github.com/s3team/Squirrel/actions/workflows/build.yml/badge.svg)](https://github.com/s3team/Squirrel/actions/workflows/build.yml)

`Squirrel` is a fuzzer for database managment systems (DBMSs).

`Squirrel` was first built on [AFL](https://github.com/google/AFL) and then migrated to [AFLplusplus](https://github.com/AFLplusplus/AFLplusplus) to enjoy the improvement of state-of-the-art fuzzing strategies.

## Currently supported DBMSs
1. SQLite
2. PostgreSQL
3. MySQL
4. MariaDB
5. MonetDB
6. DuckDB
7. Clickhouse
8. Virtuoso



## Build Instruction (Run on localhost)

### Prerequisite

For ubuntu 22.04:
```
sudo apt install libmysqlclient-dev cmake ninja-build clang pkg-config clang-format libpq-dev libyaml-cpp-dev libcurl4-openssl-dev  unixodbc-dev
# Install MonetDB Library
apt install libmonetdb-client-dev
apt install libmonetdb-stream-dev/jammy
apt install libmonetdb-mutils-dev
```
Position:

place Squirrel at `/home/Squirrel` !!!

#### Build Squirrel
running `./build_squirrel`

#### Build AFLplusplus and DBMSs
1. Build aflplusplus: `cd AFLplusplus && LLVM_CONFIG=llvm-config-14 make -j20 && cd ..`.
2. Use `afl-cc` and `afl-c++` to instrument your database.


### Run
#### MonetDB,DuckDB,Virtuoso,Clickhouse

`./run_xxxdb.sh`


#### Configuration

1. Set up a configuration file in `yaml`. Examples can be found in `data/*.yml`.
2. Set the enviroment variable 
```bash
export SQUIRREL_CONFIG=/path/to/config.yml
export AFL_CUSTOM_MUTATOR_ONLY=1
export AFL_CUSTOM_MUTATOR_LIBRARY= REPO_DIR/build/libxxxx_mutator.so
export AFL_DISABLE_TRIM=1
```






