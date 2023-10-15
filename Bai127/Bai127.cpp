#include <iostream>
using namespace std;
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
	cout << Kt(a, b);
	return 0;
}
float Kt(float aa, float bb)
{
	int lc = aa;
	if (bb < lc)
		lc = bb;
	return lc;

}