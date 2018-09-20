#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "FunMath.h" // include your header file here

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
}

// Add more test cases down here

TEST_CASE("factorial on ints", "[factorial]") {
    REQUIRE (Factorial(3) == 6);
    REQUIRE (Factorial(2) == 2);
}
