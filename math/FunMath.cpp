#include "FunMath.h"
#include <vector>
#include <iostream>

std::vector<int> squaredvector(int squared) {
  std::vector<int> return_vector;
  for (int i = 1 ; i <= squared ; i++ )
    return_vector.push_back(i*i);
  return return_vector;
}
