#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float Chuvi(float, int);

int main()
{
	float r;
	cout << "Nhap ban kinh duong tron: ";
	cin >> r;

	int n;
	cout << "So canh cua da giac deu: ";
	cin >> n;

	cout << "Chu vi cua da giac deu noi tiep duong tron la: " << Chuvi(r, n);
	return 1;
}

float Chuvi(float rr, int nn)
{
	return 2 * nn * rr * sin(M_PI / nn);
}