import os
import subprocess

os.chdir('/home/Squirrel/yjl-utils/test_dbms/duckdb_harness')
target_dir = '/tmp/fuzz/smart_fuzz_duckdb/feature_plus/duckdb_251230_000001/crashes'
# /tmp/fuzz/smart_fuzz_duckdb/feature/duckdb_251225_000001/crashes

# target_dir = '/tmp/fuzz/smart_fuzz_duckdb/bug/old_bug/duckdb_251214_000001/queue'
# target_dir = '/tmp/fuzz/smart_fuzz_duckdb/bug/duckdb_251215_000001/queue'
target_dir = '/tmp/fuzz/smart_fuzz_duckdb/feature_plus/duckdb_251230_000001/queue'



for file in os.listdir(target_dir):
    if file.startswith('id:'):
        full_file = os.path.join(target_dir, file)
        # if file.count('sig:14') == 1:
        #     continue
        output_file = "new_runing_poc.log"
        with open(output_file, 'a') as f:
            f.write(f"\n=== handling {full_file} ===\n")
        try:
            result = subprocess.run(
                ['./build/duck_fuzz_target_new', full_file],
                capture_output=True,
                text=True,
                timeout=60      # ⬅️ 1 分钟
            )
            if result.returncode == 0:
                continue
            with open(output_file, 'a') as f:
                f.write(result.stdout )
                f.write("\n")
                f.write(result.stderr )
                f.write("\n")
                f.write(f"RET CODE: {result.returncode}")
                f.write("\n")
                

        except subprocess.TimeoutExpired as e:
            with open(output_file, 'a') as f:
                f.write(" TIMEOUT after 60s \n")
                if e.stdout:
                    f.write(e.stdout )
                    f.write("\n")
                if e.stderr:
                    f.write(e.stderr )
                    f.write("\n")
                    
            continue
