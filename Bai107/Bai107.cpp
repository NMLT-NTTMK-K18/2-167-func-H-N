#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
float Sinx(float);
int main()
{
	float x;
	cout << "Nhap x:";
	cin >> x;
	cout << "Ket Qua:" << Sinx(x);
	return 0;
}
float Sinx(float xx)
{
	xx = (xx * M_PI) / 180;
	float s = 1;
	float t = 1;
	float m = 1;
	int dau = -1;
	float e = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t *= pow(xx, 2);
		m = m * (i - 1) * (i);
		e = t / m;
		s += dau * e;
		dau = -dau;
		i += 2;
	}
	return s;
}