/*********************************
Author����С��
Time��2018.6.6
������ֻ�������
*********************************/
#include "BubbleSort.h"
#include"SystemUI.h"
#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<thread>
using namespace std;
const int bottom = 100;

/*
void fillrectangle(
    int left,
    int top,
    int right,
    int bottom
);
*/

//  ���ݽ���   
void BubbleSort::SwapTop(Rectangle &a, Rectangle &b)
{
	Temp.Ttop = a.Ttop;
	a.Ttop = b.Ttop;
	b.Ttop = Temp.Ttop;
}




void BubbleSort::Bubblesort()
{
	int selection;
	int i;
	do {
		SystemUI sys;
		sys.PlaySurface();
		sys.gotoxy(20, 6);
		cout << "����������������������������������������������������������������������" << endl;
		sys.gotoxy(48, 5);
		sys.color(5);
		cout << "BubbleSort" << endl;
		sys.gotoxy(22, 7);
		sys.color(7);
		Scanf(N);
		BPrintf();
		cont += 6;
		initgraph(500, 500, SHOWCONSOLE);
		setorigin(0, 500);
		setaspectratio(1, -1);
		int left = 100;
		int right = left + 20;
		for (int i = 1; i < len; i++) {
			//�ýṹ��洢�������ε���������
			REctangle[i].TLeft = left;
			REctangle[i].Ttop = bottom + N[i] * 5;
			REctangle[i].Tright = right;
			T[i] = REctangle[i];
			fillrectangle(left, bottom + N[i] * 5, right, bottom);
			left = right + 3;
			right = left + 20;
		}
		ViewBubb();
		for (i = 0; i < len - 1 - 1; i++) {
			for (int j = 1; j < len - i - 1; j++) {
				if (TEmp[j] > TEmp[j + 1]) {
					int temp = TEmp[j];
					TEmp[j] = TEmp[j + 1];
					TEmp[j + 1] = temp;
				}
			}
			sys.gotoxy(22, cont + i);
			cout << "��" << i + 1 << "��:";
			for (int q = 1; q < len; q++) {
				cout << TEmp[q] << " ";
			}
			cout << endl;
		}
		cont += i;
		sys.gotoxy(22, cont);
		cout << "����N��Ԫ�أ�ð������ıȽϴ���Ϊ:(n-1)+(n-2)+...+2+1 = n(n-1)/2" << endl;
		sys.gotoxy(22, cont + 2);
		cout << "������ɣ���ѡ��1����������2���ص����˵���:";
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
	} while ( selection == 1);
}

void BubbleSort::ViewBubb()
{
	/****************************ð��������ӻ�*********************************************/
	for (int i = 0; i < len - 1 - 1; i++) {
		for (int j = 1; j < len - i - 1; j++) {
			setfillcolor(LIGHTCYAN);
			setorigin(0, 0);
			setaspectratio(1, 1);
			//TCHAR s[] = _T("Hello World");
			settextcolor(RED);
			TCHAR s[20] = _T("ð��������ӻ�") ;
			//outtextxy(10, 20, s);
			outtextxy(150, 50, s);
			setorigin(0, 500);
			setaspectratio(1, -1);
			fillrectangle(T[j].TLeft, REctangle[j].Ttop, T[j].Tright, bottom);
			fillrectangle(T[j + 1].TLeft, REctangle[j + 1].Ttop, T[j + 1].Tright, bottom);
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
					fillrectangle(REctangle[q].TLeft, REctangle[q].Ttop, REctangle[q].Tright, bottom);
				}
			}
			setfillcolor(WHITE);
			fillrectangle(T[j].TLeft, REctangle[j].Ttop, T[j].Tright, bottom);
			fillrectangle(T[j + 1].TLeft, REctangle[j + 1].Ttop, T[j + 1].Tright, bottom);
		}                                               
	}
	/****************************ð��������ӻ�*********************************************/
}

BubbleSort::BubbleSort()
{
}

BubbleSort::~BubbleSort()
{
}



