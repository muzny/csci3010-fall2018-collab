#include "FunMath.h"

std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b){
//The return vector
    std::vector<int> c;
//match boolean is set to false at the beginning and is set to true if a match is found
    bool match;
//For loop essentially looks for matches that exist in both b and a
    for(int i = 0; i < a.size(); i++){
        match = false;
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]){
                match = true;
            }
        }
//If a match is not found, then we keep the element of a 
        if(match == false){
            c.push_back(a[i]);
        }
    }
    return c;
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
