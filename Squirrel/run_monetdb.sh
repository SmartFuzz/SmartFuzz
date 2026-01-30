#!/usr/bin/bash


ps -ef | grep [m]server | awk '{print $2}' | xargs kill
echo "config: /home/Squirrel/data/config_monetdb.yml"

cd /home/Squirrel/scripts/utils
# 输入enter 继续
read -p "Press enter to continue" -r
# LD_PRELOAD=/usr/lib/x86_64-linux-gnu/libasan.so.6 AFL_IGNORE_PROBLEMS=1 AFL_MAP_SIZE=8388608 python3 run.py monetdb /home/Squirrel/data/default > output.txt 2>&1 & 
# bash 底下才能执行
# 运行日志：Target map size: 8388608
echo "see log /home/Squirrel/scripts/utils/output_monetdb_$(date +'%Y%m%d').txt"

input_dir=$(grep '^seed_input:' /home/Squirrel/data/config_monetdb.yml | awk '{print $2}' | tr -d '"')
output_dir=$(grep '^output_dir:' /home/Squirrel/data/config_monetdb.yml | awk '{print $2}' | tr -d '"')
echo "squirrel seed input directory: $input_dir"
echo "squirrel output directory: $output_dir"
mkdir -p $output_dir
AFL_IGNORE_PROBLEMS=1 AFL_MAP_SIZE=8388608 python3 run.py monetdb $input_dir $output_dir > "output_monetdb_$(date +'%Y%m%d').txt"  2>&1