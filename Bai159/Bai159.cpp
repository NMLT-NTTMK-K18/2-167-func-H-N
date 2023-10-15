#include <iostream>
using namespace std;
int TimchusoLN(int, int);
int DemchusoLN(int, int, int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int lc = n % 10;
	int dem = 0;
	int t = n;
	cout << DemchusoLN(t, TimchusoLN(t, lc), dem);
	return 0;
}
int TimchusoLN(int tt, int lclc)
{
	while (tt != 0)
	{
		int dv = tt % 10;
		if (dv < lclc)
			lclc = dv;
		tt /= 10;
		return lclc;
	}
}
int DemchusoLN(int tt, int lclc, int demdem)
{
	while (tt != 0)
	{
		int dv = tt % 10;
		if (dv == lclc)
			demdem++;
		tt /= 10;
	}
	return demdem;
}