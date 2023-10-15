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

	cout << x << "^" << n << " = " << Tich(x, n);
	return 1;
}

float Tich(float xx,int nn)
{
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		i++;
	}
	return t;
}