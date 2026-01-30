#!/bin/bash

# 检测程序是否被 AFL 插桩
binary="$1"

if [ -z "$binary" ]; then
    echo "用法: $0 <二进制文件路径>"
    exit 1
fi

if [ ! -f "$binary" ]; then
    echo "错误: 文件 '$binary' 不存在"
    exit 1
fi

echo "正在检测 '$binary' 是否被 AFL 插桩..."

# 方法1: 检查特征字符串
echo -n "  [1] 检查特征字符串... "
if strings "$binary" | grep -q -E "__afl|afl instrumentation"; then
    echo "发现 AFL 特征字符串 ✔️"
else
    echo "未发现特征字符串 ❌"
fi

# 方法2: 检查符号表
echo -n "  [2] 检查符号表... "
if readelf -s "$binary" | grep -q "__afl"; then
    echo "发现 AFL 符号 ✔️"
else
    echo "未发现 AFL 符号 ❌"
fi

# 方法3: 检查反汇编代码
echo -n "  [3] 检查反汇编代码... "
if objdump -d "$binary" | grep -A5 -B5 "xorl" | grep -q -i "afl"; then
    echo "发现 AFL 插桩指令模式 ✔️"
else
    echo "未发现插桩指令模式 ❌"
fi

# 综合判断
echo
if { strings "$binary" | grep -q -E "__afl|afl instrumentation"; } ||
   { readelf -s "$binary" | grep -q "__afl"; } ||
   { objdump -d "$binary" | grep -A5 -B5 "xorl" | grep -q -i "afl"; }; then
    echo -e "\033[32m[结论] 该程序已被 AFL 插桩\033[0m"
else
    echo -e "\033[31m[结论] 该程序未被 AFL 插桩或插桩方式不兼容\033[0m"
fi