#include <iostream>
#include <cmath>
using namespace std;
int Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich cac uoc so le cua " << n << " la: " << Tich(n);
	return 1;
}

int Tich(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			t = t * i;
		i += 2;
	}
	return t;
}
