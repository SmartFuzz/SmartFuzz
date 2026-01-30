
#!/bin/bash
# 读取用户输入的模式


cd /home/Squirrel/scripts/utils
# 运行日志：Target map size: 8388608
echo "see log /home/Squirrel/scripts/utils/output_duckdb_$(date +'%Y%m%d').txt"

input_dir=$(grep '^seed_input:' /home/Squirrel/data/config_duckdb.yml | awk '{print $2}' | tr -d '"')
output_dir=$(grep '^output_dir:' /home/Squirrel/data/config_duckdb.yml | awk '{print $2}' | tr -d '"')
# 找 bug 模式
if [ "$1" = "bug" ]; then
    output_dir="/tmp/fuzz/test"
fi
echo "squirrel seed input directory: $input_dir"
echo "squirrel output directory: $output_dir"
mkdir -p $output_dir
AFL_IGNORE_PROBLEMS=1 python3 run.py duckdb $input_dir $output_dir > "output_duckdb_$(date +'%Y%m%d').txt"  2>&1