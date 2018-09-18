#include "FunMath.h"

std::vector<int> multiples(int n, int m) {
	std::vector<int> answer;
	for(int i = 1; i <= m; i++) {
		answer.push_back(n*i);
	}

	return answer;

}
