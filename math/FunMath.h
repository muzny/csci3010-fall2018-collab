#ifndef _FUNMATH_H_
#define _FUNMATH_H_

#include <vector>
#include <string>


// CSCI 3010 - Fall 2018
// declare your function definitions here
// they should not be inside of a class
// include a function comment in this file, making sure to comment
// on what the function does, parameters, and return values
// for example (put this in the .cpp file for this exercise):
/**
    Adds two numbers together.
    @param num1 The first number
    @param num2 The second number
    @return the sum of the two numbers
*/
//int Sum(int num1, int num2);

int NextLeapYear(int current_year);

int removeTwos(int myInt);

int CheckSign(int input);
std::vector<int> multiples(int n, int m);

std::string RemoveSubstring(std::string s1, std::string s2);

int VectorProduct(std::vector<int> v);

std::vector<int> EvenOddVectors(std::vector<int> even_odd_input);

/**
    This function takes two vectors of integers, a and b. The fuction then removes elements from a if they are also in b.
    If the integer is in b, but not in a, nothing happens. 
        @param a: a vector of integers, the vector that is modified based on b
        @param b: a vector of integers
        @return: function returns vector a after it has elements removed.
*/
std::vector<int> MatchVectors(std::vector <int> a, std::vector <int> b);

#endif  // _FUNMATH_H_