#include <iostream>
#include <cmath>
using namespace std;
long Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tich T = " << Tich(n);
	return 1;
}

long Tich(int nn)
{
	long t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		i++;
	}
	return t;
}