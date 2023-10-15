#include <iostream>
using namespace std;
int Timchuso(int);
int Demsochuso(int, int,int);
int main()
{
	int n;
	cout << "NHap n:";
	cin >> n;

	
	int dt = n;
	int dem = 0;
	int t = n;
	cout << Demsochuso(t, Timchuso(dt), dem);
	return 0;
}
int Timchuso(int dtdt)
{
	while (dtdt >= 10)
	{
		dtdt /= 10;
	}
	return dtdt;
}
int Demsochuso(int tt,int dtdt, int demdem)
{
	while (tt!= 0)
	{
		int dv = tt % 10;
		if (dv == dtdt)
			demdem++;
		tt /= 10;
	}
	return demdem;
}