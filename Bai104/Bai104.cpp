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
	float e = 0.5;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 1 / ((float)i*(i+1));
		s += e;
		i++;


	}
	return s;
}