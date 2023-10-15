#include <iostream>
#include <cmath>
using namespace std;
float Phepnhan(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << x << "^14 = " << Phepnhan(x);
	return 1;
}

float Phepnhan(float xx)
{
	float xx2 = xx * xx;
	float xx4 = xx2 * xx2;
	float xx8 = xx4 * xx4;
	float xx16 = xx8 * xx8;
	return xx16 / xx2;
}