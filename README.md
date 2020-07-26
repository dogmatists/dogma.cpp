# Dogma for C++

[![Project license](https://img.shields.io/badge/license-Public%20Domain-blue.svg)](https://unlicense.org)
![C++ compatibility](https://img.shields.io/badge/c%2B%2B-17%20%7C%2020-blue)
[![Continuous integration](https://github.com/dogmatists/dogma.cpp/workflows/CI/badge.svg)](https://github.com/dogmatists/dogma.cpp/actions?query=workflow:CI)

<https://dogma.dev>

## Prerequisites

- [C++17][] compiler (for example, [Clang][] 5+, [GCC][] 7+, or [MSVC][] 19.14+)

[C++17]: https://en.wikipedia.org/wiki/C%2B%2B17
[Clang]: https://clang.llvm.org
[GCC]:   https://gcc.gnu.org
[MSVC]:  https://en.wikipedia.org/wiki/Microsoft_Visual_C%2B%2B

## Installation

### Installation from Source Code

```bash
$ git clone https://github.com/dogmatists/dogma.cpp.git

$ cd dogma.cpp

$ sudo make install
```

## Examples

### Including the header file

```c++
#include <dogma.hpp>
```

### Checking the library version

### Miscellaneous examples

## Reference

### Constants

- `dogma::version::major`
- `dogma::version::minor`
- `dogma::version::patch`

### Enums

### Classes

- [`dogma::Angle`](https://dogma.dev/Angle)
- [`dogma::Latitude`](https://dogma.dev/Latitude)
- [`dogma::Longitude`](https://dogma.dev/Longitude)

### Functions

## See Also

Dogma for [C][], [Dart][], [Protobuf][], [Python][], [Ruby][], and [Zig][].

[C]:        https://github.com/dogmatists/dogma.c
[C++]:      https://github.com/dogmatists/dogma.cpp
[Dart]:     https://github.com/dogmatists/dogma.dart
[Protobuf]: https://github.com/dogmatists/dogma.pb
[Python]:   https://github.com/dogmatists/dogma.py
[Ruby]:     https://github.com/dogmatists/dogma.rb
[Zig]:      https://github.com/dogmatists/dogma.zig
