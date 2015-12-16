#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int min_distance;
	int last_r_pos, last_d_pos;
	int l, i;
	string highway;

	while(1)
	{
		cin >> l;

		if(l == 0)
			break;

		cin >> highway;

		last_r_pos = -l;
		last_d_pos = -l;
		min_distance = l;


		for(i=0; i<l; i++)
		{
			if(highway[i] == 'Z')
			{
				min_distance = 0;
				break;
			}
			else if(highway[i] == 'R')
			{
				last_r_pos = i;

				min_distance = min(min_distance, last_r_pos - last_d_pos);
			}
			else if(highway[i] == 'D')
			{
				last_d_pos = i;
				min_distance = min(min_distance, last_d_pos - last_r_pos);
			}
		}

		cout << min_distance << endl;
	}  

	return 0;
}