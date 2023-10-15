#include <iostream>
using namespace std;
void Doi(float&, float&);
float Sapxep(float, float, float);
int main()
{
	float a, b, c;
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	cout << "Nhap c:";
	cin >> c;
	Sapxep(a, b, c);
	return 0;
}
void Doi(float& so1, float& so2)
{
	float temp = so1;
	so1 = so2;
	so2 = temp;
}
float Sapxep(float aa, float bb, float cc)
{
	if (aa > bb)
		Doi(aa, bb);
	if (aa > cc)
		Doi(aa, cc);
	if (bb > cc)
		Doi(bb, cc);
	cout <<aa << " " << bb << " " << cc;
	return 0;
}