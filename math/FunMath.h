#ifndef _FUNMATH_H_
#define _FUNMATH_H_

#include <vector>
#include <string>

/**
 * Josiah Graham
 * Faisal Lalani
 * Kyle Hilton
 */

// CSCI 3010 - Fall 2018
// declare your function definitions here
// they should not be inside of a class
// include a function comment in this file, making sure to comment
// on what the function does, parameters, and return values
// for example:
/**
    Adds two numbers together.
    @param num1 The first number
    @param num2 The second number
    @return the sum of the two numbers
*/
// int Sum(int num1, int num2);

std::vector<int> EvenOddVectors(std::vector<int> even_odd_input) {
	std::vector<int> even_odd_output;
	for (int i = 0; i < even_odd_input.size(); i++) {
		even_odd_output.vector::push_back(even_odd_input[i] %= 2);
	}
	return even_odd_output;
}

#endif  // _FUNMATH_H_
