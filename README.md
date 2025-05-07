<p align="center">
 <img width="100px" src="https://github.com/likespro.png" align="center" alt="Competitive Template" />
 <h2 align="center">Competitive Programming Template by likespro</h2>
 <p align="center">Template for CP competitions such as ICPC, CodeForces, etc. Written in C++.</p>
</p>
<p align="center">
    <a href="https://github.com/likespro/cp-programming-template">
      <img alt="LICENSE" src="https://img.shields.io/badge/licence-MIT-yellow" />
    </a>
    <a href="https://github.com/likespro/cp-programming-template/graphs/contributors">
      <img alt="GitHub Contributors" src="https://img.shields.io/github/contributors/likespro/cp-programming-template" />
    </a>
    <a href="https://github.com/likespro/cp-programming-template/issues">
      <img alt="Issues" src="https://img.shields.io/github/issues/likespro/cp-programming-template?color=0088ff" />
    </a>
    <a href="https://github.com/likespro/cp-programming-template/pulls">
      <img alt="GitHub pull requests" src="https://img.shields.io/github/issues-pr/likespro/cp-programming-template?color=0088ff" />
    </a>
  </p>
<p align="center">
    <a href="https://github.com/likespro/cp-programming-template/workflows/Main Branch Workflow">
      <img alt="Build Passing" src="https://github.com/likespro/cp-programming-template/workflows/Main Branch Workflow/badge.svg" />
    </a>
    <a href="https://app.codacy.com/gh/likespro/cp-programming-template/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade">
      <img src="https://app.codacy.com/project/badge/Grade/59828f3512224a018a6930c0c68c5a71"/>
    </a>
    <a href="https://github.com/axusinc/cp-programming-template">
      <img alt="Git Size" src="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/likespro/cp-programming-template/badges/git-size.md?raw=true" />
    </a>
    <a href="https://github.com/axusinc/cp-programming-template">
      <img alt="Git File Count" src="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/likespro/cp-programming-template/badges/git-file-count.md?raw=true" />
    </a>
    <a href="https://github.com/axusinc/cp-programming-template">
      <img alt="Git Lines Of Code" src="https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/likespro/cp-programming-template/badges/git-lines-of-code.md?raw=true" />
    </a>
  </p>





## Overview
A C++ template for competitions such as ICPC, CodeForces, AtCoder, etc.

The main goal of this template is to be very powerful and convenient.

The IDE where cp-programming-template is developing - Microsoft Visual Studio 2022 Community Edition.

### How to use it
Just copy & paste content of "likespro.eth - UNIVERSAL/likespro.eth - UNIVERSAL.cpp" to your empty program. Or simply download repo and start coding in this project.

## Template content
*Variables names in brackets `()` can be replaced to any other names, for example: `vi a; sort(all(a))` - here `n` in `all(n)` was replaced to the name of existing `vector<int>`*
### Includes
* `iostream`
* `vector`
* `algorithm`
* `cmath`
* `set`
* `map`
* `numeric`
* `queue`
* `cassert`
* `string`
* `sstream`
* `bitset`
* `numeric`
* `iomanip`
* `unordered_map`
* `random`
### Namespaces
* `std`
### Common Definitions
* `int` = `long long`
* `uint` = `unsigned int`
* `sz` = `size()`
* `pb` = `push_back`
* `mp` = `make_pair`
* `all(n)` = `(n).begin(), (n).end()`
* `rall(n)` = `(n).rbegin(), (n).rend()`
* `elif` = `else if`
* `flag` = `bool f = 0;`
* `SVap` = `swap` (the most Essential Define from YuriyKap)


