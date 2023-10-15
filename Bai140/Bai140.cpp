#include <iostream>
using namespace std;
void GiaiBacHai(float, float, float);
int main()
{
	float a, b, c;
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	cout << "Nhap c:";
	cin >> c;
	GiaiBacHai(a, b, c);

	return 0;
}
void GiaiBacHai(float aa, float bb, float cc)
{
	float d = bb * bb - 4 * aa * cc;
	if (d <= 0)
	{
		if (d == 0)
			cout << -bb / (2 * aa);
		else
			cout << "VN";
	}
	else
	{
		float x1, x2;
		x1 = (-bb + sqrt(d)) / (2 * aa);
		x2 = (-bb - sqrt(d)) / (2 * aa);
		cout << x1 << " " << x2;
	}
}