#include <iostream>;
using namespace std;
float e();
int main()
{
	
	cout << e();
	return 0;
}
float e()
{
	float s = 1;
	
	float m = 1;
	float i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		
		m *= i;
		e = 1 / m;
		s += e;
		i++;


	}
	return s;
}