#include "FunMath.h"

/**
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

std::vector<int> multiples(int n, int m) {
	std::vector<int> answer;
	for(int i = 1; i <= m; i++) {
		answer.push_back(n*i);
	}

	return answer;
}
