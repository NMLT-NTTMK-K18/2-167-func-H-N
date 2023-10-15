#include <iostream>
#include <cmath>
using namespace std;
float Tich(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "S = " << Tich(x, n);
	return 1;
}

float Tich(float xx, int nn)
{
	float t = xx;
	int i = 1;
	while (i <= nn)
	{
		t = t * (xx + i);
		i++;
	}
	return t;
}