#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong S: " << Tong(n);
	return 1;
}

float Tong(int nn)
{
	float s = 0;
	int m = 0;
	int i = 1;
	int dau = 1;
	while (i <= nn)
	{
		m = m + i;
		s = s + (float)dau / m;
		dau = -dau;
		i += 1;
	}
	return s;
}