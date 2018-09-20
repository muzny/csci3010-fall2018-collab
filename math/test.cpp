#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "FunMath.h" // include your header file here

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
    REQUIRE (3 + 1 == 4);
}

// Add more test cases down here

TEST_CASE("multiplying n up to m", "[multiples]") {
    std::vector<int> integers = {2, 4, 6};
    REQUIRE(Multiples(2, 3) == integers);

    integers = {3, 6, 9, 12};
    REQUIRE(Multiples(3, 4) == integers);

}
