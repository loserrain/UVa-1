#include <iostream>

using namespace std;

long calculate_quadratic_function(int a, int b, int c, int x)
{
	return (a * x * x) + (b * x) + c;
}

int main()
{
	int a, b, c, l, d, i, count;

	while(1)
	{
		cin >> a >> b >> c >> d >> l;

		if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0)
			break;

		count = 0;

		for(i=0; i<=l; i++)
		{
			if(calculate_quadratic_function(a, b, c, i) % d == 0)
				count++;
		}

		cout << count << endl;
	}


	return 0;
}
