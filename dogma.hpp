// This is free and unencumbered software released into the public domain.

#pragma once

/**
 * @file
 *
 * Dogma for C++.
 *
 * @see https://github.com/dogmatists/dogma.cpp
 */

#ifndef __cplusplus
#error "<dogma.hpp> requires a C++ compiler"
#endif

#if __cplusplus < 201703L
#error "<dogma.hpp> requires a C++17 or newer compiler (CXXFLAGS='-std=c++17')"
#endif

namespace dogma {}