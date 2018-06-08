#pragma once
#include<ctime>
#include<cstdlib> 
class GenerateArray
{
public:
	GenerateArray();
	static void GenerateArrayRand(int* &arr,const int num,const int range = 100);
	~GenerateArray();
};

