#include <iostream>
using namespace std;
int ktDang2m(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if (ktDang2m(n) == 1)
		cout << "Co dang 2m";
	else
		cout << "Ko co dang 2m";
	return 0;
}
int ktDang2m(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
		t /= 2;
	}
	return flag;
}