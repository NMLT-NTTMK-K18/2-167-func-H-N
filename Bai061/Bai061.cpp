#include <iostream>
#include <cmath>
using namespace std;
int Dem(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So luong cac chu so le cua " << n << " la: " << Dem(n);
	return 1;
}

int Dem(int nn)
{
	int dv = 0;
	int d = 0;
	int t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if(dv % 2 != 0)
		{
			d++;
		}
		t = t / 10;
	}
	return d;
}