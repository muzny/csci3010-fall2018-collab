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
<<<<<<< HEAD
TEST_CASE("Even odd vectors computed", "[EvenOdd]") {
    std::vector<int> even_odd_input1 = {1,2,5};
    std::vector<int> even_odd_input2 = {56,7,53};
    std::vector<int> even_odd_input3 = {0,5,76};

    REQUIRE (EvenOddVectors(even_odd_input1) == std::vector<int> {1,0,1});
    REQUIRE (EvenOddVectors(even_odd_input2) == std::vector<int> {0,1,1});
    REQUIRE (EvenOddVectors(even_odd_input3) == std::vector<int> {0,1,0}); 
=======


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
    REQUIRE(Multiples(2, 3) == integers);

    integers = {3, 6, 9, 12};
    REQUIRE(Multiples(3, 4) == integers);

}

TEST_CASE("check sign of int", "[checksign]"){
	REQUIRE (CheckSign(5)==1);
	REQUIRE (CheckSign(-5)==-1);
	REQUIRE (CheckSign(0)==0);

>>>>>>> 996a9dc0db78ee53977eb267564002a9d26a782a
}
