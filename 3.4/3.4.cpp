// Lab_03_4.cpp
// < �������� ����� >
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 22
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double r;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> r;
	// ������������ � ����� ����
	if ((y <= sqrt((r * r) - (x * x)) && y <= 0 && x >= 0)||
		(y <= 0 && y >= ((-1) * x * r) && y <= (2 * x - 2 * r)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}