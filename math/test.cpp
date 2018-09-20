#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "FunMath.h" // include your header file here

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
    REQUIRE (3 + 1 == 4);
}

TEST_CASE("Calling removeTwos on various integers"){
    int i = 0;
    
    SECTION("Evenly divisible by 2 should return 0"){
        
        i = 4;
        i = removeTwos(i);
        
        REQUIRE(i == 1);
        
    }
    SECTION("Not divisible by 2 should return LCD"){
        
        i = 30;
        i = removeTwos(i);
        
        REQUIRE(i == 15);
        
    }



}

// Add more test cases down here
