
#include <iostream>
using namespace std;
int KtTamGiac(float, float, float);


int main()
{
	float xA, yA, xB, yB, xC, yC;
	cout << "Nhap Diem A";
	cin >> xA >> yA;
	cout << "Nhap Diem B";
	cin >> xB >> yB;
	cout << "Nhap Diem C";
	cin >> xC >> yC;

	float a = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
	float b = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));
	float c = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
	if (KtTamGiac(a, b, c) == 1)
		cout << "La Tam Giac";
	else
		cout << " Ko la tam giac";
}
int KtTamGiac(float aa, float bb, float cc)
{
	int flag = 0;
	if (aa + bb > cc && aa + cc > bb && bb + cc > aa)
		flag = 1;
	return flag;
}
