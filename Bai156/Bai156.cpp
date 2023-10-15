#include <iostream>
using namespace std;
void Tinht(int);
int main()
{

	int n;
	cout << "NHap n:";
	cin >> n;
	Tinht(n);
	return 0;
}
void Tinht(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t *= i;
		cout << t << " ";
		i++;
	}
}