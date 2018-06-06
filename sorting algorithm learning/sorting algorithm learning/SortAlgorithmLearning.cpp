/*********************************
Author：涵小书
Time：2018.6.6
人生若只如初见。
*********************************/
#include<iostream>
#include"SystemUI.h"
#include<graphics.h>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main() {
	SystemUI sys;
	system("mode con cols=110 lines=40");  //设置窗口大小
	sys.StartSystem();
	return 0;
}