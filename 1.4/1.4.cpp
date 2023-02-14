// 1.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void Card(int, int);

void Card(int dignity, int suit)
{
	if (dignity < 2 || dignity>14)
	{
		cout << "Неверное достоинство карты\n\n";
		return;
	}
	if (suit < 1 || suit>4)
	{
		cout << "Неверная масть карты\n\n";
		return;
	}

	switch (dignity)
	{
	case 11:
	{
		cout << "Валет";
		break;
	}
	case 12:
	{
		cout << "Дама";
		break;
	}
	case 13:
	{
		cout << "Король";
		break;
	}
	case 14:
	{
		cout << "Туз";
		break;
	}
	default:
		cout << dignity;
	}

	switch (suit)
	{
	case 1:
		cout << " Трефы";
		break;
	case 2:
		cout << " Бубны";
		break;
	case 3:
		cout << " Червы";
		break;
	case 4:
		cout << " Пики";
		break;
	}
	cout << "\n\n";
}

void main()
{

	setlocale(0, "");
	int d, m;
	
		cout << "Введите достоинство карты 2..14 >";
		cin >> d;
		
		cout << "Введите масть карты 1..4 >";
		cin >> m;
		

		 Card(d, m);

	
}