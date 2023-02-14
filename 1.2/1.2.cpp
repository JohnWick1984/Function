// 1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;


int sum(int x, int y)
{
	int s = 0;

	for (int i = x+1; i < y; i++)
	{
		s +=i;
	}

	return s;

}

int main()
{
	setlocale(0, "");
	int x, y;
	cout << "Введите начало диапазона \n";
	cin >> x;
	cout << "Введите конец диапазона \n";

	cin >> y;
	cout << "Сумма чисел внутри диапазона = " << sum(x, y) << endl;
	return 0;
}