#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x;
	double y; // Определение переменных
	cout << "x="; // Вывод фразы "x=" на экран
	cin >> x; // Ввод данных пользователем
	y = x+sqrt(6-x)-6; // Уравнение
	cout << "y="; // Вывод фразы "y=" на экран
	cout << y; // Вывод получившейся переменной на экран

	return 0;
}

