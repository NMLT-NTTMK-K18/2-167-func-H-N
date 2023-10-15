#include <iostream>
using namespace std;
float TinhA(int );
int main()
{
	int n;

	cout << "Nhap n:";
	cin >> n;
	cout << TinhA(n) ;

}
float TinhA(int nn)
{
	float at = 2;
	float ahh;
	int i = 2;
	while (i <= nn)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}