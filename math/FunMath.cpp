#include "FunMath.h"

//Kyle Schultz, Mitch Massey, Tyler Albee, Liz Parker

std::vector<int> VectorPlusN(std::vector<int> v, int n)
{
	std::vector<int> v_plus_n;
	for(int i = 0; i < v.size(); i++)
	{
		v_plus_n = v[i] + n;
	}
	return v_plus_n;
}
