#include <iostream>
#include <cmath>
using namespace std;
float Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "S = " << Tich(n);
	return 1;
}

float Tich(int nn)
{
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * (1 + (float)1 / (i * i));
		i++;
	}
	return t;
}