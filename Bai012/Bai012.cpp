#include <iostream>
#include <cmath>
using namespace std;
float Phepnhan(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << x << "^6 = " << Phepnhan(x);
	return 1;
}

float Phepnhan(float xx)
{
	float xx2 = xx * xx;
	float xx4 = xx2 * xx2;
	float xx6 = xx4 * xx2;
	return xx6;
}