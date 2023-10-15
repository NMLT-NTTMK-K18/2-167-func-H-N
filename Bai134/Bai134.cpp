#include <iostream>
using namespace std;
int kT(float x, float y, float z);
int main() 
{
	float x, y, z;
	cout << "Nhap x:";
	cin >> x;
	cout << "Nhap y:";
	cin >> y;
	cout << "Nhap z:";
	cin >> z;
	if (kT(x, y, z) == 1)
		cout << "DUNG";
	else
		cout << "Sai";
	return 0;
}
int kT(float xx, float yy, float zz)
{
	int flag = 0;
	if (xx <= yy and yy <= zz)
		flag = 1;
	return flag;
}
