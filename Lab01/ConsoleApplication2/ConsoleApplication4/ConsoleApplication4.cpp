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

	} while (true);
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Пожалуйста, введите корректное значение. \n";
	}
	return a;
}
float scaning2(float e)
{
	while ((!(cin >> e) || cin.peek() != '\n') && (e > 0) && (e < 8));
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Пожалуйста, введите корректное значение. \n";
		cin >> e;
	}
	return e;
}
int main()
{
	setlocale(LC_ALL, "ru");
	char y;
	float b, m;
	do
	{
		cout << "Добро пожаловать, введите первое число" << endl;
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
		float a, c, d, f;
		e = scaning2(e);
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
			c = m / b;
			break;
		case 5:
			d = m * m;
			c = b * b;
			cout << "Хорошо, сначала будет выведен квадрат первого, затем квадрат второго числа" << endl;
			cout << "Результат вычисления:" << d << endl;
			break;
		case 6:
			d = sqrt(m);
			c = sqrt(b);
			cout << "Хорошо, сначала будет выведен корень первого, затем корень второго числа" << endl;
			cout << "Результат вычисления:" << d << endl;
			break;
		case 7:
			cout << "Введите основание для данных логарифмов" << endl;
			cin >> d;
			cout << " Хорошо, сначала будет выведен логарифм первого, а затем второго числа" << endl;
			f = log(m) / log(d);
			c = log(b) / log(d);
			cout << " Результат вычисления:" << f << endl;
			break;
		}
		cout << "Результат вычисления:" << c << endl;
		cout << "Хотите продолжить? (d/n)" << endl;
		cin >> y;
	} while (y == 'd');
	return EXIT_SUCCESS;
}