#include <iostream>
using namespace std;
int bcnn(int, int);
int main()
{
	int a, b;
	cout << "Nhap a";
	cin >> a;
	cout << "Nhap b";
	cin >> b;
	cout << "Ket qua:" << bcnn(a, b);
	return 0;

}
int bcnn(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return abs(aa*bb)/(m + n);
}