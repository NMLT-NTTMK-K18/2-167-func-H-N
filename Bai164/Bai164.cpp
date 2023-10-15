#include <iostream>
using namespace std;
float TinhS(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << TinhS(n);
	return 0;
}
float TinhS(int nn)
{
	float s = 1;
	int i = 1;
	while (i <= nn)
	{
		s = 1 / (1 + s);
		i++;
	}
	return s;
}