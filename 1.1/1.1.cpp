// 1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std;


int stepen(int x, int y)
{
	 int pr = 1;

	for (int i = 0; i < y; i++)
	{
		pr = pr * x;
	}

	return pr;

}

int main()
{
	setlocale(0, "");
	int x , y;
	cout << "Введите число, которое хотите возвести в степень \n";
	cin >> x;
	cout << "Введите степень, в которую хотите возвести число \n";

	cin >> y;
	cout << "Результат = " << stepen(x, y) << endl;
	return 0;
}