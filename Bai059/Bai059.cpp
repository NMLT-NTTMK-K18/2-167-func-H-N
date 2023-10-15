#include <iostream>
#include <cmath>
using namespace std;
int Dem(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So luong cac chu so cua " << n << " la: " << Dem(n);
	return 1;
}

int Dem(int nn)
{
	int d=0;
	int t = nn;
	while (t != 0)
	{
		d++;
		t = t / 10;
	}
	return d;
}