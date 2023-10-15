#include <iostream>
using namespace std;
float TinhA(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	cout << TinhA(n);
	return 0;
}
float TinhA(int nn)
{
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = (pow(at, 2) + 2) / (2 * at);
		i++;
		at = ahh;
	}
	return ahh;

}