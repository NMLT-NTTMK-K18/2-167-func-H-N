#include <iostream>
using namespace std;
void KiemTra(float, float, float);
int main()
{
	float x, y, z;
	cout << "Nhap x:";
	cin >> x;
	cout << "Nhap y:";
	cin >> y;
	cout << "Nhap z:";
	cin >> z;
	KiemTra(x, y, z);
	return 0;
}
void KiemTra(float xx, float yy, float zz)
{
	if (xx + yy > zz && yy + zz > xx && zz + xx > yy)
	{
		if (xx == yy && yy == zz)
			cout << "Deu";
		else
		{
			if ((xx * xx == yy * yy + zz * zz) ||
				(xx * xx == yy * yy + zz * zz) ||
				(xx * xx == yy * yy + zz * zz))
			{
				if (xx == yy || yy == zz || zz == xx)
					cout << "Deu";
				else
					cout << "Vuong";
			}
			else
			{
				if (xx == yy || yy == zz || zz == xx)
					cout << "Can";
				else
					cout << "Thuong";

			}

		}
	}
	else
		cout << "Khong la Tam Giac";
}