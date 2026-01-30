su - dobigthing <<EOF
cd /home/Squirrel/scripts/utils
echo "see log /home/Squirrel/scripts/utils/output_postgresql_$(date +'%Y%m%d').txt"
AFL_IGNORE_PROBLEMS=1 AFL_MAP_SIZE=209777 python3 run.py postgresql ../../data/fuzz_root/pqsql_input/ &> "output_postgresql_$(date +'%Y%m%d').txt" 