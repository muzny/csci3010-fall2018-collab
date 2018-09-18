#include "FunMath.h"

using namespace std;

int NextLeapYear(int current_year){
	int curr = current_year;
	while(true){
		if((curr % 4 == 0 && curr % 100 != 0) || (curr % 4 == 0 && curr % 100 && curr % 400 == 0)){
			return curr;
		}
		curr++;
	}
	return -1; //Should never get here
}

int Factorial(int n){
	if(n > 1){
		return n * Factorial(n - 1);
	}
	else{
		return 1;
	}
}