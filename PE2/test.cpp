#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Circle.h"

TEST_CASE ( "Circles are computed", "[Circle]") {
Point p = {0, 0};
Circle c1(p, 2);
Circle c2(p, 4);

REQUIRE(c1.Overlaps(c2) == true);
REQUIRE(c1.CalculateArea() == 4 * M_PI);
c1.Expand();
REQUIRE(c1.get_radius() == 3);
c1.Shrink();
REQUIRE(c1.get_radius() == 2);
}