#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c;
	char y;
	do
	{
		cout << "Добро пожаловать Введите 2 числа" << endl;
		cin >> a >> b;
		cout << "Выберите знак между числами" << endl <<
			"1. +" << endl <<
			"2. -" << endl <<
			"3. *" << endl <<
			"4. /" << endl;
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
			c = a / b;
			break;
		default:
			cout << "Вы выбрали несуществующий знак" << endl;
			break;

		}

		cout << "Результат вычисления:" << c << endl;

		cout << "Хотите продолжить? (d/n)" << endl;
		cin >> y;

	} while (y == 'd');

	return EXIT_SUCCESS;
}

