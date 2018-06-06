#pragma once
#include "Sort.h"
const int MAXn = 100;
class QuickSort :
	public Sort
{
private:
	struct Rectangle {
		int TLeft;
		int Ttop;
		int Tright;
	}REctangle[MAXn], Temp, T[MAXn], RE;
public:
	void SwapTop(Rectangle &a, Rectangle &b);
	void Quicksort();
	void ViewQsort(int N[],int left,int right);
	void Qsort(int Temp[], int left, int right);
	QuickSort();
	~QuickSort();
};

