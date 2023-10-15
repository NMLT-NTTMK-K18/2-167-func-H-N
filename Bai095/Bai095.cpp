#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong S: " << Tong(n);
	return 1;
}

float Tong(int nn)
{
	float s = 0;
	int i = nn;
	while (i > 0)
	{
		s = sqrt(i + s);
		i--;
	}
	return s;
}