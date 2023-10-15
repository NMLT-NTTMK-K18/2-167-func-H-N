#include <iostream>
using namespace std;
float Kt(float, float);
int main()
{
	float a, b;
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	Kt(a, b);
	return 0;
}
float Kt(float aa, float bb)
{
	if (aa < 0)
		aa = -aa;
	if (bb < 0)
		bb = -bb;
	cout << aa << " " << bb;
	return 0;

}