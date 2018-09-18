#include "FunMath.h"

int NextLeapYear(int current_year) {
    int curr = current_year;
    while (true) {
        if ((curr % 4 == 0 && curr % 100 != 0) || (curr % 4 == 0 && curr % 100 == 0 && curr % 400 == 0)) {
            return curr;
        } 
        curr++;
    }
    return -1; // should never get here
}

std::vector<int> multiples(int n, int m) {
	std::vector<int> answer;
	for(int i = 1; i <= m; i++) {
		answer.push_back(n*i);
	}

	return answer;
}
