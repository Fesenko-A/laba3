#include "Money.h"
#include <iostream>
#include <string>
using namespace std;

Money::Money(long h, unsigned short k, double n) //	�����������
{
	hrn = h;
	kop = k;
	num = n;
}

Money::Money()	//	���������� (������ ������ Read)
{
	cout << "���: ";
	cin >> hrn;
	cout << "���: ";
	cin >> kop;
	cout << "�����: ";
	cin >> num;
	if (kop >= 100)
		cout << "������� - ������ �� ���� ���� ����� 99" << endl;
}

string Money::toString()
{
	string res(to_string(hrn) + "." + to_string(kop));	//	�'������ ����� � ��������
	return res;
}

void Money::Display()
{
	cout << "\n�������: " << toString() << " ���." << endl;
	double s = stod(toString());	//	������������ ����� � �������� ��� double
	double sum = s + num;
	double minus = s - num;
	double mn = s * num;
	bool equal = s == num;	//	�������� ���������
	cout << endl;
	if (num != 0) {	//	�������� ������ �� 0
		double dil = s / num;
		cout << "ĳ�����: " << dil << endl;
	}
	else cout << "ĳ����� �� 0 ���������!" << endl;

	cout << "����: " << sum << endl;
	cout << "г�����: " << minus << endl;
	cout << "��������: " << mn << endl;
	cout << "���������: ";
	if (equal == 1) cout << s << " == " << num << endl;	//	��������� ���� �����
	else cout << s << " != " << num << endl;
}