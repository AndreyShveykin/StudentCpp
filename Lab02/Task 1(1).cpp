#include "pch.h" 
#include <iostream> 
using namespace std;
int i;
int main()
{
	setlocale(LC_ALL, "ru");
	char *symb = new char[100];
	char *znach = new char[100];
	int n = 0;
	cout << "Через пробел введите переменные, с которыми Вы хотите произвести операцию. (end - завершение ввода) \n";
	for (int i = 0; i < 99; i++)
	{
		cin >> symb;
		n = n + 1;
		if ((symb[0] == 'e') && (symb[1] == 'n') && (symb[2] == 'd'))
		{
			if (i < 2)
			{
				cout << "Количество чисел должно быть не меньше 2! \n";
				continue;
			}
			else
			{
				break;
			}
		}

	}
	delete symb;
	int Rez = znach[0];
	cout << "Введите действия для указанных переменных \n";
	for (int i=0; i < 2; i++)
		cin >> znach[i];
	switch (znach[0])
	{
	case '+':
	{
		Rez = Rez + symb[i + 1];
		break;
	}
	case '-':
	{
		Rez = Rez - symb[i + 1];
		break;
	}
	case '*':
	{
		Rez = Rez * symb[i + 1];
		break;
	}
	case '/':
	{
		Rez = Rez / symb[i + 1];
		break;
	}
	cout << Rez;
	}
}