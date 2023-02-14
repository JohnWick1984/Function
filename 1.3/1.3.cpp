// 1.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int digit(int x, int y)
{
    for (int i = x; i < y; i++)
    {
        int result = 0;
        for (int j = 1; j < i; j++)
        {
            if ((i % j) == 0)
            {
                result += j;
            }
        }
        if (result == i && result)
        {
            cout << result << " \n";

        }
    }
    return 0;
}

int main()
{
	setlocale(0, "");
	int x, y;
	cout << "Введите начало диапазона \n";
	cin >> x;
	cout << "Введите конец диапазона \n";
	cin >> y;


	cout << "Совершенными числами в этом диапазоне являются: " << digit(x, y) << endl;
	return 0;
}