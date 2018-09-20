#include "FunMath.h"


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
