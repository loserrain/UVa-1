#include <iostream>

using namespace std;

int sum_digits(long n)
{
	long r = 0;

	if((n / 10) == 0)
	{
		return n;
	}
	else
	{
		while(n != 0)
		{
			r = r + (n%10);
			n = n / 10;
		}

		return sum_digits(r);
	}
}

int main()
{
	long num;

	while(1)
	{
		cin >> num;

		if(num == 0)
			break;

		cout << sum_digits(num) << endl;
	}

	return 0;
}