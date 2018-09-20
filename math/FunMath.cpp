#include "FunMath.h"


//EvenOddVectors takes in a vector of integers and returns a vector of 0 for even and 1 for odd for the input vector.
std::vector<int> EvenOddVectors(std::vector<int> even_odd_input) {
        std::vector<int> even_odd_output;
        for (int i = 0; i < even_odd_input.size(); i++) {
                even_odd_output.vector::push_back(even_odd_input[i] %= 2);
        }
        return even_odd_output;
}

