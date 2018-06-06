/*********************************
Author����С��
Time��2018.6.6
������ֻ�������
*********************************/
#include "SystemUI.h"
#include"BubbleSort.h"
#include"QuickSort.h"
#include"InserSort.h"
#include<conio.h>
const int Maxn = 5;
char* num[Maxn] = {"   " ,"��","  ","  ","  " };
//�ֲ�ˢ�º���
void SystemUI::NewSurface() {
	gotoxy(23, 13);
	if (num[1] == "��")  color(4);
	cout << "[" << num[1] << "]" << "��������" << endl;
	color(7);
	gotoxy(23, 15);
	if (num[2] == "��")  color(4);
	cout << "[" << num[2] << "]" << "��������" << endl;
	color(7);
	gotoxy(23, 17);
	if (num[3] == "��")  color(4);
	cout << "[" << num[3] << "]" << "ð������" << endl;
	color(7);
	gotoxy(23, 19);
	if (num[4] == "��")  color(4);
	cout << "[" << num[4] << "]" << "�˳�" << endl;
	color(7);
}

int SystemUI::KeyBoardControl(int key)
{
	switch (key) {
	case 72: {
		UPStep();
		NewSurface();
		break;
	}
	case 80:
	{
		DownStep();
		NewSurface();
		break;
	}
	case 13: {
		//д�����㷨
		if (num[1] == "��") {
			system("cls");
			Status = false;
			//cout << "���ǲ���" << endl;
			InserSort Isort;
			Isort.Insrtsort();
		}
		if (num[2] == "��") {
			system("cls");
			Status = false;
			//cout << "���ǿ���" << endl;
			QuickSort Qsort;
			Qsort.Quicksort();
		}
		if (num[3] == "��") {
			system("cls");
			Status = false;
			//cout << "����ð��" << endl;
			BubbleSort Bsort;
			Bsort.Bubblesort();
		}
		if (num[4] == "��") {
			system("cls");
			exit(1);
		}
	}
	}
	return 0;
}
//��þ��
void SystemUI::setWinHandle()
{
	std_win_handle = 0;
	if (std_win_handle == 0) {
		std_win_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	}
}
//���ó���
void SystemUI::setWinSize(int width, int height)
{
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };
	COORD coord = { width,height };
	setWinHandle();
	SetConsoleScreenBufferSize(std_win_handle, coord);
	SetConsoleWindowInfo(std_win_handle, TRUE, &rect);
}
void SystemUI::Welcome_pet()
{
	color(3);
	gotoxy(69, 20);
	printf("\\");
	gotoxy(68, 19);
	printf("\\");
	gotoxy(67, 21);
	printf("����������");
	gotoxy(74, 20);
	printf("/");
	gotoxy(75, 19);
	printf("/");
	gotoxy(77, 22);
	printf("|");
	gotoxy(77, 23);
	printf("|");
	gotoxy(77, 24);
	printf("|");
    gotoxy(66, 22);
	printf("|");
	gotoxy(66, 23);
	printf("|");
	gotoxy(66, 24);
	printf("|");
	gotoxy(67, 25);
	printf("����������");
	gotoxy(69, 22);
	printf("@     @");
	gotoxy(70, 24);
	printf("  #");
	gotoxy(66, 18);
	color(3);
	printf("Hello Coder");
	color(7);

}
//����
void SystemUI::UPStep()
{
	char* temp[2] = { "\0" };
	temp[1] = num[1];
	for (int i = 1; i <= Maxn; i++) {
		num[i] = num[i + 1];
	}
	num[Maxn - 1] = temp[1];
}

void SystemUI::DownStep()
{
	char* temp[2] = { "\0" };
	temp[1] = num[Maxn - 1];
	for (int i = 1; i <= Maxn - 1; i++) {
		num[Maxn - i] = num[Maxn - i - 1];
	}
	num[1] = temp[1];
}

//��¼���̰���  ��  ѡ��
void SystemUI::Kbhit()
{
	while (Status) {
		while (_kbhit()) {
			if (!KeyBoardControl(_getch())) {
				continue;
			}			
		}
	}
}


int SystemUI::ChoiceSort()
{
 	system("cls");
	PlaySurface();
	gotoxy(20,8);
	cout << "����������������������������������������������������������������������" << endl;
	gotoxy(34, 5);
	color(4);
	cout << "  Welcome to sorting algorithm learning" << endl;
	color(7);
	gotoxy(23, 10);
	cout << "��ඣ���ѡ����Ҫѧϰ�������㷨!" << endl;
	NewSurface();
	Welcome_pet();
	Kbhit();
	return 0;
}
void SystemUI::PlaySurface()
{
	gotoxy(20, 3);
	cout << "����������������������������������������������������������������������" << endl;
	gotoxy(20, 4);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 5);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 6);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 7);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 8);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 9);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 10);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 11);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 12);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 13);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 14);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 15);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 16);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 17);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 18);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 19);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 20);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 21);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 22);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 23);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 24);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 25);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 26);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 27);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 28);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 29);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 30);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 31);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 32);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 33);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 34);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 35);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 36);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 37);
	cout << "��                                                                  ��" << endl;
	gotoxy(20, 38);
	cout << "����������������������������������������������������������������������" << endl;
}
/*
gotoxy(24, 10);
color(3);
cout << "  Welcome to sorting algorithm learning" << endl;
color(7);
*/

void SystemUI::StartSystem()
{
	int cont = 4;
	int i = 1;
	PlaySurface();
	while (1) {
		if (i != 3) {
			switch (i) {
			case 1: {
				gotoxy(34, 10);
				color(3);
				cout << "  Welcome to sorting algorithm learning" << endl;
				color(7);
				i++;
				Sleep(400);
				break;
			}
			case 2:
			{
				gotoxy(34, 18);
				color(3);
				cout << "      �����������ѧ�����������㷨��" << endl;
				gotoxy(34, 19);
				cout << "  ʹ���������Ҽ�����ѡ�񣬰�Enterȷ����" << endl;
				color(7);
				i++;
				Sleep(1000);
			}
			case 3:
			{
				gotoxy(34, 23);
				color(3);
				cout << "  ϣ�������ͨ�������ߣ����õ��������!" << endl;
				gotoxy(60, 30);
				color(4);
				cout << "  ���ͣ�Coder��" << endl;
				color(7);
				i++;
				Sleep(4000);
				ChoiceSort();
			}
			}
		}
	}

}

void SystemUI::gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int SystemUI::color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}



SystemUI::SystemUI()
{
}


SystemUI::~SystemUI()
{
}
