#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
	int f, r, i, j, count;
	int f_teeth[11];
	int r_teeth[11];

	double ratios[110];
	double spread[110];
	double max_spread;

	while(1)
	{
		cin >> f;

		if (f == 0)
			break; 

		cin >> r;

		for(i=0; i<f; i++)
			cin >> f_teeth[i];

		for(i=0; i<r; i++)
			cin >> r_teeth[i];

		count = 0;
		for(i=0; i<r; i++)
		{
			for(j=0; j<f; j++)
			{
				ratios[count] = (double)r_teeth[i] / (double)f_teeth[j];
				count++;
			}
		}

		sort(ratios, ratios+count);

		// for(i=0; i<count; i++)
		// {
		// 	cout << ratios[i] << endl;
		// }

		max_spread = 0.0;
		for(i=0; i<count-1; i++)
		{
			spread[i] = ratios[i+1] / ratios[i];

			if(spread[i] > max_spread)
				max_spread = spread[i];
		}

		// cout << endl;

		printf("%.2lf\n", max_spread);
	}

	return 0;
}
