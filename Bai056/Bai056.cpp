#include <iostream>
#include <cmath>
using namespace std;
int Dem(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong cac uoc so cua " << n << " la: " << Dem(n);
	return 1;
}

int Dem(int nn)
{
	int d = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			d++;
		i += 2;
	}
	return d;
}
