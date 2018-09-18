#include "FunMath.h"

/**
    Adds all element from a that do not match with b
*/
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b){
    std::vector<int> c;
    bool match;
    for(int i = 0; i < a.size(); i++){
        match = false;
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]){
                match = true;
            }
        }
        if(match == false){
            c.push_back(a[i]);
        }
    }
    return c;
}
