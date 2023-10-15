#include <iostream>
using namespace std;
int TinhA(int);
int main()
{

	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Ket qua:" << TinhA(n);

	return 0;
}
int TinhA(int nn)
{
	int at = 2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		tt *= 3;
		pp *= 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}
	return ahh;
}


