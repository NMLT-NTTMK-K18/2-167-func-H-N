#include <iostream>
using namespace std;
int ktNguyenTo(int);
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	if (ktNguyenTo(n) == 1)
		cout << "Nguyen To";
	else 
		cout << "Ko Nguyen To";
	return 0;
}
int ktNguyenTo(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		return 1;
	return 0;
}
