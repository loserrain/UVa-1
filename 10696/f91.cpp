#include <iostream>

using namespace std;

long f91(long n)
{
	if(n <= 0)
		return -1;
	if(n <= 100)
		return f91(f91(n+11));
	else
		return n - 10;
}

int main()
{
	int i;
	long initial_results[105];
	long n;

	for(i=1; i<=100; i++)
		initial_results[i-1] = f91(i);

	while(1)
	{
		cin >> n;

		if(n == 0)
			break;

		cout << "f91(" << n << ") = ";
 
		if(n <= 100)
			cout << initial_results[n-1] << endl;
		else
			cout << f91(n) << endl;
	}

	return 0;
}