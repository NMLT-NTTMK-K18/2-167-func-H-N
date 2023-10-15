#include <iostream>;
using namespace std;
float ex(int);
int main()
{
	int x;
	cout << "Nhap x:";
	cin >> x;
	cout << ex(x);
	return 0;
}
float ex(int xx)
{
	float s = 1;
	float t = 1;
	float m = 1;
	float i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		t *= xx;
		m *= i;
		e = t / m;
		s += e;
		i++;


	}
	return s;
}