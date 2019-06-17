#include "pch.h" 
#include <string> 
#include <iostream> 
using namespace std;
template<typename T>
class List
{
public:
	List();
	~List();

	//удаление первого элемента в списке 
	void pop_front();

	//добавление элемента в конец списка 
	void push_back(T data);

	// очистить список 
	void clear();

	// получить количество элементов в списке 
	int GetSize() { return Size; }

	// перегруженный оператор [] 
	T& operator[](const int index);

	//добавление элемента в начало списка 
	void push_front(T data);

	//добавление элемента в список по указанному индексу 
	void insert(T data, int index);

	//удаление элемента в списке по указанному индексу 
	void removeAt(int index);

	//удаление последнего элемента в списке 
	void pop_back();

private:


	template<typename A>
	class Node // узел (указатель и данные) 
	{
	public:
		Node * pNext;
		T data;

		Node(T data = T(), Node *pNext = nullptr) // при передаче класса вызовется конструктор, для pnext указатель пуст 
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T> *head; // указатель на первый элемент 
};


template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}


template<typename T>
List<T>::~List()
{
	clear(); //вызывается метод clear и чистит список 
}


template<typename T>
void List<T>::pop_front()
{
	Node<T> *temp = head; //временная переменная принимает указатель на первый элемент 

	head = head->pNext; // head (1 элемент) принимает в себя указатель на следующий элемент 

	delete temp; // мусор удаляется 

	Size--;

}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data); //создаем новый узел и передаем в конструктор данные 
	}
	else
	{
		Node<T> *current = this->head; //Ноде присваиваем указатель карент 

		while (current->pNext != nullptr) //пока карент со значением pnext не равно 0 (не существет) 
		{
			current = current->pNext; // идем дальше 
		}
		current->pNext = new Node<T>(data); // когда доходим до последнего элемента создаем новый узел 

	}

	Size++;
}

template<typename T>
void List<T>::clear()
{
	while (Size > 0)
	{
		pop_front(); //удаляется 1 элемент 
	}
}


template<typename T>
T & List<T>::operator[](const int index)
{
	int counter = 0; // создаем счетчик 

	Node<T> *current = this->head; // временный указатель каррент, который проверяет адрес следующего переменная 

	while (current != nullptr) // пока указатель на следующий жлемент не равен 0 
	{
		if (counter == index) //если счетчик равен идексу 
		{
			return current->data; // забираем данный 
		}
		current = current->pNext; // иначе присваиваем временному указателю указатель на указатель адреса следующего эл 
		counter++; // счетчик увеличивается 
	}
}

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head); //cоздаем новый head, в него передаем данные и 
	Size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{

	if (index == 0)
	{
		push_front(data); // если индекс 0, то используем добавить в начало 
	}
	else
	{
		Node<T> *previous = this->head; //создаем указатель превиос, в который помещаем значение хед 

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext; // до предшедствующего индексу элемента записываем в превиос новые указатели 
		}

		Node<T> *newNode = new Node<T>(data, previous->pNext); // указатель пердыдущего теперь указывает на новый элемент 

		previous->pNext = newNode; // в поле нашего записываем указатель 

		Size++;
	}





}

template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	} //если индекс 0, удаляем из начала 
	else
	{
		Node<T> *previous = this->head; // превиос присваиваем хед 
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext; //превиос постоянно принимает указатель следующего элемента 
		}


		Node<T> *current = previous->pNext; //временная переменная принимает адрес следующего элемента

		previous->pNext = current->pNext; // предыдущий элемент начинает указывать на следующий 

		delete current; // удаление временной переменной 

		Size--;
	}

}

template<typename T>
void List<T>::pop_back()
{
	removeAt(Size - 1);
}
class bus
{
public:
	string key;
	string routenumber;
	string drivername;
};
string numb;
int i;
char y;
int index;
int main()
{
	setlocale(LC_ALL, "ru");
	List<bus> inbp; // в парке <string, string> номер автобуса - ключ, номер маршрута и фамилия - значение 
	List<bus> outbp; // на маршруте 
	while (index != 6)
	{
		cout << "\n\nМеню\n1.Создание информации об автобусном парке\n2.Добавить прибывший в парк автобус\n3.Удалить выехавший на маршрут автобус\n4.Информация об автобусах\n5.Загрузить данные\n6.Сохранить и выйти\n";
		cin >> index;
		bus a;
		switch (index)
		{
		case 1:
		{
			while (y != 'n')
			{
				cout << "Введите номер автобуса" << endl;
				cin >> a.key;
				for (int i = 0; i < inbp.GetSize(), i++;)
				{
					if (a.key == inbp[i].key)
					{
						cout << "Автобус с таким номером уже существует" << endl;
					}
				}
				cout << "Введите номер Маршрута" << endl;
				cin >> a.routenumber;
				cout << "Введите фамилию водителя" << endl;
				cin >> a.drivername;
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
			cout << "Введите номер автобуса, заехавшего в автобусный парк" << endl;
			cin >> numb;
			a.key = outbp[i].key;
			a.routenumber = outbp[i].routenumber;
			a.drivername = outbp[i].drivername;
			outbp.removeAt(i);
			inbp.push_back(a);
			cout << "Автобус с номером " << a.key << " перемещен в автобусный парк" << endl;
			break;
		}
		case 3:
		{
			cout << "Введите номер автобуса, выехавшего из автобусного парка" << endl;
			cin >> numb;
			a.key = inbp[i].key;
			a.routenumber = inbp[i].routenumber;
			a.drivername = inbp[i].drivername;
			inbp.removeAt(i);
			outbp.push_back(a);
			cout << "Автобус с номером " << a.key << " добавлен на маршрут" << endl;
			break;
		}
		case 4:
		{
			cout << "Автобусы, которые находятся в парке:" << endl;
			cout << "\n";
			for (int j = 0; j < inbp.GetSize(); j++)
			{
				cout << "Номер автобуса: ";
				cout << inbp[j].key << endl;
				cout << "Номер маршрута: ";
				cout << inbp[j].routenumber << endl;
				cout << "Фамилия водителя: ";
				cout << inbp[j].drivername << endl;
				cout << "\n";

			}
			cout << "Автобусы, которые находятся на маршруте:" << endl;
			cout << "\n";
			for (int j = 0; j < outbp.GetSize(); j++)
			{
				cout << "Номер автобуса: ";
				cout << outbp[j].key << endl;
				cout << "Номер маршрута: ";
				cout << outbp[j].routenumber << endl;
				cout << "Фамилия водителя: ";
				cout << outbp[j].drivername << endl;
				cout << "\n";


			}
			break;
		}
		}
	}
	return 0;
}
//Добавить всевозможные проверки на дурака 
//Вынести в отдельные методы 
//Инкапсулировать класс 
//Реализовать работу с файлами