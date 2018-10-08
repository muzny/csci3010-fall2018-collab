#include <iostream>
#include <string>
#include <vector>
using namspace std;

string stringGlues(vector<string> v) {
	string full=""; 
	
	for(int i=0; i < v.length() - 1; i++)
	{
		full = full+v[i];
		full= full+"glue";
	}
	
	return full + v.pop(); 
}

int main() {
	vector<string> v = {"dog", "cat", "house"};
	cout << stringGlues(v);
	
	
}