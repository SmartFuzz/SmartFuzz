su - dobigthing <<EOF
cd /home/Squirrel/scripts/utils
echo "see log /home/Squirrel/scripts/utils/output_mysql_$(date +'%Y%m%d').txt"
AFL_IGNORE_PROBLEMS=1 AFL_MAP_SIZE=94125 python3 run.py mysql ../../data/fuzz_root/mysql_input/ > "output_mysql_$(date +'%Y%m%d').txt"  2>&1