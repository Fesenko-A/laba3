#pragma once
#include <string>
using namespace std;

class Money {
	long hrn;	//	Гривні
	unsigned short kop;	//	Копійки
	double num;	//	Число, на яке множимо, додаємо до суми та ін.

public:
	Money();
	Money(long h, unsigned short k, double n);
	void Display();
	string toString();	//	Перетворення на рядок
};
