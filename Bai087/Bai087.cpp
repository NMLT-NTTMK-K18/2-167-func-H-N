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
	float s = xx;
	float t = xx;
	int i = 3;
	int dau = -1;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		s = s + dau * t;
		dau = -dau;
		i += 2;
	}
	return s;
}