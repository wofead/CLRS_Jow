#include "GenerateArray.h"





GenerateArray::GenerateArray()
{

}
//attention ��ͷ�ļ��ж����˲�����Ĭ��ֵ�󣬾��幹�캯�����ʱ������Ҫ���¸�Ĭ��ֵ
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
