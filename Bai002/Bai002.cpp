#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float Dientich(float);


int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "Dien tich duong tron: " << Dientich(r);
	return 1;
}

float Dientich(float rr)
{
	return rr * rr * M_PI;
}
