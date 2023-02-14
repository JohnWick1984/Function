// 1.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

bool IsHappy(int n)
{
	int count = 1;
	int sum = 0;
	while (n)
	{
		if (count < 4) 
			sum += n % 10; 
		else sum -= n % 10;
		n /= 10; 
		++count;
	}
	return (!sum);
}

int main()
{
	setlocale(0, "");
		cout << "Введите шестизначное число >";
		int s; 
        cin >> s;
		

        if (IsHappy(s)) cout << " Число Счастливое!\n\n";
        else cout << " Число Простое...\n\n";
}
