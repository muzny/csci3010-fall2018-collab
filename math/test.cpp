#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <vector>

#include "FunMath.h" // include your header file here

std::vector<int> a (4,2);
std::vector<int> b (4,4);
// Add more test cases down here
TEST_CASE("Vectors are multpilied", "[vector]" )
{
	REQUIRE( VectMult(a, 2) == b);
}