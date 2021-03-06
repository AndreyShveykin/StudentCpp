#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
template<typename T>
class List
{
public:
	List();
	~List();
	void pop_front();
	void push_back(T data);
	void clear();
	int GetSize() { return Size; }
	T& operator[](const int index);
	void push_front(T data);
	void insert(T data, int index);
	void removeAt(int index);
private:
	template<typename A>
	class Node {
	public:
		Node * pNext;
		T data;
		Node(T data = T(), Node *pNext = nullptr) {
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T> *head;
};
template<typename T>
List<T>::List() {
	Size = 0;
	head = nullptr;
}
template<typename T>
List<T>::~List() {
	clear();
}
template<typename T>
void List<T>::pop_front() {
	Node<T> *temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}
template<typename T>
void List<T>::push_back(T data) {
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T> *current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	Size++;
}
template<typename T>
void List<T>::clear() {
	while (Size > 0)
	{
		pop_front();
	}
}
template<typename T>
T & List<T>::operator[](const int index) {
	int counter = 0;
	Node<T> *current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}
template<typename T>
void List<T>::push_front(T data) {
	head = new Node<T>(data, head);
	Size++;
}
template<typename T>
void List<T>::insert(T data, int index) {
	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node<T> *previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		Node<T> *newNode = new Node<T>(data, previous->pNext);
		previous->pNext = newNode;
		Size++;
	}
}
template<typename T>
void List<T>::removeAt(int index) {
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T> *previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
		Node<T> *current = previous->pNext;
		previous->pNext = current->pNext;
		delete current;
		Size--;
	}
}
class bus {
private:
	string key;
	string routenumber;
	string drivername;
public:
	friend istream& operator>>(istream & in, bus & bus) {
		in >> bus.key;
		in >> bus.drivername;
		in >> bus.routenumber;
		return in;
	}
	friend ostream& operator<<(ostream & out, const bus & bus) {
		out << bus.key << ' ' << bus.drivername << ' ' << bus.routenumber;
		return out;
	}
	string getkey() {
		return key;
	}
	string getdrivername() {
		return drivername;
	}
	string getroutenumber() {
		return routenumber;
	}

};
int i;
int main()
{
	setlocale(LC_ALL, "ru");
	List<bus> inbp, outbp;
	string path = "inbp.txt", path2 = "outbp.txt";
	bus a;
	int index = 0;
	while (index != 7)
	{
		cout << "\n\nМеню\n1.Создание информации об автобусном парке\n2.Добавить прибывший в парк автобус\n3.Удалить выехавший на маршрут автобус\n4.Информация об автобусах\n5.Сохранить и выйти\n6.Загрузить файл\n" << endl;
		cin >> index;
		while (index < 1 || index > 6)
		{
			cout << "Такого пункта нет в меню, попробуйте еще. \n";
			cin.clear();
			while (cin.get() != '\n');
			cin >> index;
		}
		char y = 'y';
		string numb;
		switch (index)
		{
		case 1:
		{
			while (y != 'n')
			{
				cout << "Введите номер автобуса, номер маршрута, фамилию водителя (через Enter)" << endl;
				cin >> a;
				for (int i = 0; i < inbp.GetSize(); i++)
				{
					while (a.getkey() == inbp[i].getkey())
					{
						cout << "Автобус с таким номером уже существует!" << endl;
						while (a.getkey() == inbp[i].getkey())
						{
							cout << "Введите данные другого автобуса" << endl;
							cin >> a;
						}
					}
				}
				inbp.push_back(a);
				cout << "Автобус успешно добавлен" << endl;
				cout << "Хотите продолжить ввод? (y/n)" << endl;
				cin >> y;
			}
			y = 'y';
			break;
		}
		case 2:
		{
			if (outbp.GetSize() < 1)
			{
				cout << "На маршруте еще нет ни одного автобуса!" << endl;
				break;
			}
			else
			{
				cout << "Введите номер автобуса, заехавшего в автобусный парк" << endl;
				cin >> numb;
				for (int i = 0; i < outbp.GetSize(); i++)
				{
					if (numb == outbp[i].getkey())
					{
						a.getkey() = outbp[i].getkey();
						a.getroutenumber() = outbp[i].getroutenumber();
						a.getdrivername() = outbp[i].getdrivername();
						outbp.removeAt(i);
						inbp.push_back(a);
						cout << "Автобус с номером " << a.getkey() << " перемещен в автобусный парк" << endl;
					}
					else if (outbp.GetSize() == i + 1)
					{
						cout << "Такого автобуса нет на маршруте!" << endl;
						continue;
					}
				}
			}
			break;
		}
		case 3:
		{
			if (inbp.GetSize() < 1)
			{
				cout << "В парке еще нет ни одного автобуса!" << endl;
				break;
			}
			cout << "Введите номер автобуса, выехавшего из автобусного парка" << endl;
			cin >> numb;
			for (int i = 0; i < inbp.GetSize(); i++)
			{
				if (numb == inbp[i].getkey())
				{
					a.getkey() = inbp[i].getkey();
					a.getroutenumber() = inbp[i].getroutenumber();
					a.getdrivername() = inbp[i].getdrivername();
					inbp.removeAt(i);
					outbp.push_back(a);
					cout << "Автобус с номером " << a.getkey() << " добавлен на маршрут" << endl;
				}
				else if (inbp.GetSize() == i + 1)
				{
					cout << "Такого автобуса нет на маршруте!" << endl;
				}
			}
			break;
		}
		case 4:
		{
			cout << "Автобусы, которые находятся в парке:" << endl;
			cout << "Номер автобуса / Номер маршрута / Фамилия водителя" << endl;
			for (int j = 0; j < inbp.GetSize(); j++)
			{
				cout << inbp[j] << endl;
			}
			cout << "\n";
			cout << "Автобусы, которые находятся на маршруте:" << endl;
			cout << "Номер автобуса / Номер маршрута / Фамилия водителя" << endl;
			for (int j = 0; j < outbp.GetSize(); j++)
			{
				cout << outbp[j] << endl;
			}
			break;
		}
		case 5:
		{
			{
				remove("inbp.txt");
				ofstream fout;
				fout.open(path, ofstream::app);
				for (int i = 0; i < inbp.GetSize(); i++)
					fout << inbp[i] << endl;
				remove("outbp.txt");
				ofstream fout2;
				fout2.open(path2, ofstream::app);
				for (int i = 0; i < outbp.GetSize(); i++)
					fout2 << outbp[i] << endl;
			}
			index = 7;
			break;
		}
		case 6:
		{
			ifstream fin(path);
			while (fin >> a)
				inbp.push_back(a);
			ifstream fin2(path2);
			while (fin2 >> a)
				outbp.push_back(a);
		}
		}
	}
	return 0;
}
