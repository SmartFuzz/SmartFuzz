# Additional Comparison with AI-Based Fuzzing Baselines

Following Reviewer #A's suggestion, we added a comparison with the representative AI-based fuzzer `Fuzz4All` under the same 24-hour fuzzing setup.

## Setup

- **Targets:** MonetDB v11.54.0, Virtuoso v7.2.17, DuckDB v1.4.1, and ClickHouse v23.5.3.4.
- **Budget:** 24 hours per DBMS.
- **Repetitions:** 5 independent runs per configuration; we report the average.
- **Metrics:** branch coverage and number of discovered bugs.
- **Baseline:** `Fuzz4All`, a universal LLM-based fuzzer that uses LLMs as the input generation.

For a fair comparison, we adapted `Fuzz4All` to generate SQL programs for each target DBMS and execute the generated programs under the same validation, crash collection, deduplication, and coverage measurement pipeline used by SmartFuzz. Unlike SmartFuzz, `Fuzz4All` directly relies on LLM-based input generation and prompt evolution; it does not use documentation-derived feature repositories, historical crash-feature extraction, or compatibility-aware coverage-guided mutation.

## Baseline Selection

We select `Fuzz4All` because it is a representative and publicly available AI-based fuzzing framework. Its official repository and artifact provide the implementation needed for reproduction, and its design is general enough to target formal input languages such as SQL after adding a lightweight target adapter.

We did not include the following AI-based fuzzers as direct baselines:

- **FuzzGPT.** FuzzGPT targets deep learning libraries such as PyTorch and TensorFlow. Its generated inputs are Python programs designed to exercise DL-library APIs and computational-graph constraints, rather than SQL programs for DBMS testing. Adapting it to DBMS fuzzing would require redesigning its input representation, execution harness, and bug-detection logic, making it no longer a faithful evaluation of the original technique.
- **ShQveL.** ShQveL is closely related to AI-assisted DBMS testing, as it augments SQL test-case generators with LLM-synthesized SQL fragments. However, we could not locate a public source-code release or executable artifact. We therefore exclude it from the direct empirical comparison.

## Results

Coverage gain is computed as `(SmartFuzz coverage - baseline coverage) / baseline coverage`. Additional bugs are computed as `SmartFuzz bugs - baseline bugs`.

| DBMS | Baseline tool | Baseline coverage | SmartFuzz coverage | Coverage gain | Baseline bugs | SmartFuzz bugs | Additional bugs |
|---|---|---:|---:|---:|---:|---:|---:|
| MonetDB | `Fuzz4All` | 37,841 | 108,823 | 187.6% | 2 | 32 | 30 |
| Virtuoso | `Fuzz4All` | 56,087 | 57,101 | 1.8% | 0 | 20 | 20 |
| DuckDB | `Fuzz4All` | 51,725 | 180,000 | 248.0% | 0 | 8 | 8 |
| ClickHouse | `Fuzz4All` | 175,589 | 530,003 | 201.8% | 0 | 1 | 1 |
| **Total** | - | - | - | - | 2 | 61 | 59 |

The results show that SmartFuzz achieves higher branch coverage than `Fuzz4All` on all four DBMSs under the same 24-hour budget. SmartFuzz improves coverage by 187.6% on MonetDB, 1.8% on Virtuoso, 248.0% on DuckDB, and 201.8% on ClickHouse. The improvement is substantial on three of the four DBMSs. On Virtuoso, `Fuzz4All` reaches coverage close to SmartFuzz. One likely reason is that Virtuoso's documentation is less comprehensive than that of the other evaluated DBMSs, which limits the coverage advantage that SmartFuzz can obtain from documentation-derived feature guidance. 

In terms of bug finding, SmartFuzz discovers 61 bugs in total, while `Fuzz4All` discovers only 2. SmartFuzz therefore finds 59 additional bugs. The gap is especially pronounced on Virtuoso, DuckDB, and ClickHouse: `Fuzz4All` finds no bugs on these targets, whereas SmartFuzz finds 20, 8, and 1 bugs, respectively. On MonetDB, SmartFuzz also increases the bug count from 2 to 32.

`Fuzz4All` uses LLMs as a general-purpose input generator, which can produce diverse SQL programs and reach non-trivial code regions. However, it lacks explicit guidance from DBMS documentation and historical crash-triggering behaviors. SmartFuzz uses these two sources to synthesize seeds that are both feature-rich and biased toward bug-relevant SQL interactions, and then feeds them into compatibility-aware coverage-guided mutation. These gains mainly come from feature-rich guidance for DBMS-specific and bug-relevant SQL synthesis, together with compatibility-aware mutation for deeper coverage-guided exploration. This design improves not only the amount of explored code but also the likelihood of reaching failure-prone execution states.



## References

- `Fuzz4All` project page: https://fuzz4all.github.io/
- `Fuzz4All` official repository: https://github.com/fuzz4all/fuzz4all
- `FuzzGPT` paper: https://arxiv.org/abs/2304.02014
- `ShQveL` paper: https://arxiv.org/abs/2505.02012
