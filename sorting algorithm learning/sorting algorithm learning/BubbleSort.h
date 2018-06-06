#pragma once
#include"../sorting algorithm learning/Sort.h"
const int MAxn = 100;
class BubbleSort:
	public Sort
{
private:
	struct Rectangle {
		int TLeft;
		int Ttop;
		int Tright;
	}REctangle[MAxn],Temp,T[MAxn],RE;

public:
	void SwapTop(Rectangle &a,Rectangle &b);
	void Bubblesort();
	void ViewBubb();
	BubbleSort();
	~BubbleSort();
};

