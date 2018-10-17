#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int d;
	float a, b, c;
	char y;
	do
	{
		cout << "Выберите математическую операцию" << endl <<
			"1. +" << endl <<
			"2. -" << endl <<
			"3. *" << endl <<
			"4. /" << endl <<
			"5. Возведение в квадрат" << endl <<
			"6. Извлечение корня" << endl <<
			"7. Логарифмирование" << endl;
		cin >> d;
		switch (d)
		{
		case 1:
			cout << "Введите 2 числа, которые хотите сложить" << endl;
			cin >> a >> b;
			c = a + b;
			break;
		case 2:
			cout << "Введите 2 числа, которые хотите вычесть" << endl;
			cin >> a >> b;
			c = a - b;
			break;
		case 3:
			cout << "Введите 2 числа, которые хотите умножить" << endl;
			cin >> a >> b;
			c = a * b;
			break;
		case 4:
			cout << "Введите 2 числа, которые хотите поделить" << endl;
			cin >> a >> b;
			c = a / b;
			break;
		case 5:
			cout << "Введите число, которое хотите возвести в квадрат" << endl;
			cin >> a;
			c = a * a;
			break;
		case 6:
			cout << "Введите число, из которого хотите извлечь корень" << endl;
			cin >> a;
			c = sqrt(a);
			break;
		case 7:
			cout << "Введите логарифм, а после его основание" << endl;
			cin >> b >> a;
			c = log(b) / log(a);
			break;
		default:
			cout << "Вы выбрали несуществующий знак" << endl;
			goto skip;
			break;
		}
		cout << "Результат вычисления:" << c << endl;
		skip:
		cout << "Хотите продолжить? (d/n)" << endl;
		cin >> y;
	} while (y == 'd');
	return EXIT_SUCCESS;
}
