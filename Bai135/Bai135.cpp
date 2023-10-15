#include <iostream>
using namespace std;
int KT(int);
int main()
{
	int n;
	cout <<  "Nhap Nam:";
	cin >> n;
	if (KT(n) == 1)
		cout << "Nam nhuan";
	else
		cout << "Ko la Nam nhuan";
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