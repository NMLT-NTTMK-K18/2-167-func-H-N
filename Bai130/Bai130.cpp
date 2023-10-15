#include <iostream>
using namespace std;
int KtTamgiac(float, float, float);
int main()
{
	float x, y, z;
	cout << "Nhap x";
	cin >> x;
	cout << "Nhap y";
	cin >> y;
	cout << "Nhap z";
	cin >> z;
	if (KtTamgiac(x, y, z) == 1)
		cout << "La Tam Giac";
	else
		cout << "Ko la Tam Giac";
	return 0;
}
int KtTamgiac(float xx, float yy, float zz)
{
	int flag = 0;
	if (xx + yy > zz && xx + zz > yy && yy + zz > xx)
		flag = 1;
	return flag;

	
}