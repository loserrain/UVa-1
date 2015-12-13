#include <iostream>

using namespace std;

int main()
{
	int t, n;
	int heights[51];
	int i, j;
	int h, l;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cin >> n;

		for(j=0; j<n; j++)
			cin >> heights[j];

		h = 0;
		l = 0;

		for(j=0; j<(n-1); j++)
		{
			if(heights[j] < heights[j+1])
				h++;

			if(heights[j] > heights[j+1])
				l++;
		}

		cout << "Case " << (i+1) << ": " << h << " " << l << endl;
	}

	return 0;
}