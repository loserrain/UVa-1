#include <iostream>

using namespace std;

int calculate_b1(int n)
{
	int count = 0;

	while(n)
	{
		if(n & 1)
			count++;

		n = n >> 1;
	}

	return count;
}


int calculate_b2(int n)
{
	int hex_repr = 0;

	while(n)
	{
		hex_repr = hex_repr*16 + (n%10);
		n = n /10; 
	}

	return calculate_b1(hex_repr);
}

int main()
{
	int t, n, b1, b2;

	cin >> t;

	while(t--)
	{
		cin >> n;

		b1 = calculate_b1(n);
		b2 = calculate_b2(n);

		cout << b1 << " " << b2 << endl;
	}

	return 0;
}