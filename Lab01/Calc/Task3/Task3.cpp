#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char y;
	do
	{
		float a, b;
		cout << "Добро пожаловать Введите 2 числа" << endl;
		cin >> a >> b;
		cout << "Выберите операцию между числами" << endl <<
			"1. Сложение" << endl <<
			"2. Вычитание" << endl <<
			"3. Умножение" << endl <<
			"4. Деление" << endl <<
			"5. Возведение в квадрат" << endl <<
			"6. Извлечение корня" << endl <<
			"7. Логарифмирование" << endl;
		float c, d, f;
		int e;
		cin >> e;
		switch (e)
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
				continue;
			}
			else
			{
				c = a / b;
			}
			break;
		case 5:
			d = a * a;
			c = b * b;
			cout << "Хорошо, сначала будет выведен квадрат первого, затем квадрат второго числа" << endl;
			cout << "Результат вычисления:" << d << endl;
			break;
		case 6:
			if ((a < 0) || (b < 0))
			{
				cout << "Корень числа не может принимать отрицательные значения!" << endl;
				continue;
			}
			else
			{
				d = sqrt(a);
				c = sqrt(b);
				cout << "Хорошо, сначала будет выведен корень первого, затем корень второго числа" << endl;
				cout << "Результат вычисления:" << d << endl;
			}
			break;
		case 7:
			cout << "Введите основание для данных логарифмов" << endl;
			cin >> d;
			if ((a > 0) && (b > 0) && (d > 0) && (d != 1))
			{
				cout << " Хорошо, сначала будет выведен логарифм первого, а затем второго числа" << endl;
				f = log(a) / log(d);
				c = log(b) / log(d);
				cout << " Результат вычисления:" << f << endl;
			}
			else
			{
				cout << "Заданные значения не соотвествуют условиям ОДЗ!" << endl;
				continue;
			}
			break;
		}
		cout << "Результат вычисления:" << c << endl;
		cout << "Хотите продолжить? (d/n)" << endl;
		cin >> y;
	} while (y == 'd');
	return EXIT_SUCCESS;
}