* `forin` = `for(int i = 0; i < n; i++)`
* `rofin` = `for(int i = n; i >= 0; i--)`
* `fori(n)` = `for(int i = 0; i < (n); i++)`
* `rofi(n)` = `for(int i = (n); i >= 0; i--)`
### Definitions against Wrong Spelling
* `iont` = `int`
* `itn` = `int`
* `for9int` = `for(int`
* `svap` = `SVap`
* `breakl` = `break`
* `continuel` = `continue`
* `voif` = `void`
### Definitions for Constants
* `INF` = `2000000000`
* `MOD` = `1000000007`
* `MOD_EOLYMP` = `998244353`
* `PI` = `3.14159265359`
* `ALPHABET` = `abcdefghijklmnopqrstuvwxyz`
* `YES` = `YES`
* `NO` = `NO`
* `BUF_SZ` = `1000000`
* `INT_MAX` = `2147483647`
* `INT_MIN` = `-2147483648`
### New Types
* `Trip` - Structure with three elements - `first`, `second` and `third`
### Binded Types
* `vi` = `vector<int>`
* `vvi` = `vector<vi>`
* `vb` = `vector<bool>`
* `vvb` = `vector<vb>`
* `pii` = `pair<int, int>`
* `pdi` = `pair<double, int>`
* `pipii` = `pair<int, pii>`
* `tiii` = `Trip<int, int, int>`
* `vpii` = `vector<pii>`
* `vpdi` = `vector<pdi>`
* `vpipii` = `vector<pipii>`
* `vvpii` = `vector<vpii>`
* `vtiii` = `vector<tiii>`
* `vc` = `vector<char>`
* `vvc` = `vector<vc>`
* `vstr` = `vector<string>`
* `si` = `set<int>`
* `spii` = `set<pii>`
* `vsi` = `vector<si>`
* `msi` = `multiset<int>`
* `mspii` = `multiset<pii>`
* `mii` = `map<int, int>`
* `mapsi` = `map<string, int>`
* `mib` = `map<int, bool>`
* `mipii` = `map<int, pii>`
* `mitiii` = `map<int, tiii>`
* `mpiivpii` = `map<pii, vpii>`
* `misi` = `map<int, si>`
* `mivi` = `map<int, vi>`
* `qi` = `queue<int>`
* `vqi` = `vector<qi>`
### Misc Abbreviates
* `via` = `vi a`
* `vib` = `vi b`
* `vian` = `vi a(n)`
* `viam` = `vi a(m)`
* `vibn` = `vi b(n)`
* `vibm` = `vi b(m)`
### Inline Functions (macros)
* `retyes` - prints "YES" and returns from function where it was called
* `retno` - prints "NO" and returns from function where it was called
### Functions
* `xin()` - reads new `long long` number from `stdin` using `cin` and returns this number
* ~~`fileio(filename, [input_file_suffix], [output_file_suffix])` - binds `<filename><input_file_suffix>` to `stdin` and `<filename><input_file_suffix>` to `stdout`. Default value for `input_file_suffix` is `.in`, for `output_file_suffix` - `.out`.~~ Temporary disabled because `Microsoft Visual Studio 2022` does not support it
* `tros(begin_iterator, end_iterator)` - sort array in order from the biggest to the lowest
### Operators
* `>>vector` - `istream` for `vector`, reads to all elements. Example of usage: `cin>>vector;`
* `<<vector` - `ostream` for `vector`, prints all elements separated by space. Example of usage: `cout<<vector;`
### New Namespaces
* `CompilerTests` - simple functions to test if compiler is working properly. Contains:
  * `helloWorld()` - print `Hello, world!`
  * `sum()` - read 2 numbers and output their sum
### Main Function
* `srand(time(NULL))` - initializes default random using current time as seed
* `ios::sync_with_stdio(false)` - disables sync with stdio for higher performance of `cin` and `cout`
* `cin.tie(0); cout.tie(0)` - optimizations for `cin` and `cout`
* `bool multiTestEnabled = false` - if set to `true`, the program will read number of subtests and run those times the specified function with solution for subtest
* `while (t--) <function with solution>` - here you need to specify the function with solution

## Q&A
### Why project name in VS is "likespro.eth - UNIVERSAL"
This is because the file where likespro code all solutions is called so; template is extracted from the file with solutions.

### I want to view raw file with some tasks solutions
Raw file with no extracted solutions is in "tasks-solutions" branch. But I really wonder why do you need it...
