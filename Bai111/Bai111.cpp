#include <iostream>;
using namespace std;
float PI();
int main()
{
	
	cout << PI();
	return 0;
}
float PI()
{
	float s = 3;
	int dau = 1;
	float e = 3;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = 4 / ((float)i*(i+1)*(i+2));
		s = s + dau * e;
		
		dau = -dau;
		i += 2;
	}
	return s;
}