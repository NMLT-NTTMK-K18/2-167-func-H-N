
#include <iostream>
using namespace std;
float Doi(float, float);
int main()
{
	float a, b;
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	Doi(a, b);
	return 0;
}
float Doi(float aa, float bb)
{
	float temp = aa;
	aa = bb;
	bb = temp;
	cout << aa <<  " " << bb;
	return 0;
}
