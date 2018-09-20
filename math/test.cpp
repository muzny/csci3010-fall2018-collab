#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "FunMath.h" // include your header file here

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
}

TEST_CASE("Returns vector of squared numbers","[squaredvectors]"){
    REQUIRE (squaredvector(5).size() == 5);
    REQUIRE (squaredvector(5)[1] == 4);
}



// Add more test cases down here
