#include <iostream>
using namespace std;
float PI();
int main()
{
	cout << PI();
	return 0;
}
float PI()
{
	float s = 4 - 2 / 4 - 1 / 5 - 1 / 6;
	float t = 1;
	float e = 1;
	float i = 1;
	while (e > pow(10, -6))
	{
		t = t * 16;
		e = (4 / (8*i + 1) - 2 / (8*i + 4) - 1 / (8*i + 5) -1 / (8*i + 6)) / t;
		s += e;
		i++;
	}
	return s;

}
