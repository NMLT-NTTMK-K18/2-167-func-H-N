#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float Chuvi(float);


int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "Chu vi duong tron: " << Chuvi(r);
	return 1;
}

float Chuvi(float rr)
{
	return 2 * M_PI * rr;
}