#pragma once
#include <string>
using namespace std;

class Money {
	long hrn;	//	�����
	unsigned short kop;	//	������

public:
	Money();
	Money Read();	//	�������� � ���������
	Money(long h, unsigned short k);
	void Display();
	string toString();	//	������������ �� �����
};
