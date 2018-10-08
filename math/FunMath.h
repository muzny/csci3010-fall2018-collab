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
/*
    Adds two numbers together.
    @param num1 The first number
    @param num2 The second number
    @return the sum of the two numbers
*/
// int Sum(int num1, int num2);

int VectorSum(std::vector<int> v);

int NextLeapYear(int current_year);

std::vector<int> Multiples(int n, int m);

int CheckSign(int input);

std::string RemoveSubstring(std::string s1, std::string s2);

std::vector<int> EvenOddVectors(std::vector<int> even_odd_input);

std::vector<int> MatchVectors(std::vector <int> a, std::vector <int> b);

int removeTwos(int myInt);

#endif  // _FUNMATH_H_
