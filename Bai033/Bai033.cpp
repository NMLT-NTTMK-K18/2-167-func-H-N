#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong S = " << Tong(n);
	return 1;
}

float Tong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (float)i / (i + 1);
		i++;
	}
	return s;
}