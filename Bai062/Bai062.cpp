#include <iostream>
#include <cmath>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong cac chu so chan cua " << n << " la: " << Tong(n);
	return 1;
}

int Tong(int nn)
{
	int s = 0;
	int t = nn;
	int dv = 0;
	while (t != 0)
	{
		dv = t % 10;
		if(dv % 2 == 0)
		{
			s = s + dv;
		}
		t = t / 10;
	}
	return s;
}