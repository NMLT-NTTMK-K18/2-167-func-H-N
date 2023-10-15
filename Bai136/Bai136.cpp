#include <iostream>
using namespace std;
int KT(int);
int Dem(int,int);
int main()
{
	int x, y;
	cout << "NHap x:";
	cin >> x;
	cout << "NHap x:";
	cin >> y;
	Dem(x, y);
	return 0;
}
int KT(int nn)
{
	int flag = 0;
	if (((nn % 4 == 0) && (nn % 100 != 0)) || (nn % 400))
	{
		flag = 1;
	}
	return flag;
}
int Dem(int xx, int yy)
{
	
	int n = xx;
	while (n <= yy)
	{
		if (KT(n) == 1)
			cout << n<<" ";
		n++;

	}
	
	return 0;
}