/*********************************
Author����С��
Time��2018.6.6
������ֻ�������
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
		cout << "�������" << len << "�����֣�";
		cin >> N[len++];
		TEmp[Tlen++] = N[len - 1];
		sys.gotoxy(22, cont + 1);
		cout << "�Ƿ��������?(0:��ʾ�������������ݱ�ʾ����)�������룺";
		cin >> num;
		cont += 2;
		if (num == 0 && N[len - 1] == 0) {
			break;
		}
	}
	sys.gotoxy(22, cont);
	cout << "��������������������������������������������������������������������" << endl;
}

void Sort::Printf(int N[])
{
	SystemUI sys;
	sys.gotoxy(22, cont + 3);
	cout << "��ʼ����Ϊ��" << endl;
	sys.gotoxy(22, cont + 4);
	for (int i = 1; i < len; i++) {
		cout << N[i] << "  ";
	}
	cout << endl;
	sys.gotoxy(22, cont + 5);
	cout << "���濪ʼ����" << endl;
}

void Sort::BPrintf()
{
	SystemUI sys;
	sys.gotoxy(22, cont + 1);
	cout << "ð������ʱ�临�Ӷ�ΪO(n^2),�ռ临�Ӷ�Ϊ1,�ȶ�����" << endl;
	sys.gotoxy(22, cont + 2);
	cout << "��۲�ð��������ӻ�����!" << endl;
	Printf(N);
}

void Sort::QPrintf()
{
	SystemUI sys;
	sys.gotoxy(22, cont + 1);
	cout << "��������ʱ�临�Ӷ�ΪO(nlogn^2),�ռ临�Ӷ�Ϊnlogn^2,���ȶ�����" << endl;
	sys.gotoxy(22, cont + 2);
	cout << "��۲����������ӻ�����!" << endl;
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
