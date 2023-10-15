#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float Dientichxq(float);


int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;

	cout << "Dien tich xung quanh cua duong tron: " << Dientichxq(r);
	return 1;
}

float Dientichxq(float rr)
{
	return 4 * M_PI * rr * rr;
}