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
