#include <iostream>

using namespace std;

int count_number_of_collatz_terms(long n, long l)
{
	int count = 0;

	while(n != 1 && n <= l)
	{
		count++;

		if(n % 2 == 0)
			n = n / 2;
		else
			n = 3 * n + 1;
	}

	if(n == 1)
		count++;

	return count;
}

int main()
{
	long n, l, res;
	int count = 0;

	while(1)
	{
		cin >> n >> l;

		if(n < 0 && l < 0)
			break;

		count++;
		
		res = count_number_of_collatz_terms(n, l);

		cout << "Case " << count;
		cout << ": A = " << n;
		cout << ", limit = " << l;
		cout << ", number of terms = " << res << endl;
	}

	return 0;
}