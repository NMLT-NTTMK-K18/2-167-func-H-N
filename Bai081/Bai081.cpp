#include <iostream>
#include <cmath>
using namespace std;
float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong S: " << Tong(x, n);
	return 1;
}

float Tong(float xx, int nn)
{
	float s = 0;
	float m = 1;
	int i = 0;
	while (i <= nn)
	{
		m = m * (xx + i);
		s = s + 1 / m;
		i += 1;
	}
	return s;
}