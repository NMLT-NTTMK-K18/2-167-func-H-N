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
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << ahh << " " << bhh;
	return 0;
}