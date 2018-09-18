#include "FunMath.h"


int NextLeapYear(int current_year) {
	int curr = current_year;
	while(true) {
		if (curr % 4 == 0 && curr % 100 != 0) || (curr % 4 == 0 && curr % 100 == 0 && curr %400 = 0) {
			return curr;
		}
	}
	return -1; //should never get here
}
