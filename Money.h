#pragma once
#include <string>
using namespace std;

class Money {
	long hrn;	//	Гривні
	unsigned short kop;	//	Копійки

public:
	Money();
	Money Read();	//	Введення з клавіатури
	Money(long h, unsigned short k);
	void Display();
	string toString();	//	Перетворення на рядок
};
