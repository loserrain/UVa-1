#include <stdio.h>

typedef struct 
{
	int consumption;
	int state;
} Device;

int main(int argc, char *argv[])
{
	int n, m, c;
	int max_consumption;
	int current_consumption;
	int i, t;
	int count = 0;

	Device device[40];
	
	while((scanf("%d %d %d", &n, &m, &c) == 3) && !((n == 0) && (m == 0) && (c == 0)))
	{
		count++;
	
		printf("Sequence %d\n", count);

		for(i=0; i<n; i++)
		{
			scanf("%d", &device[i].consumption);
			device[i].state = 0;
		}

		max_consumption = 0;
		current_consumption = 0;

		for(i=0; i<m; i++)
		{
			scanf("%d", &t);

			if(device[t-1].state == 0)
			{
				current_consumption += device[t-1].consumption;
				device[t-1].state = 1;
			}
			else
			{
				current_consumption -= device[t-1].consumption;
				device[t-1].state = 0;
			}

			if(max_consumption < current_consumption)
			{
				max_consumption = current_consumption;
			}
		}

		if(max_consumption > c)
		{
			printf("Fuse was blown.\n");
		}
		else
		{
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n", max_consumption);
		}
	
		printf("\n");
	}

	return 0;
}