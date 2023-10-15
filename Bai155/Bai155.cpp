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
	int i = 0;
	while (i <= nn)
	{
		t *= 2;
		cout << t<<" ";
		i++;
	}
}