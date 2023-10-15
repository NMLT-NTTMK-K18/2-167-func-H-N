#include <iostream>
using namespace std;
int TinhA(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	TinhA(n);
}
int TinhA(int nn)
{
	int at = 2;
	int bt = 1;
	int ahh, bhh;
	int i = 2;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << ahh << " " << bhh;
	return 0;
}