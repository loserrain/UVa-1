#include <iostream>

using namespace std;

int main()
{
	int t;
	int n;
	int shop_locations[25];
	int l, r, i, j;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cin >> n;

		for(j=0; j<n; j++)
			cin >> shop_locations[j];

		l = shop_locations[0];
		r = shop_locations[0];

		for(j=0; j<n; j++)
		{
			if(shop_locations[j] < l)
				l = shop_locations[j];

			if(shop_locations[j] > r)
				r = shop_locations[j];
		}

		cout << 2 * (r - l) << endl;
	}

	return 0;
}