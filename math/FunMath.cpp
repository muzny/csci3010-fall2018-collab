#include "FunMath.h"
#include <vector>


std::vector<int> Vect_Mult(std::vector<int> vect, int n){
  std::vector<int> ans;
  for (unsigned i=0;i<vect.size();i++){
    int val=vect[i]*n;
    ans.push_back(val);
  }
  return ans;

}
