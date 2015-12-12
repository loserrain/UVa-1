#include <iostream>

using namespace std;

int main()
{
	int init, a, b, c, deg;
	while(1)
	{
		cin >> init >> a >> b >> c;

		if (!(init || a || b || c))
			break;

		deg = 1080;

		if (init - a < 0)
			deg = deg + (init - a + 40) * 9;
		else
			deg = deg + (init - a) * 9;


		if (b - a < 0)
			deg = deg + (b - a + 40) * 9;
		else
			deg = deg + (b - a) * 9;

		if (b - c < 0)
			deg = deg + (b - c + 40) * 9;
		else
			deg = deg + (b - c) * 9;

		cout << deg << endl;
	}

	return 0;
}
