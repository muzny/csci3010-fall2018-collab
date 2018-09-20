#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "FunMath.h" // include your header file here

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
}

// Add more test cases down here

TEST_CASE("Match function for vector matching", "[match]"){
	std::vector<int> a = {1,2,3,4,5};
	std::vector<int> b = {1,2,5};
	std::vector<int> c = {};
	REQUIRE (MatchVectors(a,b).size() == 2);
	REQUIRE (MatchVectors(a,b)[0] == 3);
	REQUIRE (MatchVectors(a,b)[1] == 4);
	REQUIRE (MatchVectors(a,c).size() == 5);
}
