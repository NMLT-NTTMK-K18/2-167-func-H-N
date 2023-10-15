#include <iostream>
using namespace std;
void TinhA(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	TinhA(n);
	return 0;
}
void TinhA(int nn)
{
	int ahh = nn;
	cout << ahh<<" ";
	int i = 1;
	while (i<=nn)
	{
		if (ahh % 2 == 0)
			ahh /= 2;
		ahh = 3 * ahh + 1;
		cout << ahh<<" ";
		i++;
	}

}