"""
Run a fuzzing instance.
"""
import os
import fire
import uuid
from pathlib import Path
import datetime
DBMS = ["sqlite", "mysql", "mariadb", "postgresql", "monetdb", "duckdb", "clickhouse","virtuoso"]
ROOTPATH = Path(os.path.dirname(os.path.realpath(__file__))).parent.parent


def get_mutator_so_path(database):
  if database == "mariadb":
    database = "mysql"
  return f"{ROOTPATH}/build/lib{database}_mutator.so"


def get_config_path(database):
  return f"{ROOTPATH}/data/config_{database}.yml"


def set_env(database):
  os.environ["AFL_CUSTOM_MUTATOR_ONLY"] = "1"
  os.environ["AFL_DEBUG"] = "1"
  os.environ["AFL_DISABLE_TRIM"] = "1"
  os.environ["AFL_FAST_CAL"] = "1"
  os.environ["AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES"] = "1"
  os.environ["AFL_SKIP_CPUFREQ"] = "1"
  os.environ["AFL_CUSTOM_MUTATOR_LIBRARY"] = get_mutator_so_path(database)
  # 设置环境变量SQUIRREL_CONFIG 来指定 fuzzing 配置和命令
  os.environ["SQUIRREL_CONFIG"] = get_config_path(database)
  os.environ["ASAN_OPTIONS"] = "abort_on_error=1:detect_leaks=0:symbolize=1"
  os.environ["UBSAN_OPTIONS"] = "abort_on_error=1:print_stacktrace=1"
  # os.environ["LD_PRELOAD"] = "/lib/x86_64-linux-gnu/libasan.so.6"


def get_next_sequence_number(seq_file):
    if not os.path.exists(seq_file):
        with open(seq_file, 'w') as f:
            f.write('1')
        return 1
    else:
        with open(seq_file, 'r') as f:
            current = int(f.read().strip())
        with open(seq_file, 'w') as f:
            f.write(str(current + 1))
        return current

def run(database, input_dir, output_dir=None, config_file=None, fuzzer=None):
  # Precondition checks
  if database not in DBMS:
    print(f"Unsupported database. The supported ones are {DBMS}")
    return

  if not output_dir:
    output_dir = "/tmp/fuzz"
  print(config_file)

  if not config_file:
    config_file = get_config_path(database)
    print(config_file)
  if not fuzzer:
    fuzzer = f"{ROOTPATH}/AFLplusplus/afl-fuzz"
  if not os.path.exists(config_file):
    print("Invalid path for config file")
  if not os.path.exists(fuzzer):
    print("Invalid path for afl-fuzz")

  set_env(database)
  # 今天日期 格式 230815
  today = datetime.date.today().strftime("%Y%m%d")
  # 去除前面 2 位
  today = today[2:]
  # output_id = f"{database}_{today}_{str(uuid.uuid4())[:6]}"
  seq_file = f"{database}_{today}.seq"  # 每天每个数据库独立计数
  seq_num = get_next_sequence_number(seq_file)
  output_id = f"{database}_{today}_{seq_num:06d}"  # 补零到6位，如 000001
  if database == "sqlite" :
    cmd = f"{fuzzer} -i {input_dir} -o {output_dir} -M {output_id} -- /home/ossfuzz @@"
  elif database == "duckdb":
    cmd = f"{fuzzer} -i {input_dir} -o {output_dir} -M {output_id} -t 60000  -- /home/Squirrel/yjl-utils/test_dbms/duckdb_harness/build/duck_fuzz_target_new @@"
  # elif database == "virtuoso":
  #   cmd = f"{fuzzer} -i {input_dir} -o {output_dir} -M {output_id} -t 60000  -- {ROOTPATH}/build/virtuoso_db_driver"
  else:
    cmd = f"{fuzzer} -i {input_dir} -o {output_dir} -M {output_id} -t 60000 -- {ROOTPATH}/build/db_driver"
  print("cmd:", cmd)
  os.system(cmd)


if __name__ == "__main__":
  fire.Fire(run)
