#include <iostream>
using namespace std;
int ktDang5m(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if (ktDang5m(n) == 1)
		cout << "Co dang 5m";
	else
		cout << "Ko co dang 5m";
	return 0;
}
int ktDang5m(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
		t /= 5;
	}
	return flag;
}