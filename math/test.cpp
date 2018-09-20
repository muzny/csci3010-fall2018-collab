#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "FunMath.h" // include your header file here

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
    REQUIRE (3 + 1 == 4);
}

// Add more test cases down here
TEST_CASE("Even odd vectors computed", "[EvenOdd]") {
    std::vector<int> even_odd_input1 = {1,2,5};
    std::vector<int> even_odd_input2 = {56,7,53};
    std::vector<int> even_odd_input3 = {0,5,76};

    REQUIRE (EvenOddVectors(even_odd_input1) == std::vector<int> {1,0,1});
    REQUIRE (EvenOddVectors(even_odd_input2) == std::vector<int> {0,1,1});
    REQUIRE (EvenOddVectors(even_odd_input3) == std::vector<int> {0,1,0}); 
}
