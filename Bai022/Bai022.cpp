#include <iostream>
#include <cmath>
using namespace std;
int Donvi(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Hang don vi cua " << n << " la: " << Donvi(n);
	return 1;
}

int Donvi(int nn)
{
	return nn % 10;
}
