#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
float a;
int e;
float scaning(float a)
{
	while (!(cin >> a) || cin.peek() != '\n')
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Пожалуйста, введите корректное значение. \n";
	}
	return a;
}
int scaning(int e)
{
	cin >> e;
	while (e < 1 || e > 7)
	{
		cout << "Вы выбрали неверный номер операции, попробуйте еще. \n ";
		cin.clear();
		while (cin.get() != '\n');
		cin >> e;
	}
	return e;
}
int main()
{
	setlocale(LC_ALL, "ru");
	char y = 'd';
	do
	{
		float b, m;
		cout << "Введите первое число" << endl;
		m = scaning(a);
		cout << "Отлично, а теперь введите второе число" << endl;
		b = scaning(a);
		cout << "Выберите операцию между числами" << endl <<
			"1. Сложение" << endl <<
			"2. Вычитание" << endl <<
			"3. Умножение" << endl <<
			"4. Деление" << endl <<
			"5. Возведение в квадрат" << endl <<
			"6. Извлечение корня" << endl <<
			"7. Логарифмирование" << endl;
		float c, d, f;
		e = scaning(e);
		switch (e)
		{
		case 1:
			c = m + b;
			break;
		case 2:
			c = m - b;
			break;
		case 3:
			c = m * b;
			break;
		case 4:
			if (b == 0)
			{
				cout << "Знаменатель не должен быть равен нулю!" << endl;
				continue;
			}
			else
			{
				c = m / b;
			}
			break;
		case 5:
			d = m * m;
			c = b * b;
			cout << "Хорошо, сначала будет выведен квадрат первого, затем квадрат второго числа" << endl;
			cout << "Результат вычисления:" << d << endl;
			break;
		case 6:
			if ((m < 0) || (b < 0))
			{
				cout << "Корень числа не может принимать отрицательные значения!" << endl;
				continue;
			}
			else
			{
				d = sqrt(m);
				c = sqrt(b);
				cout << "Хорошо, сначала будет выведен корень первого, затем корень второго числа" << endl;
				cout << "Результат вычисления:" << d << endl;
			}
			break;
		case 7:
			cout << "Введите основание для данных логарифмов" << endl;
			cin >> d;
			if ((m > 0) && (b > 0) && (d > 0) && (d != 1))
			{
				cout << " Хорошо, сначала будет выведен логарифм первого, а затем второго числа" << endl;
				f = log(m) / log(d);
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