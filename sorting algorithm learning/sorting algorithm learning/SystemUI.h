#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;
class SystemUI
{
private:
	int KeyBoardControl(int key);
	bool Status = TRUE;
	//定义一个句柄
	
	//获得Win的句柄
	void setWinHandle();
	
public:
	//设置窗口的大小
	void setWinSize(int width, int height);
	HANDLE std_win_handle;
	//解决抖屏幕的办法
	void NewSurface();
	//书小涵的神兽(神兽保佑，永无bug)
	void Welcome_pet();
	//向上
	void UPStep();
	//向下
	void DownStep();
	//记录键盘按键 和 选项
	void Kbhit();
	//选择函数
	int ChoiceSort();
	//游戏界面框架
	void PlaySurface();
	//开始菜单函数
	void StartSystem();
	//光标位置函数
	void gotoxy(int x, int y);
	//文字颜色函数
	int color(int c);
	SystemUI();
	~SystemUI();
};

