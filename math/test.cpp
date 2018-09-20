#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "FunMath.h" // include your header file here

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
    REQUIRE (3 + 1 == 4);
}

// Add more test cases down here
std::vector<int> in = {1, 2, 3, 4, 5};
std::vector<int> out = {3, 4, 5, 6, 7};
std::vector<int> out2 = {5, 6, 7, 8, 9};
TEST_CASE("each element of the vector plus N", "[VectorPlusN]") {
    REQUIRE (VectorPlusN(in, 2) == out);
    REQUIRE (VectorPlusN(in, 4) == out2);
}