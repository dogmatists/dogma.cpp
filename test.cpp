// This is free and unencumbered software released into the public domain.

#include "dogma.hpp"

#include <cassert>  // for assert()
#include <cerrno>   // for errno, EDOM
#include <cstdlib>  // for EXIT_SUCCESS

using namespace dogma;

static void test_Angle_radians(void) {
  assert(Angle::from_radians(0).radians() == 0);
  assert(Angle::from_radians(0.5 * M_PI).radians() == 0.5 * M_PI);
  assert(Angle::from_radians(1 * M_PI).radians() == 1 * M_PI);
  assert(Angle::from_radians(2 * M_PI).radians() == 2 * M_PI);
}

static void test_Angle_degrees(void) {
  assert(Angle::from_degrees(0).degrees() == 0);
  assert(Angle::from_degrees(90).degrees() == 90);
  assert(Angle::from_degrees(180).degrees() == 180);
  assert(Angle::from_degrees(360).degrees() == 360);
}

static void test_Angle_turns(void) {
  assert(Angle::from_turns(0).turns() == 0);
  assert(Angle::from_turns(0.25).turns() == 0.25);
  assert(Angle::from_turns(0.5).turns() == 0.5);
  assert(Angle::from_turns(1).turns() == 1);
}

static void test_Angle(void) {
  test_Angle_radians();
  test_Angle_degrees();
  test_Angle_turns();
}

static void test_Latitude(void) {
  // TODO
}

static void test_Longitude(void) {
  // TODO
}

int main(void) {
  test_Angle();
  test_Latitude();
  test_Longitude();

  return EXIT_SUCCESS;
}
