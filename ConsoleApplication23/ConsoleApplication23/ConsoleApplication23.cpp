
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
template<typename T1, typename T2>
class MyClass
{
public:
	MyClass(T1 name, T2 year)
	{
		this->name = name;
		this->year = year;
	}
	void Info()
	{
		cout << name << endl;
		cout << year << endl;
	}
	void add()
	{

	}

private:
	T1 name;
	T2 year;

};

int main()
{
	setlocale(LC_ALL, "RUS");
	string a = "Книга";
	int p = 1972;
	MyClass <string, int> c(a,p);
	c.Info();
	return 0;
}