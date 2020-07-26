// This is free and unencumbered software released into the public domain.

#pragma once

#include "angle.hpp"

#include <cerrno>  // for errno, EDOM

namespace dogma {
  struct Longitude;
}

/**
 * @see https://dogma.dev/Longitude
 */
struct dogma::Longitude {
  Angle angle;
};
