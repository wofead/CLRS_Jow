#include "GenerateArray.h"





GenerateArray::GenerateArray()
{

}
//attention 在头文件中定义了参数的默认值后，具体构造函数体的时候不再需要重新给默认值
void GenerateArray::GenerateArrayRand(int *& arr, const int num, const int range)
{
	arr = new int[num];
	srand((unsigned int)(time(NULL)));
	for (int i = 0; i < num; i++) {
		arr[i] = rand() % range;
	}
	return;
}





GenerateArray::~GenerateArray()
{
}
