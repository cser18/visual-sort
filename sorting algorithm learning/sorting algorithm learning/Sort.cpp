/*********************************
Author：涵小书
Time：2018.6.6
人生若只如初见。
*********************************/
#include "Sort.h"
#include<iostream>
#include"SystemUI.h"
using namespace std;


void Sort::Scanf(int N[])
{
	SystemUI sys;
	len = 1;
	Tlen = 1;
	int num = 1;
	cont = 7;
	while (num != 0) {
		sys.gotoxy(22, cont);
		cout << "请输入第" << len << "个数字：";
		cin >> N[len++];
		TEmp[Tlen++] = N[len - 1];
		sys.gotoxy(22, cont + 1);
		cout << "是否继续输入?(0:表示结束，其他数据表示继续)，请输入：";
		cin >> num;
		cont += 2;
		if (num == 0 && N[len - 1] == 0) {
			break;
		}
	}
	sys.gotoxy(22, cont);
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
}

void Sort::Printf(int N[])
{
	SystemUI sys;
	sys.gotoxy(22, cont + 3);
	cout << "初始数据为：" << endl;
	sys.gotoxy(22, cont + 4);
	for (int i = 1; i < len; i++) {
		cout << N[i] << "  ";
	}
	cout << endl;
	sys.gotoxy(22, cont + 5);
	cout << "下面开始排序：" << endl;
}

void Sort::BPrintf()
{
	SystemUI sys;
	sys.gotoxy(22, cont + 1);
	cout << "冒泡排序：时间复杂度为O(n^2),空间复杂度为1,稳定排序" << endl;
	sys.gotoxy(22, cont + 2);
	cout << "请观察冒泡排序可视化过程!" << endl;
	Printf(N);
}

void Sort::QPrintf()
{
	SystemUI sys;
	sys.gotoxy(22, cont + 1);
	cout << "快速排序：时间复杂度为O(nlogn^2),空间复杂度为nlogn^2,不稳定排序" << endl;
	sys.gotoxy(22, cont + 2);
	cout << "请观察快速排序可视化过程!" << endl;
	Printf(N);
}

Sort::Sort()
{
	N[NUM] = { 0};
	len = 0;
}


Sort::~Sort()
{
}
