#include <iostream>
#include <cmath>
using namespace std;
int Min(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so nho nhat cua " << n << " la: " << Min(n);
	return 1;
}

int Min(int nn)
{
	int lc = nn % 10;
	int t = nn;
	int dv = 0;
	while (t != 0)
	{
		dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}