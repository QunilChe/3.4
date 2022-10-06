// Lab_03_4.cpp
// < Теглівець Орест >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 22
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double r;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> r;
	// розгалуження в повній формі
	if ((y <= sqrt((r * r) - (x * x)) && y <= 0 && x >= 0)||
		(y <= 0 && y >= ((-1) * x * r) && y <= (2 * x - 2 * r)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}