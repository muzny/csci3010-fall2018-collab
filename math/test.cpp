#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "FunMath.h" // include your header file here

// Here is an example test case
TEST_CASE("plus operator on ints", "[plus]") {
    REQUIRE (1 + 1 == 2);
    REQUIRE (3 + 1 == 4);
}

// Add more test cases down here

<<<<<<< HEAD
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
=======
TEST_CASE("check sign of int", "[checksign]"){
	REQUIRE (CheckSign(5)==1);
	REQUIRE (CheckSign(-5)==-1);
	REQUIRE (CheckSign(0)==0);
>>>>>>> master
}
