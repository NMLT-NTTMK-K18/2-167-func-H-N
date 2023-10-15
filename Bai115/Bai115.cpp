#include <iostream>
using namespace std;
int TinhA(int);
int main()
{
	
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << "Ket qua:" << TinhA(n);

	return 0;
}
int TinhA(int nn)
{
	if (nn == 0)
		return -1;
	if (nn == 1)
		return 3;
	int att = -1;
	int at = 3;
	int ahh;
	int i = 2;
	while (i <= nn) 
	{
		ahh = 5 * at + 6 * att;
		at = ahh;
		att = at;
		i++;
	}
	return ahh;
}


