#include <iostream>
#include <cmath>
using namespace std;
int Hangtram(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Hang tram cua " << n << " la: " << Hangtram(n);
	return 1;
}

int Hangtram(int nn)
{
	return (nn / 100) % 10;
}
