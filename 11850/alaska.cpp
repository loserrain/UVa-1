#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n, t, i, flag;
	vector<int> stations;

	while(1)
	{
		cin >> n;

		if(n == 0)
			break;

		stations.clear();

		stations.push_back(0);
		for(i=0; i<n; i++)
		{
			cin >> t;

			stations.push_back(t);
		}

		stations.push_back(1422);

		sort(stations.begin(), stations.end());

		t = stations.size();
		flag = 0;

		for(i=1; i < t; i++) {
			if(stations[i] - stations[i-1] > 200)
			{
				flag = 1;
				break;
			}
		}

		// As Dawson Junction has no staton hence,
		// on the return trip need to find the station
		// within 100 mile proximity
		if(stations[t-1] - stations[t-2] > 100)
			flag = 1;

		if(flag == 1)
			cout << "IMPOSSIBLE" << endl;
		else
			cout << "POSSIBLE" << endl;
	}

	return 0;
}