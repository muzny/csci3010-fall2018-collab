#include "FunMath.h"
using namespace std;



int removeTwos(int myInt){
    while (myInt%2 == 0) {
        myInt = myInt/2;
        
    }
    return myInt;
}
