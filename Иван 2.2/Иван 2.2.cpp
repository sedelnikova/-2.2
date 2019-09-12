// Иван 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B, C, P, Q, S;
	cout << "Введите координаты точек на числовой оси: ";
	cin >> A >> B >> C;
	P = fabs(C - A);
	Q = fabs(B - C);
	S = P + Q;

	cout << "AC = " << P << endl;
	cout << "BC = " << Q << endl;
	cout << "AC + BC = " << S << endl;

	return 0;
}