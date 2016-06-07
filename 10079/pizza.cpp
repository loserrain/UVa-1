#include <iostream>

using namespace std;

long long calculate_sum_till_n(long n)
{
	return (n * (n+1))/2;
}

long long calculate_cuts(long n)
{
	return (calculate_sum_till_n(n) + 1);
}

int main()
{
	long n;
	long long cuts;

	while(1)
	{
		cin >> n;

		if(n < 0)
			break;

		cout << calculate_cuts(n) << endl;
	}

	return 0;
}