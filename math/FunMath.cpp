#include "FunMath.h"

/**Hey Liz and Tyler added a comment!
this function takes an integer input and returns 1 if positive, -1 if negative
**/

int CheckSign(int input){
	if (input > 0){
		return 1;
	} else if (input < 0){
		return -1;
	} else {
		return 0;
	}
}

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

/*
    This function takes two strings and returns a new string that is the result of removing s2 from s1.
    NOTE: This only removes the first instance of the substring found.

    @param string s1 - The string to be removed from.
    @param string s2 - The string to remove from s1.
    @return string - IF FOUND: The result of removing s2 from s1
                     NOT FOUND: s1 with nothing removed
*/

std::string RemoveSubstring(std::string s1, std::string s2){
    int substring_start = -1;
    substring_start = s1.find(s2); //find the index where the substring first occurs
    if(substring_start != -1){
      s1.erase(s1.begin() + substring_start, s1.begin() + substring_start + s2.length()); //erase the substring
    }

    return s1;
}

std::vector<int> multiples(int n, int m) {
	std::vector<int> answer;
	for(int i = 1; i <= m; i++) {
		answer.push_back(n*i);
	}

	return answer;
}
