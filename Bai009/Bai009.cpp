#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float Dientich(float, int);

int main()
{
	float r;
	cout << "Nhap ban kinh duong tron: ";
	cin >> r;

	int n;
	cout << "So canh cua da giac deu: ";
	cin >> n;

	cout << "Dien tich cua da giac deu noi tiep duong tron la: " << Dientich(r, n);
	return 1;
}

float Dientich(float rr, int nn)
{
	return (float)1 / 2 * nn * rr * rr * sin((2 * M_PI) / nn);
}