#include <iostream>
#include <algorithm>
#include <string.h>

#define INF 1000000000

using namespace std;

int main()
{
	char username[25];
	char passwords[25][25];
	char temp_perm[25];
	int absolute_distance[25];
	int i, j, l, max_pos;

	while(!(cin >> username).eof())
	{
		l = strlen(username);
		strcpy(passwords[10], username);

		strcpy(temp_perm, username);
		for(i=1; i<=10; i++)
		{
			prev_permutation(temp_perm, temp_perm + l);
			strcpy(passwords[10-i], temp_perm);
		}

		strcpy(temp_perm, username);
		for(i=1; i<=10; i++)
		{
			next_permutation(temp_perm, temp_perm + l);
			strcpy(passwords[10+i], temp_perm);
		}

		max_pos = 0;
		for(i=0; i<21; i++)
		{
			int min_sum = INF;
			for(j=1; j<l; j++)
			{
				min_sum =min(min_sum, abs(passwords[i][j] - passwords[i][j-1]));
			}

			absolute_distance[i] = min_sum;

			if(absolute_distance[i] > absolute_distance[max_pos])
				max_pos = i;
		}

		cout << passwords[max_pos] << absolute_distance[max_pos] << endl;
	}

	return 0;
}
