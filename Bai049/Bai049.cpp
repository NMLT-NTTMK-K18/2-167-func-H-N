#include <iostream>
#include <iomanip>
using namespace std;
void Uocso(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Uoc so le cua " << n << " la: \n";
	Uocso(n);

	return 1;
}

void Uocso(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << setw(6) << i;
		i++;
	}
}