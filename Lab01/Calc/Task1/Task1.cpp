#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char y;
	do
	{
		int a, b;
		start:
		cout << "Добро пожаловать, введите 2 числа" << endl;
		cin >> a >> b;
		cout << "Выберите знак между числами" << endl <<
			"1. +" << endl <<
			"2. -" << endl <<
			"3. *" << endl <<
			"4. /" << endl;
		int c;
		cin >> c;
		switch (c)
		{
		case 1:
			c = a + b;
			break;
		case 2:
			c = a - b;
			break;
		case 3:
			c = a * b;
			break;
		case 4:
			if (b == 0)
			{
				cout << "Знаменатель не должен быть равен нулю!" << endl;
				goto start;
			}
			else
			{
				c = a / b;
			}
			break;
		}
		cout << "Результат вычисления:" << c << endl;
		cout << "Хотите продолжить? (d/n)" << endl;
		cin >> y;
	} while (y == 'd');
	return EXIT_SUCCESS;
}