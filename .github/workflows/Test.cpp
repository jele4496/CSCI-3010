#define CATCH_CONFIG_MAIN
#include "functions_to_implement.cpp"
#include <vector>
#include <cassert>

TEST_CASE ("Factorials are computed", "[factorial]"){
    REQUIRE( Factorial(0) == 0);
    REQUIRE( Factorial(1) == 1);
    REQUIRE( Factorial(2) == 2);
    REQUIRE( Factorial(3) == 6);
    REQUIRE( Factorial(10) == 3628800);
}

