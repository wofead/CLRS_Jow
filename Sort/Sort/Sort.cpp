#include "Sort.h"
#include<iostream>
using namespace std;




Sort::Sort()
{
}

void Sort::InsertSort(int *& arr, const int length)
{
	int key;
	int i, j;
	for (i = 1; i < length; i++) {
		key = arr[i];
		for (j = i; j > 0; j--)
		{
			if (key < arr[j - 1]) {
				arr[j] = arr[j - 1];
			}
			//这里不使用key，如果使用arr[i],在break的时候i的值会发生改变，因为被覆盖了
			else { break; }
		}
		arr[j] = key;
	}
}

void Sort::ChooseSort(int *& arr, const int length)
{
	int i, j, min, temp;
	for (i = 0; i < length; i++)
	{
		min = i;
		//注意边界的判断，判断的是j+1，所以j<9
		for (j = i; j < length - 1; j++) {
			if (arr[min] > arr[j + 1]) min = j + 1;
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void Sort::MergeSort(int *& arr, int  p, int  r)
{
	int q = (p + r) / 2;
	if (p < r) {
		MergeSort(arr, p, q);
		MergeSort(arr, q+1, r);
		Merge(arr, p, q, r);
	}
}

void Sort::Merge(int *& arr, int  p, int  q, int  r)
{
	int i = 0, j = 0, l = 0;
	int n1 = q - p + 1;
	int n2 = r - q;
	int *arr1 = new int[n1 + 1];
	for (int m = 0; m < n1; m++)
	{
		arr1[m] = arr[p + m];
	}
	int *arr2 = new int[n2 + 1];
	for (int k = 0; k < n1; k++)
	{
		arr2[k] = arr[q + 1+ k];
	}
	arr1[n1] = 100;
	arr2[n2] = 100;
	for (l = p; l <= r; l++)
	{
		if (arr1[i] <= arr2[j]) {
			arr[l] = arr1[i];
			i++;
		}
		else {
			arr[l] = arr2[j];
			j++;
		}
	}
	for (l = 0; l < 10; l++) {
		cout<<" "<<arr[l];
	}
	cout << endl;


}


Sort::~Sort()
{
}
