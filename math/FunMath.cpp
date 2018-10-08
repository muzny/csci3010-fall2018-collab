#include "FunMath.h"
#include <vector>

using namespace std;

/**
	Returns the sum of all integers in a vector.

	@param v The vector of integers
	@return The sum of the integers
*/
int VectorSum(vector<int> v) {
	int size = v.size();
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += v[i];
	}
	return sum;
}

/*

This function divides an input integer by 2 until it is impossible to do so, then returns the final number.
@param myInt takes in integer to be changed
@return int result of dividing by two until it cannot be done

*/

int removeTwos(int myInt){
    while (myInt%2 == 0) {
        myInt = myInt/2;

    }
    return myInt;
}

/**
    This function takes two vectors of integers, a and b. The fuction then removes elements from a if they are also in b.
    If the integer is in b, but not in a, nothing happens.
        @param a: a vector of integers, the vector that is modified based on b
        @param b: a vector of integers
        @return: function returns vector a after it has elements removed.
*/
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b){
//The return vector
    std::vector<int> c;
//match boolean is set to false at the beginning and is set to true if a match is found
    bool match;
//For loop essentially looks for matches that exist in both b and a
    for(int i = 0; i < a.size(); i++){
        match = false;
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]){
                match = true;
            }
        }
//If a match is not found, then we keep the element of a
        if(match == false){
            c.push_back(a[i]);
        }
    }
    return c;
}

/**Hey Liz and Tyler added a comment!
this function takes an integer input and returns 1 if positive, -1 if negative
**/

int CheckSign(int input){
	if (input > 0){
		return 1;
	} else if (input < 0){
		return -1;
	} else {
		return 0;
	}
}


/*
    This function calculates the next leap year. If the current year is a leap year,
    this function returns the current year.
    @param current_year the year after which to find the next leap year
    @return int the next leap year that is >= current year
*/
int NextLeapYear(int current_year) {
    int curr = current_year;
    while (true) {
        if (curr % 4 == 0) {
            if ((curr % 100 != 0) || (curr % 400 == 0)) {
                return curr;
            }
        }
        curr++;
    }
    return -1; // should never get here
}

/*
    This function takes two strings and returns a new string that is the result of removing s2 from s1.
    NOTE: This only removes the first instance of the substring found.

    @param string s1 - The string to be removed from.
    @param string s2 - The string to remove from s1.
    @return The resulting string.
*/
std::string RemoveSubstring(std::string s1, std::string s2){
    int substring_start = -1;
    substring_start = s1.find(s2); //find the index where the substring first occurs
    s1.erase(s1.begin() + substring_start, s1.begin() + substring_start + s2.length()); //erase the substring

    if(substring_start != -1){
        return s1;
    }
    else{
        return "not found";
    }
}

/**
    This function takes in two integers and returns a vector of size n with
    values n*1, n*2, n*3... up to n*m
    @param integer n, integer m
    @return a vector of integers n times up to m
*/

std::vector<int> Multiples(int n, int m) {
	std::vector<int> answer;
	for(int i = 1; i <= m; i++) {
		answer.push_back(n*i);
	}

	return answer;
}

/*
    Calculates the product of every integer in a vector

    @v vector that contains integers
*/
int VectorProduct(std::vector<int> v)
{
    int sum = 1;
    for(int i = 0; i < v.size(); i++){
        sum *= v[i];
    }
    return sum;
}

//EvenOddVectors takes in a vector of integers and returns a vector of 0 for ev$
std::vector<int> EvenOddVectors(std::vector<int> even_odd_input) {
        std::vector<int> even_odd_output;
        for (int i = 0; i < even_odd_input.size(); i++) {
                even_odd_output.vector::push_back(even_odd_input[i] %= 2);
        }
        return even_odd_output;
}
