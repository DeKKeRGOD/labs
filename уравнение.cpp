#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x;
	double y; // ����������� ����������
	cout << "x="; // ����� ����� "x=" �� �����
	cin >> x; // ���� ������ �������������
	y = x+sqrt(6-x)-6; // ���������
	cout << "y="; // ����� ����� "y=" �� �����
	cout << y; // ����� ������������ ���������� �� �����

	return 0;
}

