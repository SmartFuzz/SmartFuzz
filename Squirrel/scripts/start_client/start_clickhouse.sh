#!/bin/bash
# 确认是否有clickhouse-server进程
if ps -ef | grep -w clickhouse-server | grep -v grep > /dev/null
then
    echo "[*]clickhouse-server is already running"
else
    echo "[-]clickhouse-server is not running,starting server..."
    cmd="AFL_DEBUG=1 AFL_MAP_SIZE=7074582 /home/dbms/ClickHouse/build/programs/clickhouse-server -C /home/Squirrel/data/clickhouse_config.xml > /dev/null  2>&1  &"
    # 执行 cmd
    eval $cmd
    # 休眠 10 秒
    sleep 2
fi
cd /home/dbms/ClickHouse/build
programs/clickhouse client  --host 127.0.0.1

