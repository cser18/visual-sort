#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
class SystemUI
{
private:
	int KeyBoardControl(int key);
	bool Status = TRUE;
	//����һ�����
	
	//���Win�ľ��
	void setWinHandle();
	
public:
	//���ô��ڵĴ�С
	void setWinSize(int width, int height);
	HANDLE std_win_handle;
	//�������Ļ�İ취
	void NewSurface();
	//��С��������(���ޱ��ӣ�����bug)
	void Welcome_pet();
	//����
	void UPStep();
	//����
	void DownStep();
	//��¼���̰��� �� ѡ��
	void Kbhit();
	//ѡ����
	int ChoiceSort();
	//��Ϸ������
	void PlaySurface();
	//��ʼ�˵�����
	void StartSystem();
	//���λ�ú���
	void gotoxy(int x, int y);
	//������ɫ����
	int color(int c);
	SystemUI();
	~SystemUI();
};

