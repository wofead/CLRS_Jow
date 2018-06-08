#pragma once

class Sort
{
public:
	Sort();
	//≤Â»Î≈≈–Ús
	static void InsertSort(int *& arr,const int length);
	//—°‘Ò≈≈–Ú
	static void ChooseSort(int *& arr,const int length);
	//πÈ≤¢≈≈–Ú
	static void MergeSort(int *& arr, int p, int r);
	static void Merge(int *& arr, int p, int q, int r);
		
	~Sort();
};

