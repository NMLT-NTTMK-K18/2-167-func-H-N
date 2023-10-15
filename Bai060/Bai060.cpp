#include <iostream>
#include <cmath>
using namespace std;
int Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich cac chu so cua " << n << " la: " << Tich(n);
	return 1;
}

int Tich(int nn)
{
	int tich = 1;
	int t = nn;
	int dv = 0;
	while (t != 0)
	{
		dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	return tich;
}