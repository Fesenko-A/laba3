#include "Money.h"
#include <iostream>
#include <string>
using namespace std;

Money::Money(long h, unsigned short k)	//	Введення значень (вручну)
{
	hrn = h;
	kop = k;
	cout << "\nГрн: " << h << endl;
	cout << "Коп: " << k << endl;
	if (k >= 100) {
		while (k >= 100) {
			k -= 100;
			h++;
		}
	}
}

Money::Money()	//	Конструктор по замовченню
{
	hrn = 0;
	kop = 0;
}

Money Money::Read()
{
	cout << "\nГрн: ";
	cin >> this->hrn;
	cout << "Коп: ";
	cin >> this->kop;
	if (this->kop >= 100) {
		while (this->kop >= 100) {
			this->kop -= 100;
			this->hrn++;
		}
	}
	else return *this;
}

string Money::toString()
{
	string res(to_string(hrn) + "." + to_string(kop));	//	З'єднуємо гривні з копійками
	return res;
}

void Money::Display()
{
	cout << "\nВведено: " << toString() << " грн." << endl;
}