#include<iostream>
#include"GenerateArray.h"
#include "Practice.h"
#include "Sort.h"
using namespace std;
int main() {
	int *arr;
	int *arr1;
	int *arr2;
	int *arrSum;
	//�������������
	//����������ĸ���
	int num = 10;
	//����������ķ�Χ
	int range;
	range = 2;
	GenerateArray generateArr;
	generateArr.GenerateArrayRand(arr1, num, range);
	generateArr.GenerateArrayRand(arr2, num, range);
	//���ϵ���ϰ����
	Practice pratice;
	arrSum = new int[num + 1];
	pratice.BinaryPlus(arr1, arr2, arrSum, num);
	//����
	Sort sort;
	//��������
	range = 100;
	generateArr.GenerateArrayRand(arr, num, range);
	for (size_t i = 0; i < num; i++)
	{
		cout << " " << arr[i];
	}
	cout << endl;
	//sort.InsertSort(arr, num);
	//sort.ChooseSort(arr, num);
	sort.MergeSort(arr, 0, num - 1);
	for (size_t i = 0; i < num; i++)
	{
		cout << " " << arr[i];
	}
	cout << endl;
	getchar();
	return 0;
}