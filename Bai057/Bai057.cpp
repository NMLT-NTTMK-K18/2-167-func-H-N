#include <iostream>
#include <cmath>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong cac uoc so nho hon " << n << " la: " << Tong(n);
	return 1;
}

int Tong(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i++;
	}
	return s;
}
