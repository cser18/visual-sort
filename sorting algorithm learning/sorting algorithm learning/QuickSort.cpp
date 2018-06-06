/*********************************
Author：涵小书
Time：2018.6.6
人生若只如初见。
*********************************/
#include "QuickSort.h"
#include"SystemUI.h"
#include<graphics.h>
int R = 0;
const int Qbottom = 100;
bool status = true;
void QuickSort::SwapTop(Rectangle & a, Rectangle & b)
{
	Temp.Ttop = a.Ttop;
	a.Ttop = b.Ttop;
	b.Ttop = Temp.Ttop;
}

void QuickSort::Quicksort()
{
	int selection;
	do{
	SystemUI sys;
	sys.PlaySurface();
	sys.gotoxy(20, 6);
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	sys.gotoxy(48, 5);
	sys.color(5);
	cout << "QuickSort" << endl;
	sys.gotoxy(22, 7);
	sys.color(7);
	/*******************测试部分***********************/
	/*N[1] = 11;
	N[2] = 22;
	N[3] = 33;
	N[4] = 44;
	N[5] = 55;
 	len = 6;*/
    /*******************测试部分***********************/
	Scanf(N);
	QPrintf();
	cont += 6;
	initgraph(500, 500, SHOWCONSOLE);
	setorigin(0, 500);
	setaspectratio(1, -1);
	int left = 100;
	int right = left + 20;
	for (int i = 1; i < len; i++) {
		//用结构体存储各个矩形的所有坐标
		REctangle[i].TLeft = left;
		REctangle[i].Ttop = Qbottom + N[i] * 5;
		REctangle[i].Tright = right;
		T[i] = REctangle[i];
		fillrectangle(left, Qbottom + N[i] * 5, right, Qbottom);
		left = right + 3;
		right = left + 20;
	}
	ViewQsort(N, 1, len - 1);
	Qsort(TEmp, 1, len - 1);
	sys.gotoxy(22, cont + R + 1);
	cout << "排序完成！请选择（1：继续排序，2：回到主菜单）:";
	cin >> selection;
	if (selection == 2) {
		system("cls");
		closegraph();
		sys.PlaySurface();
		sys.ChoiceSort();
	}
	if (selection != 1) {
		closegraph();
	}
 } while (selection == 1);
}
/*****************************QuickSort可视化部分********************************************/
void QuickSort::ViewQsort(int N[], int left, int right)
{
	int low = left;
	int high = right;
	if (left > right) {
		return;
	}
	else {
		//setfillcolor(LIGHTCYAN);
		setorigin(0, 0);
		setaspectratio(1, 1);
		//TCHAR s[] = _T("Hello World");
		settextcolor(RED);
		TCHAR s[20] = _T("快速排序可视化");
		//outtextxy(10, 20, s);
		outtextxy(150, 50, s);
		setorigin(0, 500);
		setaspectratio(1, -1);
		int key = N[left];
		/******************************为了好看*******************************************/
		if (status) {
			setfillcolor(RED);
			fillrectangle(REctangle[right].TLeft, REctangle[right].Ttop, REctangle[right].Tright, Qbottom);
			setfillcolor(LIGHTGREEN);
			fillrectangle(REctangle[left].TLeft, REctangle[left].Ttop, REctangle[left].Tright, Qbottom);
			status = false;
		}
		Sleep(500);
		if (right <= left) {
			cleardevice();
			setorigin(0, 0);
			setaspectratio(1, 1);
			//TCHAR s[] = _T("Hello World");
			settextcolor(RED);
			TCHAR s[20] = _T("快速排序可视化");
			//outtextxy(10, 20, s);
			outtextxy(150, 50, s);
			setorigin(0, 500);
			setaspectratio(1, -1);
			for (int q = 1; q < len; q++) {
				setfillcolor(WHITE);
				fillrectangle(REctangle[q].TLeft, REctangle[q].Ttop, REctangle[q].Tright, Qbottom);
			}
		}
		/*******************************QuickSort可视化部分***********************************/
		while (left < right) {
			while (N[right] < key && left < right) {
				setfillcolor(RED);
				fillrectangle(REctangle[right].TLeft, REctangle[right].Ttop, REctangle[right].Tright, Qbottom);
				setfillcolor(LIGHTGREEN);
				fillrectangle(REctangle[left].TLeft, REctangle[left].Ttop, REctangle[left].Tright, Qbottom);
				right--;
				setfillcolor(WHITE);
				fillrectangle(REctangle[right + 1].TLeft, REctangle[right + 1].Ttop, REctangle[right + 1].Tright, Qbottom);
			}
			if (left < right) {
				int temp = N[left];
				N[left] = N[right];
				N[right] = temp;
				SwapTop(REctangle[right], REctangle[left]);
				cleardevice();
				setorigin(0, 500);
				setaspectratio(1, -1);
				for (int q = 1; q < len; q++) {
					setfillcolor(WHITE);
					fillrectangle(REctangle[q].TLeft, REctangle[q].Ttop, REctangle[q].Tright, Qbottom);
				}
				Sleep(1000);
			}
			while (N[left] > key && left < right) {
				setfillcolor(LIGHTGREEN);
				fillrectangle(REctangle[left].TLeft, REctangle[left].Ttop, REctangle[left].Tright, Qbottom);
				setfillcolor(RED);
				fillrectangle(REctangle[right].TLeft, REctangle[right].Ttop, REctangle[right].Tright, Qbottom);
				Sleep(700);
				left++;
				setfillcolor(WHITE);
				fillrectangle(REctangle[left - 1].TLeft, REctangle[left - 1].Ttop, REctangle[left - 1].Tright, Qbottom);
				Sleep(700);
			}			
			if (left < right) {
				int temp = N[left];
				N[left] = N[right];
				N[right] = temp;
				SwapTop(REctangle[right], REctangle[left]);
				Sleep(500);
				cleardevice();
				setorigin(0, 500);
				setaspectratio(1, -1);
				for (int q = 1; q < len; q++) {
					setfillcolor(WHITE);
					fillrectangle(REctangle[q].TLeft, REctangle[q].Ttop, REctangle[q].Tright, Qbottom);
				}
				Sleep(1000);
			}
		}
		ViewQsort(N, low, right - 1);
		Sleep(1000);
		ViewQsort(N, left + 1, high);
	}
}
/*******************************************************************************/

void QuickSort::Qsort(int Temp[], int left, int right)
{
	SystemUI sys;
	int low = left;
	int high = right;
	if (left > right) {
		return;
	}
	else {
		int key = TEmp[left];
		while (left < right) {
			while (TEmp[right] <= key && left < right)
				right--;
			if (left < right) {
				int temp = TEmp[left];
				TEmp[left] = TEmp[right];
				TEmp[right] = temp;
			}
			while (TEmp[left] >= key && left < right)
				left++;
			if (left < right) {
				int temp = TEmp[left];
				TEmp[left] = TEmp[right];
				TEmp[right] = temp;
			}
		}
		sys.gotoxy(22, cont + R);
		cout << "第" << R + 1 << "躺:";
		for (int q = 1; q < len; q++) {
			cout << TEmp[q] << " ";
		}
		cout << endl;
		R += 1;
		Qsort(TEmp, low, right - 1);
		Qsort(TEmp, left + 1, high);
	}
}


QuickSort::QuickSort()
{
}


QuickSort::~QuickSort()
{
}
