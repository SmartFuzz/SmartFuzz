

Path:
- xxDB/
    - bugs: json files containing bug reports, bug features and test cases generated from LLM
        - bug_0a5e2c1dcb.json
    - exbugs：bug seeds translated from other DBMS.
    - seed_txt： xxDB bug seeds

 bug report format:

```json
{
    "url": "https://www.sqlite.org/src/tktview/0a5e2c1dcb",
    "title": "Unexpected affinity conversion for view column in IN operator",
    "vulnerable_database": "SQLite",
    "date": "2019-08-06 20:43:056.01 years ago",
    "vulnerable_version": "3.29.0",
    "description": "mrigger added on 2019-08-06 20:43:05:\nConsider the following test case:\nCREATE TABLE t0(c0 TEXT);\nCREATE VIEW v0(c0) AS SELECT t0.c0 FROM t0;\nINSERT INTO t0(c0) VALUES ('0');\nSELECT 0 IN (c0) FROM v0; -- expected: 0, actual: 1\nThe expression 0 in (c0) unexpectedly yields TRUE, although c0 is a string and 0 an integer; according to the documentation, values in the right list should have no affinity, so I would not expect an affinity conversion to be performed. When fetching from the table, rather than the view, the result is as expected:\nSELECT 0 IN (c0) FROM t0; -- 0",
    "poc": [
        "CREATE TABLE t0(c0 TEXT);",
        "CREATE VIEW v0(c0) AS SELECT t0.c0 FROM t0;",
        "INSERT INTO t0(c0) VALUES ('0');",
        "SELECT 0 IN (c0) FROM v0;",
        "SELECT 0 IN (c0) FROM t0;"
    ]
   
}

```
grep_sql.py: extract sql stmts from text using regex
