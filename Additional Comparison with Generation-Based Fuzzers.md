# Additional Comparison with Generation-Based Fuzzers

Following Reviewer #A's suggestion, we added a comparison with the state-of-the-art generation-based fuzzer `SQLancer` / `SQLancer++` under the same experimental setup as Section 4.2.1.

## Setup

- **Targets:** MonetDB v11.54.0, Virtuoso v7.2.17, DuckDB v1.4.1, and ClickHouse v23.5.3.4.
- **Budget:** 24 hours per DBMS.
- **Repetitions:** 5 independent runs per configuration; we report the average.
- **Metrics:** branch coverage and number of discovered bugs.
- **Comparison baseline:**
  - `SQLancer` is used for DBMSs it natively supports.
  - For DBMSs not listed in the current official `SQLancer` support matrix, we use `SQLancer++` as the extensible generator platform and add thin DBMS-specific support as needed.

## Support Check

According to the current official `SQLancer` repository, `DuckDB` and `ClickHouse` are natively supported, while `MonetDB` and `Virtuoso` are not listed in the supported DBMS set. `SQLancer++` is designed as a platform to apply test oracles to any SQL-based DBMS that supports a subset of common SQL features, which makes it suitable for quick extension to the unsupported targets.

## Results

Coverage gain is computed as `(SmartFuzz coverage - baseline coverage) / baseline coverage`.

| DBMS | Baseline tool | Baseline coverage | SmartFuzz coverage | Coverage gain | Baseline bugs | SmartFuzz bugs |
|---|---|---:|---:|---:|---:|---:|
| MonetDB | `SQLancer++` | 29,251 | 108,823 | 272.0% | 4 | 32 |
| Virtuoso | `SQLancer++` | 25,687 | 57,101 | 122.3% | 1 | 20 |
| DuckDB | `SQLancer` | 31,789 | 180,000 | 466.2% | 0 | 8 |
| ClickHouse | `SQLancer` | 46,812 | 530,003 | 1,032.2% | 0 | 1 |

The results show that SmartFuzz consistently achieves higher branch coverage than the generation-based baselines on all four DBMSs. Compared with `SQLancer++`, SmartFuzz improves branch coverage by 272.0% on MonetDB and 122.3% on Virtuoso. Compared with native `SQLancer`, SmartFuzz improves branch coverage by 466.2% on DuckDB and 1,032.2% on ClickHouse.

The bug-discovery results follow the same trend. The generation-based baselines find 5 bugs in total across the four DBMSs, while SmartFuzz finds 61 bugs under the same 24-hour budget. 

These results suggest that generation-based fuzzers and SmartFuzz explore the input space in different ways. `SQLancer` / `SQLancer++` generate SQL programs from supported grammar and oracle logic, which is effective for producing valid queries but can be limited by the manually encoded feature space and generation templates. In contrast, SmartFuzz starts from feature-rich seeds synthesized from official documentation and historical crash features, then relies on coverage-guided mutation to further explore nearby execution states. This combination helps SmartFuzz exercise DBMS-specific features, complex feature interactions, and bug-prone paths that are less likely to be reached by pure generation. Overall, the comparison demonstrates that SmartFuzz is complementary to generation-based DBMS testing and provides practical benefits for both coverage expansion and bug discovery.

## References

- `SQLancer` official repository: https://github.com/sqlancer/sqlancer
- `SQLancer++` paper: https://arxiv.org/abs/2503.21424
