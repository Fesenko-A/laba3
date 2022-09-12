/* Copyright(C) 2022, Anton Fesenko
202-TH, №23, завдання 4

Створити клас Money для роботи із грошовими сумами. Число повинне бути
презентовано двома полями: типу long для гривень і типу unsigned char — для
копійок. Дробова частина (копійки) при виводі на екран повинна бути
відділена від цілої частини коми. Реалізувати додавання, віднімання, ділення
сум, ділення суми на дробове число, множення на дробове число й операції порівняння.
Реалізувати не менше 2-3 конструкторів.*/

#include "Money.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Money test1;
	test1.Read();
	test1.toString();
	test1.Display();

	Money test2(3, 46);
	/*test2.Read();*/
	test2.toString();
	test2.Display();

	double a = stod(test1.toString());
	double b = stod(test2.toString());

	cout << "\nСума: " << a + b << " грн." << endl;
	cout << "\nРізниця: " << a - b << " грн." << endl;

	if (b != 0)
		cout << "\nДілення: " << a / b << " грн." << endl;
	else cout << "\nНеможливе ділення на 0" << endl;

	cout << "\nМноження: " << a * b << " грн." << endl;

	if (a != b)
		cout << "\nПорівняння: " << a << " не дорівнює " << b << endl;
	else cout << "\nПорівняння: " << a << " дорівнює " << b << endl;

	return 0;
}