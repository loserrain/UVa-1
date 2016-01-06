#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n, t, i, count = 0;
	int sum, average, total_diff, min_moves;
	vector <int> heights;

	while(1)
	{
		cin >> n;
		cin.ignore();

		if(n == 0)
			break;

		count++;

		sum = 0;
		total_diff = 0;

		for(i=0; i<n; i++)
		{
			cin >> t;
			heights.push_back(t);

			sum = sum + t;
		}

		average = sum / n;

		for(i=0; i<n; i++)
		{
			total_diff = total_diff + abs(heights[i] - average);
		}

		min_moves = total_diff / 2;

		cout << "Set #" << count << endl;
		cout << "The minimum number of moves is " << min_moves << "." << endl;
		cout << endl;

		heights.clear();
	}

	return 0;
}