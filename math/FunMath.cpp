#include "FunMath.h"
#include <vector>
using namespace std;

int vectorSum(vector<int> v) {
	int size = v.size();
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += v[i];
	}
	return sum;
}
