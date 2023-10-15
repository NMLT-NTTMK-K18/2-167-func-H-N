#include <iostream>
using namespace std;
int KTGiamdan(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int t = n;
	if (KTGiamdan(t))
		cout << "Giam";
	else
		cout << "Ko Giam";
	return 0;

}
int KTGiamdan(int tt)
{
	int flag = 1;
	while (tt >= 10)
	{
		int dv = tt % 10;
		int hc = (tt / 10) % 10;
		if (hc < dv)
			flag = 0;
		tt /= 10;
	}
	return flag;
}