#include "FunMath.h"

using namespace std;



int removeTwos(int myInt){
    while (myInt%2 == 0) {
        myInt = myInt/2;
        
    }
    return myInt;


std::vector<int> multiples(int n, int m) {
	std::vector<int> answer;
	for(int i = 1; i <= m; i++) {
		answer.push_back(n*i);
	}

	return answer;


}
