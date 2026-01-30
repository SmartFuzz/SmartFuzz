
#!/bin/bash
# 先kill 掉所有的mserver 进程
ps -ef | grep [c]lickhouse-server | awk '{print $2}' | xargs kill
cd /home/Squirrel/scripts/utils
# bash 底下才能执行
# 运行日志：Target map size: 8388608
echo "see log /home/Squirrel/scripts/utils/output_clickhouse_$(date +'%Y%m%d').txt"
# clickhoused 8620
# mserver AFL_MAP_SIZE=10391491
# test1 517543
input_dir=$(grep '^seed_input:' /home/Squirrel/data/config_clickhouse.yml | awk '{print $2}' | tr -d '"')
output_dir=$(grep '^output_dir:' /home/Squirrel/data/config_clickhouse.yml | awk '{print $2}' | tr -d '"')
echo "squirrel seed input directory: $input_dir"
echo "squirrel output directory: $output_dir"
mkdir -p $output_dir
# 7074581
AFL_IGNORE_PROBLEMS=1 AFL_MAP_SIZE=5837596 python3 run.py clickhouse $input_dir $output_dir > "output_clickhouse_$(date +'%Y%m%d').txt"  2>&1