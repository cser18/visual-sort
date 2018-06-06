/*********************************
Author：涵小书
Time：2018.6.6
人生若只如初见。
*********************************/
#include "InserSort.h"
#include"SystemUI.h"
#include<graphics.h>
const int Ibottom = 100;


void InserSort::SwapTop(Rectangle & a, Rectangle & b)
{
	Temp.Ttop = a.Ttop;
	a.Ttop = b.Ttop;
	b.Ttop = Temp.Ttop;
}

void InserSort::Insrtsort()
{
	int selection;
	do{
	int i;
	int j;
	int E = 0;
	SystemUI sys;
	sys.PlaySurface();
	sys.gotoxy(20, 6);
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	sys.gotoxy(48, 5);
	sys.color(5);
	cout << "InsertSort" << endl;
	sys.gotoxy(22, 7);
	sys.color(7);
	Scanf(N);
	/*******************测试部分***********************/
	/*N[1] = 11;
	N[2] = 33;
	N[3] = 44;
	N[4] = 22;
	N[5] = 55;
	len = 6;*/
	/*******************测试部分***********************/
	BPrintf();
	cont += 6;
	initgraph(500, 500, SHOWCONSOLE);
	setorigin(0, 500);
	setaspectratio(1, -1);
	int left = 100;
	int right = left + 20;
	for (int i = 1; i < len; i++) {
		//用结构体存储各个矩形的所有坐标
		REctangle[i].TLeft = left;
		REctangle[i].Ttop = Ibottom + N[i] * 5;
		REctangle[i].Tright = right;
		T[i] = REctangle[i];
		fillrectangle(left, Ibottom + N[i] * 5, right, Ibottom);
		left = right + 3;
		right = left + 20;
	}
	ViewInsort();
	for (i = 2; i < len; i++) {
		for (j = i - 1; j >= 1; j--) {
			if (TEmp[j] > TEmp[j + 1]) {
				int temp = TEmp[j];
				TEmp[j] = TEmp[j + 1];
				TEmp[j + 1] = temp;
			}
		}
		sys.gotoxy(22, cont + E);
		cout << "第" << E + 1 << "躺:";
		for (int q = 1; q < len; q++) {
			cout << TEmp[q] << " ";
		}
		E++;
		cout << endl;
	}
	cont += i;
	sys.gotoxy(22, cont);
	cout << "若有N个元素，插入排序的比较次数为:1 + 2 + 3+...+n = n(n-1)/2" << endl;
	sys.gotoxy(22, cont + 2);
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
/********************插入排序可视化过程******************************/
void InserSort::ViewInsort()
{
	for (int i = 2; i < len; i++) {
		for (int j = i - 1; j >= 1; j--) {
			setfillcolor(LIGHTCYAN);
			setorigin(0, 0);
			setaspectratio(1, 1);
			//TCHAR s[] = _T("Hello World");
			settextcolor(RED);
			TCHAR s[20] = _T("插入排序可视化");
			//outtextxy(10, 20, s);
			outtextxy(150, 50, s);
			setorigin(0, 500);
			setaspectratio(1, -1);
			fillrectangle(T[j].TLeft, REctangle[j].Ttop, T[j].Tright, Ibottom);
			fillrectangle(T[j + 1].TLeft, REctangle[j + 1].Ttop, T[j + 1].Tright, Ibottom);
			//_getch();
			Sleep(1000);
			if (N[j] > N[j + 1]) {
				int temp = N[j];
				N[j] = N[j + 1];
				N[j + 1] = temp;
				SwapTop(REctangle[j], REctangle[j + 1]);
				cleardevice();
				setorigin(0, 500);
				setaspectratio(1, -1);
				for (int q = 1; q < len; q++) {
					setfillcolor(WHITE);
					fillrectangle(REctangle[q].TLeft, REctangle[q].Ttop, REctangle[q].Tright, Ibottom);
				}
			}
			setfillcolor(WHITE);
			fillrectangle(T[j].TLeft, REctangle[j].Ttop, T[j].Tright, Ibottom);
			fillrectangle(T[j + 1].TLeft, REctangle[j + 1].Ttop, T[j + 1].Tright, Ibottom);
		}
	}
}
/********************************************************************/

InserSort::InserSort()
{
}


InserSort::~InserSort()
{
}
