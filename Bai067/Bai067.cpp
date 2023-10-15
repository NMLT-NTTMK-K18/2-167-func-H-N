#include <iostream>
#include <cmath>
using namespace std;
int Kiemtra(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (Kiemtra(n) == 1)
		cout << n << " ton tai chu so le";
	else
		cout << n << " khong ton tai chu so le";

	return 1;
}

int Kiemtra(int nn)
{
	int flag = 0;
	int t = nn;
	int dv = 0;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}