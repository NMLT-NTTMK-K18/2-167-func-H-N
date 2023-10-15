#include <iostream>
using namespace std;
int TinhA(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << TinhA(n);
	return 0;
}
int TinhA(int nn)
{
	int att = -1;
	int at = 3;
	int t = 2;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		t *= 2;
		ahh = 5 * t + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}
