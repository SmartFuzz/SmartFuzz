# Smartfuzz
Smartfuzz is an automated framework for synthesizing high-quality initial SQL seeds for mutation-based DBMS fuzzing using Large Language Models (LLMs).

## Directory
- Squirrel: Squirrel, a mutation-based fuzzer with the expand support for MonetDB, DuckDB, Virtuoso, Clickhouse.
-  DBMS_BUG_Knowledge_Base：bug seeds generated from bug knowledge base.
- feature_seed: seeds generated from feature knowledge base.
## Setup
[Squirrel setup](./Squirrel/README.md)

## SmartFuzz Bug Lists

| No. | DB_Name | GitHub_Link | Status |
|---:|---|---|---|
| 1 | clickhouse | https://github.com/ClickHouse/ClickHouse/issues/93890 | fixed |
| 2 | duckdb | https://github.com/duckdb/duckdb/issues/20199 | fixed |
| 3 | duckdb | https://github.com/duckdb/duckdb/issues/20263 | fixed |
| 4 | duckdb | https://github.com/duckdb/duckdb/issues/20371 | fixed |
| 5 | duckdb | https://github.com/duckdb/duckdb/issues/20418 | fixed |
| 6 | duckdb | https://github.com/duckdb/duckdb/issues/20476 | fixed |
| 7 | duckdb | https://github.com/duckdb/duckdb/issues/20481 | confirmed |
| 8 | duckdb | https://github.com/duckdb/duckdb/issues/20615 | fixed |
| 9 | duckdb | https://github.com/duckdb/duckdb/issues/20616 | confirmed |
| 10 | monetdb | https://github.com/MonetDB/MonetDB/issues/7709 | fixed |
| 11 | monetdb | https://github.com/MonetDB/MonetDB/issues/7710 | fixed |
| 12 | monetdb | https://github.com/MonetDB/MonetDB/issues/7713 | fixed |
| 13 | monetdb | https://github.com/MonetDB/MonetDB/issues/7714 | fixed |
| 14 | monetdb | https://github.com/MonetDB/MonetDB/issues/7717 | fixed |
| 15 | monetdb | https://github.com/MonetDB/MonetDB/issues/7719 | fixed |
| 16 | monetdb | https://github.com/MonetDB/MonetDB/issues/7735 | fixed |
| 17 | monetdb | https://github.com/MonetDB/MonetDB/issues/7736 | fixed |
| 18 | monetdb | https://github.com/MonetDB/MonetDB/issues/7741 | fixed |
| 19 | monetdb | https://github.com/MonetDB/MonetDB/issues/7742 | fixed |
| 20 | monetdb | https://github.com/MonetDB/MonetDB/issues/7766 | waiting |
| 21 | monetdb | https://github.com/MonetDB/MonetDB/issues/7767 | waiting |
| 22 | monetdb | https://github.com/MonetDB/MonetDB/issues/7769 | waiting |
| 23 | monetdb | https://github.com/MonetDB/MonetDB/issues/7770 | waiting |
| 24 | monetdb | https://github.com/MonetDB/MonetDB/issues/7771 | waiting |
| 25 | monetdb | https://github.com/MonetDB/MonetDB/issues/7774 | waiting |
| 26 | monetdb | https://github.com/MonetDB/MonetDB/issues/7775 | waiting |
| 27 | monetdb | https://github.com/MonetDB/MonetDB/issues/7785 | waiting |
| 28 | monetdb | https://github.com/MonetDB/MonetDB/issues/7786 | waiting |
| 29 | monetdb | https://github.com/MonetDB/MonetDB/issues/7787 | waiting |
| 30 | monetdb | https://github.com/MonetDB/MonetDB/issues/7788 | waiting |
| 31 | monetdb | https://github.com/MonetDB/MonetDB/issues/7789 | waiting |
| 32 | monetdb | https://github.com/MonetDB/MonetDB/issues/7790 | waiting |
| 33 | monetdb | https://github.com/MonetDB/MonetDB/issues/7791 | waiting |
| 34 | monetdb | https://github.com/MonetDB/MonetDB/issues/7792 | waiting |
| 35 | monetdb | https://github.com/MonetDB/MonetDB/issues/7793 | waiting |
| 36 | monetdb | https://github.com/MonetDB/MonetDB/issues/7794 | waiting |
| 37 | monetdb | https://github.com/MonetDB/MonetDB/issues/7795 | waiting |
| 38 | monetdb | https://github.com/MonetDB/MonetDB/issues/7796 | waiting |
| 39 | monetdb | https://github.com/MonetDB/MonetDB/issues/7797 | waiting |
| 40 | monetdb | https://github.com/MonetDB/MonetDB/issues/7800 | waiting |
| 41 | monetdb | https://github.com/MonetDB/MonetDB/issues/7801 | waiting |
| 42 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1368 | fixed |
| 43 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1370 | fixed |
| 44 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1371 | fixed |
| 45 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1372 | fixed |
| 46 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1373 | fixed |
| 47 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1374 | fixed |
| 48 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1375 | fixed |
| 49 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1376 | fixed |
| 50 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1378 | fixed |
| 51 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1379 | fixed |
| 52 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1381 | fixed |
| 53 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1382 | fixed |
| 54 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1385 | fixed |
| 55 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1388 | waiting |
| 56 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1389 | waiting |
| 57 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1390 | waiting |
| 58 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1391 | waiting |
| 59 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1392 | waiting |
| 60 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1393 | waiting |
| 61 | virtuoso | https://github.com/openlink/virtuoso-opensource/issues/1394 | waiting |
