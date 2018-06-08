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
	//生成随机的数组
	//生成随机数的个数
	int num = 10;
	//生成随机数的范围
	int range;
	range = 2;
	GenerateArray generateArr;
	generateArr.GenerateArrayRand(arr1, num, range);
	generateArr.GenerateArrayRand(arr2, num, range);
	//书上的练习题类
	Practice pratice;
	arrSum = new int[num + 1];
	pratice.BinaryPlus(arr1, arr2, arrSum, num);
	//排序
	Sort sort;
	//插入排序
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