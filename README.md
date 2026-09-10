# Competitive Programming

Solutions to competitive programming problems, mostly in C++.

## Structure

Problem solutions are organised by platform:

* `problems/codeforces/` — Codeforces solutions
* `problems/cses/` — CSES Problem Set solutions
* `problems/cemc-potw/` — CEMC Problem of the Week solutions
* `problems/ccc/` — Canadian Computing Competition solutions (Java)

Files follow the naming convention:

```text
cf_<problem-id>.cpp
cses_<problem-id>.cpp
cemc_<problem-name>.cpp
ccc_<year>-<problem-name>.java
```

For example:

```text
cf_4A.cpp
cses_1068.cpp
cemc_exactly-four.cpp
ccc_2023-s1-trianglane.java
```

## Running

C++ solutions are single translation units; the CCC Java solutions are single-file
programs with a package-private class, so they run directly:

```sh
java problems/ccc/ccc_2023-s1-trianglane.java
```
