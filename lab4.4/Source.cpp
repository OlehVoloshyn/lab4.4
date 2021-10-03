#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;
	const double PI = 4 * atan(1);
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= (-7 - R))
			y = R;
		else
			if (-7 - R < x && x <= -7 + R)
				y = R - sqrt(R * R - (x + 7) * (x + 7));
			else
				if (-7 + R < x && x <= -4)
					y = R;
				else
					if (-4 < x && x <= 0)
						y = -(R / 4) * x;
					else
						if (0 < x && x <= PI)
							y = sin(x);
						else
							y = x - PI;


		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
