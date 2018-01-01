#include <stdio.h>

#define GRID_SIZE 1025

// Accepted 

int main(int argc, char *argv[])
{
	int killed[GRID_SIZE+5][GRID_SIZE+5];
	int d, n, x, y, pop, i, j, t, u;
	int x_min, x_max, y_min, y_max;
	int max_x, max_y, max_killed;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &d);
		scanf("%d", &n);

		for(i=0; i<GRID_SIZE; i++)
			for(j=0; j<GRID_SIZE; j++)
				killed[i][j] = 0;

		for(u=0; u<n; u++)
		{
			scanf("%d %d %d", &x, &y, &pop);

			x_min = (x - d) > 0? (x-d): 0;
			x_max = (x + d) < GRID_SIZE? (x+d): GRID_SIZE-1;

			y_min = (y - d) > 0? (y-d): 0;
			y_max = (y + d) < GRID_SIZE? (y+d): GRID_SIZE-1;

			for(i=x_min; i<=x_max; i++)
				for(j=y_min; j<=y_max; j++)
					killed[i][j] = killed[i][j] + pop;
		}

		max_killed = 0;
		max_x = 0;
		max_y = 0;
		for(i=0; i<GRID_SIZE; i++)
		{
			for(j=0; j<GRID_SIZE; j++)
			{
				if(killed[i][j] > max_killed)
				{
					max_killed = killed[i][j];
					max_x = i;
					max_y = j;
				}
			}
		}

		printf("%d %d %d\n", max_x, max_y, max_killed);
	}

	return 0;
}