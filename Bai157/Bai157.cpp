#include <iostream>
using namespace std;
void Tinhs(int);
int main()
{
	int n;
	cout << "NHap n:";
	cin >> n;
	Tinhs(n);
	return 0;
}
void Tinhs(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s += 1 / float(i);
		cout << s<<" ";
		i++;
	}

}