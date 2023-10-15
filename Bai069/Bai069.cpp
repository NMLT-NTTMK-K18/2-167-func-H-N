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
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + t;
		i++;
	}
	return s;
}