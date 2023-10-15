#include <iostream>
using namespace std;
float TinhA(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << TinhA(n);
	return 0;
}
float TinhA(int nn)
{
	int att = 1;
	int at = 1;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}