#pragma once
const int NUM = 1000;
class Sort
{
private:
	//��¼Y����

public:
	int cont;
	int N[NUM];
	int TEmp[NUM];
	int Tlen;
	int len;
	//����
	void sort();
	void Scanf(int N[]);
	void Printf(int N[]);
	void BPrintf();
	void QPrintf();
	Sort();
	~Sort();
};

