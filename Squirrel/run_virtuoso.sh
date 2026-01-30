
#!/bin/bash
# 先kill 掉所有的mserver 进程
pkill virtuoso-t
cd /home/Squirrel/scripts/utils
# bash 底下才能执行
# 运行日志：Target map size: 8388608
echo "see log /home/Squirrel/scripts/utils/output_virtuoso_$(date +'%Y%m%d').txt"
input_dir=$(grep '^seed_input:' /home/Squirrel/data/config_virtuoso.yml | awk '{print $2}' | tr -d '"')
output_dir=$(grep '^output_dir:' /home/Squirrel/data/config_virtuoso.yml | awk '{print $2}' | tr -d '"')
echo "squirrel seed input directory: $input_dir"
echo "squirrel output directory: $output_dir"
mkdir -p $output_dir

AFL_IGNORE_PROBLEMS=1 AFL_MAP_SIZE=2097152 python3 run.py virtuoso $input_dir $output_dir > "output_virtuoso_$(date +'%Y%m%d').txt"  2>&1
