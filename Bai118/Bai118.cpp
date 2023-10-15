#include <iostream>
using namespace std;
float TinhA(int);
int main()
{
	int n;
	cout << "Nhap n";
	cin >> n;
	cout << TinhA(n);
	return 0;
}
float TinhA(int nn)
{
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = (-9 * at - 24) / (5 * at + 13);
		i++;
		at = ahh;
	}
	return ahh;
}