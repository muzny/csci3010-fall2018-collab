#include "FunMath.h"
#include <vector>
using namespace std;

// VectorSum takes a vector of integers and returns the sum of all the integers
int VectorSum(vector<int> v) {
	int size = v.size();
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += v[i];
	}
	return sum;
}
