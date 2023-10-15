#include <iostream>
using namespace std;
int ktDang3m(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if (ktDang3m(n) == 1)
		cout << "Co dang 3m";
	else
		cout << "Ko co dang 3m";
	return 0;
}
int ktDang3m(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
		t /= 3;
	}
	return flag;
}