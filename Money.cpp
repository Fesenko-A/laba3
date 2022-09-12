#include "Money.h"
#include <iostream>
#include <string>
using namespace std;

Money::Money(long h, unsigned short k)	//	�������� ������� (������)
{
	hrn = h;
	kop = k;
	cout << "\n���: " << h << endl;
	cout << "���: " << k << endl;
	if (k >= 100) {
		while (k >= 100) {
			k -= 100;
			h++;
		}
	}
}

Money::Money()	//	����������� �� ����������
{
	hrn = 0;
	kop = 0;
}

Money Money::Read()
{
	cout << "\n���: ";
	cin >> this->hrn;
	cout << "���: ";
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
	string res(to_string(hrn) + "." + to_string(kop));	//	�'������ ����� � ��������
	return res;
}

void Money::Display()
{
	cout << "\n�������: " << toString() << " ���." << endl;
}