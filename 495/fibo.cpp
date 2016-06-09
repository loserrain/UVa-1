/*
	Wrong Answer: Does not work for large values
*/
#include <iostream>

using namespace std;

long long fibo[5005];

void calculate_fibonacci()
{
	int i;

	fibo[0] = 0;
	fibo[1] = 1;

	for(i=2; i<=5003; i++)
		fibo[i] = fibo[i-1] + fibo[i-2];
}

int main()
{
	int n;

	calculate_fibonacci();

	while(cin >> n)
	{
		cout << "The Fibonacci number for " << n << " is " << fibo[n] << endl;
	}

	return 0;
}