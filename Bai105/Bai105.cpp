#include <iostream>
using namespace std;
float TinhS();
int main()
{
	cout << "Ket qua:" << TinhS();
	return 0;
}
float TinhS()
{
	float s = 0;
	float m = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m += i;
		e = 1 / m;
		s += e;
		i++;


	}
	return s;
}