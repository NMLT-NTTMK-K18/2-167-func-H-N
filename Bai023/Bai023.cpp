#include <iostream>
#include <cmath>
using namespace std;
int Hangchuc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Hang chuc cua " << n << " la: " << Hangchuc(n);
	return 1;
}

int Hangchuc(int nn)
{
	return (nn / 10) % 10;
}
