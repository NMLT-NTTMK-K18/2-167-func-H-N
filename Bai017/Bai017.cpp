#include <iostream>
#include <cmath>
using namespace std;
float Phepnhan(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << x << "^11 = " << Phepnhan(x);
	return 1;
}

float Phepnhan(float xx)
{
	float xx2 = xx * xx;
	float xx4 = xx2 * xx2;
	float xx8 = xx4 * xx4;
	float xx10 = xx8 * xx2;
	return xx10 * xx;
}