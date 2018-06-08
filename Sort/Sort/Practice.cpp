#include "Practice.h"



Practice::Practice()
{
}


void Practice::BinaryPlus(int* & array1,int* & array2, int *& arraySum,const int length)
{
	int flag = 0;
	for (int i = 0; i < length; i++) {
		arraySum[i] = (array1[i] ^ array2[i] ^ flag);
		flag = (array1[i] & array2[i]);
	}
	arraySum[length] = flag;
}

Practice::~Practice()
{
}
