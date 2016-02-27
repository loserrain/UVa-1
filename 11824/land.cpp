#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

// bool comparison(int a, int b)
// {
// 	return a > b;
// }

int main()
{
	long COST_LIMIT = 5000000;

	int t, n, i, j, x;
	vector<int> land_prices;
	long cost;

	cin >> t;

	for(i=0; i<t; i++)
	{
		land_prices.clear();
		n = 0;

		while(1)
		{
			cin >> x;

			if(x == 0)
				break;

			land_prices.push_back(x);
			n++;
		}

		sort(land_prices.begin(), land_prices.end());

		cost = 0;
		for(j=0; j<n; j++)
		{
			// cout << land_prices[j] << endl;
			cost = cost + (2 * pow(land_prices[j], n-j));
		}

		if(cost <= COST_LIMIT)
			cout << cost<< endl;
		else
			cout << "Too expensive" << endl;
	}

	return 0;
}