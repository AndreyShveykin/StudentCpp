#include "pch.h"
#include <cmath>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int c, e;
	float a, b, d, f;
	cout << "Добро пожаловать Введите 2 числа" << endl;
	cin >> a >> b;
	cout << "Выберите знак между числами" << endl <<
		"1. +" << endl <<
		"2. -" << endl <<
		"3. *" << endl <<
		"4. /" << endl <<
		"0. Другая операция" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "Результат " << a + b << endl;
		break;
	case 2:
		cout << "Результат " << a - b << endl;
		break;
	case 3:
		cout << "Результат " << a * b << endl;
		break;
	case 4:
		if (b = 0)
			cout << "Не существует" << endl;
		else
		cout << "Результат " << a / b << endl;
		break;
	case 0:
		cout << "Введите число, с которым вы хотите произвести операцию" << endl;
		cin >> d;
		cout << "Выберите операцию" << endl <<
			"1. Возведение в квадрат" << endl <<
			"2. Извлечение корня" << endl <<
			"3. Логарифмирование" << endl;
		cin >> e;
		switch (e)
		{
		case 1:
			cout << "Результат " << d * d << endl;
			break;
		case 2:
			cout << "Результат " << sqrt(d) << endl;
			break;
		case 3:
			cout << "Введите основание данного логарифма" << endl;
			cin >> f;
			cout << "Результат " << log(d) / log(f);
			break;
		default:
			cout << "Вы выбрали несуществующий знак" << endl;
			break;
		}
		{
			break;
		}
	default:
		cout << "Вы выбрали несуществующий знак" << endl;
		break;
	}

}