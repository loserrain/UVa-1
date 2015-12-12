#include <iostream>

using namespace std;

int main()
{
	int t, n, area, num_animals, param, sum, i, j;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cin >> n;

		sum = 0;

		for(j=0; j<n; j++)
		{
			cin >> area >> num_animals >> param;

			sum = sum + area * param;
		}

		cout << sum << endl;
	}

	return 0;
}