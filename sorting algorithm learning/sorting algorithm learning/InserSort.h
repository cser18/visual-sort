#pragma once
#include "Sort.h"
const int MAXN = 100;
class InserSort :
	public Sort
{
private:
	struct Rectangle {
		int TLeft;
		int Ttop;
		int Tright;
	}REctangle[MAXN], Temp, T[MAXN], RE;
public:
	void SwapTop(Rectangle &a, Rectangle &b);
	void Insrtsort();
	void ViewInsort();
	InserSort();
	~InserSort();
};

