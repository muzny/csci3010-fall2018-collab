#include <iostream>
#include <vector>

int Answer(std::vector<int> v){
	int sum = 1;
	for(int i = 0; i < v.size(); i++){
		sum *= v[i];
	}
	return sum;
}



int main(){
	std::vector<int> v;
	for(int i = 1; i < 5; i++){
		v.push_back(i);
	}
	std::cout<<"Product of ints inside Vector: "<<Answer(v)<<std::endl;
	return 0;
}
