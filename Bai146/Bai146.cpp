#include <iostream>
using namespace std;
int ktDoiXung(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if (ktDoiXung(n) == 1)
		cout << "Doi xung";
	else
		cout << "Ko Doi xung";
	return 0;

}
int ktDoiXung(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t /= 10;
	}
	if (dn == nn)
		return 1;

	return 0;

}