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
		while (!(cin >> d) || cin.peek() != '\n')
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Пожалуйста, введите корректное значение. \n";
			cout << "Выберите математическую операцию" << endl <<
				"1. +" << endl <<
				"2. -" << endl <<
				"3. *" << endl <<
				"4. /" << endl <<
				"5. Возведение в квадрат" << endl <<
				"6. Извлечение корня" << endl <<
				"7. Логарифмирование" << endl;
		}
		switch (d)
		{
		case 1:
			cout << "Введите 2 числа, которые хотите сложить" << endl;
			while (!(cin >> a >> b) || cin.peek() != '\n')
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "Пожалуйста, введите корректное значение. \n";
				cout << "Введите 2 числа, которые хотите сложить. \n";
			}
			c = a + b;
			break;
		case 2:
			cout << "Введите 2 числа, которые хотите вычесть" << endl;
			while (!(cin >> a >> b) || cin.peek() != '\n')
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "Пожалуйста, введите корректное значение. \n";
				cout << "Введите 2 числа, которые хотите вычесть. \n";
			}
			c = a - b;
			break;
		case 3:
			cout << "Введите 2 числа, которые хотите умножить" << endl;
			while (!(cin >> a >> b) || cin.peek() != '\n')
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "Пожалуйста, введите корректное значение. \n";
				cout << "Введите 2 числа, которые хотите умножить. \n";
			}
			c = a * b;
			break;
		case 4:
			cout << "Введите 2 числа, которые хотите поделить" << endl;
			while (!(cin >> a >> b) || cin.peek() != '\n')
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "Пожалуйста, введите корректное значение. \n";
				cout << "Введите 2 числа, которые хотите поделить. \n";
			}
			c = a / b;
			break;
		case 5:
			cout << "Введите число, которое хотите возвести в квадрат" << endl;
			while (!(cin >> a) || cin.peek() != '\n')
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "Пожалуйста, введите корректное значение. \n";
				cout << "Введите число, котороне хочешь возвести в квадрат. \n";
			}
			c = a * a;
			break;
		case 6:
			cout << "Введите число, из которого хотите извлечь корень" << endl;
			while (!(cin >> a) || cin.peek() != '\n')
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "Пожалуйста, введите корректное значение. \n";
				cout << "Введите число, из которого хочешь извлечь корень. \n";
			}
			c = sqrt(a);
			break;
		case 7:
			cout << "Введите логарифм, а после его основание" << endl;
			while (!(cin >> b >> a) || cin.peek() != '\n')
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "Пожалуйста, введите корректное значение. \n";
				cout << "Введите логарифм, а затем основание данного логарифма. \n";
			}
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