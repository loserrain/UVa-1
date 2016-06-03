#include <iostream>

using namespace std;

int main()
{
	int t, a, b, n, sum, count;

	cin >> t;

	while(t--)
	{
		count++;

		cin >> a;
		cin >> b;

		if(a%2 == 0)
			a = a + 1;

		if(b%2 == 0)
			b = b - 1;

		n = ((b - a) / 2) + 1;

		sum = n * (a + n - 1);

		cout << "Case " << count << ": " << sum << endl;
	}

	return 0;
}