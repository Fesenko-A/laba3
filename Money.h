#pragma once
#include <string>
using namespace std;

class Money {
	long hrn;	//	�����
	unsigned short kop;	//	������
	double num;	//	�����, �� ��� �������, ������ �� ���� �� ��.

public:
	Money();
	Money(long h, unsigned short k, double n);
	void Display();
	string toString();	//	������������ �� �����
};
