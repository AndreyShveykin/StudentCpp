#include "pch.h"
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c;
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
		cout << "Результат " << a + b << endl;
		break;
	case 2:
		cout << "Результат " << a - b << endl;
		break;
	case 3:
		cout << "Результат " << a * b << endl;
		break;
	case 4:
		cout << "Результат " << (float)a / b << endl;
		break;
	default:
		cout << "Вы выбрали несуществующий знак" << endl;
		break;
	}

}
