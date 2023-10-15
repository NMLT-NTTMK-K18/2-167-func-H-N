#include <iostream>
#include <cmath>
using namespace std;
float ChuyenDo(float);

int main()
{
	float c;
	cout << "Nhap do C: ";
	cin >> c;

	cout << "Do F tuong ung: " << ChuyenDo(c);
	return 1;
}

float ChuyenDo(float cc)
{
	return (float)9 / 5 * cc + 32;
}
