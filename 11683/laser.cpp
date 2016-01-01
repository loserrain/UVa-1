#include <iostream>

using namespace std;

int main()
{
	int h, l, i, block_height, total_start, consecutive_diff;
	int lengths_to_cut[10005];

	while(1)
	{
		cin >> h;

		if(h == 0)
			break;

		cin >> l;

		for(i=0; i<l; i++)
		{
			cin >> block_height;
			lengths_to_cut[i] = h - block_height;
		}

		total_start = lengths_to_cut[0];
		for(i=1; i<l; i++)
		{
			consecutive_diff = lengths_to_cut[i] - lengths_to_cut[i-1];
			if(consecutive_diff > 0)
			{
				total_start = total_start + consecutive_diff;
			}
		}

		cout << total_start << endl;
	}

	return 0;
}