/*
Вернемся на шаг назад. 
Пользователь снова вводит всего 2 числа (целое или дробное) и одну из 4 базовых операций (+, -, *, /).
Но теперь вводит это одной строкой. Вычислите заданное выражение.
*/
#include "pch.h"
#include <iostream>
using namespace std;
float a;
float scaning(float a)
{
	cin >> a;
	if ((cin.peek() != '\n')) {
		cin.clear(); while (cin.get() != '\n'); cout << "Введите значение корректно" << endl;
	}
	return a;
}
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char s = 'd';

	do
	{
		cout << "Введите арифмитическое действие" << endl;
		float x, y, r;
		char o;
		x = scaning(a); cin >> o; y = scaning(a);
		if (o != (('+') || ('-') || ('/') || ('*')))
		{
			cout << "Вы ввели несуществующую арифметическую операцию" << endl;
			continue;
		}
		else
		{
			break;
		}
		switch (o)
		{
		case '+':
			r = x + y;
			break;
		case '-':
			r = x - y;
			break;
		case '*':
			r = x * y;
			break;
		case '/':
			r = x / y;
			break;
		}

		cout << x << o << y << "=" << r << endl;

		cout << "Хотите продолжить? (d/n)" << endl;
		cin >> s;
	} while (s == 'd');
	return EXIT_SUCCESS;
}
