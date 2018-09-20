#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "FunMath.h" // include your header file here
#include <vector>
using namespace std;

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
    REQUIRE (3 + 1 == 4);
}

// Add more test cases down here
<<<<<<< HEAD

TEST_CASE("vector sum", "[vectorSum]") {
	REQUIRE (vectorSum({1, 2, 3, 4}) == 10);
}

