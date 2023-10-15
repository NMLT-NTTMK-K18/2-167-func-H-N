#include <iostream>
using namespace std;
int TimUocleMax(int);
int main()
{
	int n;
	cout << "NHap n:";
	cin >> n;
	int t = n;
	cout << TimUocleMax(t);
	return 0;
}
int TimUocleMax(int tt)
{
	while (tt % 2 == 0)
		tt /= 2;
	return tt;
}