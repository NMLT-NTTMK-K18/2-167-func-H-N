#include <iostream>
using namespace std;
void Tinhx(float);
int main()
{
	int x;
	cout << "Nhap x:";
	cin >> x;
	Tinhx(x);
	return 0;
}
void Tinhx(float xx)
{
	float f;
	if (xx >= 5)
		f = 2 * xx * xx + 5 * xx + 9;
	else
		f = -2 * xx * xx + 4 * xx - 9;
	cout << f;
}