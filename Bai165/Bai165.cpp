#include <iostream>
using namespace std;
int TimK(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << TimK(n);
	return 0;
}
int TimK(int nn)
{
	int t = 1;
	int k = 0;
	while (2*t <= nn)
	{
		t *= 2;
		k++;

	}
	return k;
}