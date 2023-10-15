#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float Thetich(float);


int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "The tich cua hinh cau la: " << Thetich(r);
	return 1;
}

float Thetich(float rr)
{
	return (float)4 / 3 * M_PI * rr * rr * rr;
}