#include <iostream>
using namespace std;
int TimchusoNN(int, int);
int DemchusoNN(int, int,int );
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int lc = n % 10;
	int dem = 0;
	int t = n;
	cout << DemchusoNN(t, TimchusoNN(t, lc), dem);
	return 0;
}
int TimchusoNN(int tt, int lclc)
{
	while (tt != 0)
	{
		int dv = tt % 10;
		if (dv > lclc)
			lclc = dv;
		tt /= 10;
		return lclc;
	}
}
int DemchusoNN(int tt, int lclc, int demdem)
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