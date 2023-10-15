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
	float at = 2;
	float ahh;
	int i = 2;
	while (i <= nn)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}
	return ahh;
}