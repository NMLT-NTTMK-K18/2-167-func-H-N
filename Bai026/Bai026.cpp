#include <iostream>
#include <cmath>
using namespace std;
void Hoanvi(int&, int&);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;

	int b;
	cout << "Nhap b: ";
	cin >> b;

	cout << "\nTruoc hoan doi: ";
	cout << "\na = " << a;
	cout << "\nb = " << b;

	Hoanvi(a, b);
	cout << "\nSau hoan doi: ";
	cout << "\na = " << a;
	cout << "\nb = " << b;

	return 1;
}

void Hoanvi(int& aa, int& bb)
{
	aa = aa + bb;
	bb = aa - bb;
	aa = aa - bb;
}