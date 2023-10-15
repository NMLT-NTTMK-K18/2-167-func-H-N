#include <iostream>
using namespace std;
int ktHoanThien(int);
int main()
{
	int n;
	cout << "NHap n:";
	cin >> n;
	if (ktHoanThien(n == 1))
		cout << "Hoan Thien";
	else
		cout << "Ko Hoan Thien";

	return 0;
}
int ktHoanThien(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s += i;
		i++;
		
	}
	if (s == nn)
		return 1;


	return 0;
}