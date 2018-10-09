#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "FunMath.h" // include your header file here
#include <vector>


std::vector<int> a (4,2);
std::vector<int> b (4,4);
// Add more test cases down here
TEST_CASE("Vectors are multpilied", "[vector]" )
{
	REQUIRE( VectMult(a, 2) == b);
}



TEST_CASE("Returns vector of squared numbers","[squaredvectors]"){
    REQUIRE (squaredvector(5).size() == 5);
    REQUIRE (squaredvector(5)[1] == 4);
}

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
    REQUIRE (3 + 1 == 4);
}

// Add more test cases down here

TEST_CASE("Testing RemoveSubstring function", "[RemoveSubstring]") {

  std::string str1 = "This is a test";
  std::string str2 = "test";
  std::string str3 = "this is not there";

  SECTION( "remove substring 'test' from 'This is a test' " ){
    
    REQUIRE( RemoveSubstring(str1, str2) == "This is a " );

  }

  SECTION( "remove substring 'test' from 'this is not there' " ){
    
    REQUIRE( RemoveSubstring(str3, str1) == str3 );

  }

  SECTION( "remove substring 'this is not there' from 'This is a test' " ){
    
    REQUIRE( RemoveSubstring(str2, str3) == str2 );

  }
}

TEST_CASE("vector sum", "[VectorSum]") {
	REQUIRE (VectorSum({1, 2, 3, 4}) == 10);
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

TEST_CASE("each element of the vector plus N", "[VectorPlusN]") {
    std::vector<int> in = {1, 2, 3, 4, 5};
    std::vector<int> out = {3, 4, 5, 6, 7};
    std::vector<int> out2 = {5, 6, 7, 8, 9};
    REQUIRE (VectorPlusN(in, 2) == out);
    REQUIRE (VectorPlusN(in, 4) == out2);
}

TEST_CASE("Even odd vectors computed", "[EvenOdd]") {
    std::vector<int> even_odd_input1 = {1,2,5};
    std::vector<int> even_odd_input2 = {56,7,53};
    std::vector<int> even_odd_input3 = {0,5,76};
    std::vector<int> even_odd_input4 = {};

    REQUIRE (EvenOddVectors(even_odd_input1) == std::vector<int> {1,0,1});
    REQUIRE (EvenOddVectors(even_odd_input2) == std::vector<int> {0,1,1});
    REQUIRE (EvenOddVectors(even_odd_input3) == std::vector<int> {0,1,0}); 
    REQUIRE (EvenOddVectors(even_odd_input4) == std::vector<int> {});
}

TEST_CASE("Match function for vector matching", "[match]"){
	std::vector<int> a = {1,2,3,4,5};
	std::vector<int> b = {1,2,5};
	std::vector<int> c = {};
	REQUIRE (MatchVectors(a,b).size() == 2);
	REQUIRE (MatchVectors(a,b)[0] == 3);
	REQUIRE (MatchVectors(a,b)[1] == 4);
	REQUIRE (MatchVectors(a,c).size() == 5);
}

TEST_CASE("multiplying n up to m", "[multiples]") {
    std::vector<int> integers = {2, 4, 6};
    REQUIRE(multiples(2, 3) == integers);

    integers = {3, 6, 9, 12};
    REQUIRE(multiples(3, 4) == integers);

}

TEST_CASE("check sign of int", "[checksign]"){
	REQUIRE (CheckSign(5)==1);
	REQUIRE (CheckSign(-5)==-1);
	REQUIRE (CheckSign(0)==0);


}


TEST_CASE("Vector Product Tests", "[VectorProduct]")
{
    std::vector<int> v {1,2,3,4};
    std::vector<int> v2 {4,5,6,7};
    REQUIRE(VectorProduct(v) == 24);
    REQUIRE(VectorProduct(v2) == 840);
}

TEST_CASE("StringGlues Tests", "[StringGlues]")
{
    vector<string> v = {"dog", "cat", "house"};
    vector<string> c = {" ", " "," "};
    vector<string> d ={}; 
    REQUIRE(StringGlues(v) == "doggluecatgluehouse");
    REQUIRE(StringGlues(c) == " glue glue ");
    REQUIRE(StringGlues(d) == ""); 


}
