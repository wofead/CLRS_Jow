#pragma once

class Sort
{
public:
	Sort();
	//��������s
	static void InsertSort(int *& arr,const int length);
	//ѡ������
	static void ChooseSort(int *& arr,const int length);
	//�鲢����
	static void MergeSort(int *& arr, int p, int r);
	static void Merge(int *& arr, int p, int q, int r);
		
	~Sort();
};

