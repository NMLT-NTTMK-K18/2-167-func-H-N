#include <iostream>;
using namespace std;
float PI(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << PI(n);
	return 0;
}
float PI(int nn)
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 4 / ((float)i);
		s = s + dau * e;
		i += 2;
		dau = -dau;
	}
	return s;
}