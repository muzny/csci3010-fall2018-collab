#include "FunMath.h"

/*
    This function takes two strings and returns a new string that is the result of removing s2 from s1.
    NOTE: This only removes the first instance of the substring found.

    @param string s1 - The string to be removed from.
    @param string s2 - The string to remove from s1.
    @return The resulting string.
*/
std::string RemoveSubstring(std::string s1, std::string s2){
    int substring_start = -1;
    substring_start = s1.find(s2); //find the index where the substring first occurs
    s1.erase(s1.begin() + substring_start, s1.begin() + substring_start + s2.length()); //erase the substring

    if(substring_start != -1){
        return s1;
    }
    else{
        return "not found";
    }
}

std::vector<int> multiples(int n, int m) {
	std::vector<int> answer;
	for(int i = 1; i <= m; i++) {
		answer.push_back(n*i);
	}

	return answer;
}
