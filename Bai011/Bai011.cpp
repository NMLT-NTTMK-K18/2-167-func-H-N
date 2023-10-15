#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&);
void Xuat(float&, float&);
float KhoangCach(float, float, float, float);
float Dientich(float, float, float);

int main()
{
	float x1, y1;
	Nhap(x1, y1);
	cout << "A = ";
	Xuat(x1, y1);

	float x2, y2;
	Nhap(x2, y2);
	cout << "B = ";
	Xuat(x2, y2);

	float x3, y3;
	Nhap(x3, y3);
	cout << "C = ";
	Xuat(x3, y3);

	float AB = KhoangCach(x1, x2, y1, y2);
	float BC = KhoangCach(x2, x3, y2, y3);
	float AC = KhoangCach(x1, x3, y1, y3);
	cout << "\nDien tich cua tam giac la: " << Dientich(AB, BC, AC);

	return 1;
}

void Nhap(float& xx, float& yy)
{
	cout << "\nNhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}

void Xuat(float& xx, float& yy)
{
	cout << "(" << xx << ", " << yy << ")";
}

float KhoangCach(float xx1, float xx2, float yy1, float yy2)
{
	return sqrt((xx2 - xx1) * (xx2 - xx1) + (yy2 - yy1) * (yy2 - yy1));
}

float Dientich(float aa, float bb, float cc)
{
	float p = (aa + bb + cc) / 2;
	return sqrt(p * (p - aa) * (p - bb) * (p - cc));
}