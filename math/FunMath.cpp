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
