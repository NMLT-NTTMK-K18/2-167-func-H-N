
#include <iostream>
using namespace std;
int KtTamGiac(float, float, float);
float TinhTamGiac(float, float, float, float, float, float);


int main()
{
	float xA, yA, xB, yB, xC, yC,xM,yM;
	cout << "Nhap Diem A";
	cin >> xA >> yA;
	cout << "Nhap Diem B";
	cin >> xB >> yB;
	cout << "Nhap Diem C";
	cin >> xC >> yC;
	cout << "Nhap Diem M";
	cin >> xM >> yM;
	float SABC = TinhTamGiac(xA, yA, xB, yB, xC, yC);
	float SMAB = TinhTamGiac(xM, yM, xA, yA, xC, yC);
	float SMBC = TinhTamGiac(xM, yM, xB, yB, xC, yC);
	float SMCA = TinhTamGiac(xM, yM, xC, yC, xA, yA);
	if (KtTamGiac(SABC, SMAB, SMBC, SMCA) == 1)
		cout << "M trong";
	else
		cout << "M ngoai";
	return 0;
	
}
float TinhTamGiac(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return  abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3);
}
int KtTamGiac(float SABC, float SMAB, float SMBC,float SMCA)
{
	if (SABC = SMAB + SMBC + SMCA)
		return 1;
	else
		return 0;
}
