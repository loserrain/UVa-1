#include <iostream>

using namespace std;

int calculate_miles_cost(int seconds)
{
	return 10 + (seconds / 30) * 10;
}


int calculate_juice_cost(int seconds)
{
	return 15 + (seconds / 60) * 15;
}

int main()
{
	int t, n, s, i, j;
	int miles_cost, juice_cost;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cin >> n;

		cout << "Case " << (i+1) << ": ";

		miles_cost = 0;
		juice_cost = 0;

		for(j=0; j<n; j++)
		{
			cin >> s;

			miles_cost = miles_cost + calculate_miles_cost(s);
			juice_cost = juice_cost + calculate_juice_cost(s);
		}

		if (miles_cost < juice_cost)
			cout << "Mile " << miles_cost << endl;
		else if (juice_cost < miles_cost)
			cout << "Juice " << juice_cost << endl;
		else
			cout << "Mile Juice " << miles_cost << endl;
	}

	return 0;
}