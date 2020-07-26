// This is free and unencumbered software released into the public domain.

#pragma once

#include "angle.hpp"

#include <cerrno>  // for errno, EDOM

namespace dogma {
  struct Latitude;
}

/**
 * @see https://dogma.dev/Latitude
 */
struct dogma::Latitude {
  Angle angle;
};
