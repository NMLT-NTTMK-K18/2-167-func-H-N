#include <iostream>
#include <cmath>
using namespace std;
float ChuyenDo(float);

int main()
{
	float f;
	cout << "Nhap do F: ";
	cin >> f;

	cout << "Do C tuong ung: " << ChuyenDo(f);
	return 1;
}

float ChuyenDo(float ff)
{
	return (float)5 / 9 * (ff - 32);
}
