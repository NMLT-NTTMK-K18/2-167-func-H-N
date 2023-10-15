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
	int att = 1;
	int at = 2;
	int ahh;
	int i = 2;
	while (i <= nn)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}