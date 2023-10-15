#include <iostream>
using namespace std;
void GiaiBacNhat(float, float);
int main()
{
	float a, b;
	cin >> a >> b;
	GiaiBacNhat(a, b);
	return 0;
}
void GiaiBacNhat(float aa,float bb)
{
	if (aa == 0) {
		if (bb == 0)
			cout << "VSN";
		else
			cout << "VN";
	}
	else
	{
		float xx;
		xx = -bb / aa;
		cout << xx;

		
	}
}