#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
	int t, i, j;
	long avg_first_part, avg_second_part;
	double x, sum, average, fractional;
	string output;

	cin >> t;

	for(i=0; i<t; i++)
	{
		sum = 0.0;

		for(j=0; j<12; j++)
		{
			cin >> x;
			sum = sum + x;
		}

		average = sum / 12.0;

		avg_first_part = (long)average;

		fractional = average - avg_first_part;
		avg_second_part = avg_first_part % 1000;
		avg_first_part = avg_first_part / 1000;

		cout << i+1 << " $";
		if(avg_first_part > 0)
			cout << avg_first_part << ",";

		printf("%.2lf", avg_second_part+fractional);
		cout << endl;
	}

	return 0;
}