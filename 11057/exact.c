#include <stdio.h>

int n;
int books[10005];
int mask[1000005];
int m;

int main(int argc, char *argv[])
{
	int i, t, d, min_diff, min_i, min_j;

	while(scanf("%d", &n) == 1)
	{
		for(i=0; i<=1000000; i++)
			mask[i] = 0;

		for(i=0; i<n; i++)
		{
			scanf("%d", &books[i]);
			mask[books[i]]++;
		}

		scanf("%d", &m);

		min_diff = 2000005;
		min_i = 0;
		min_j = 0;
		for(i=0; i<n; i++)
		{
			t = m - books[i];

			if (t == books[i])
			{
				if (mask[t] > 1)
				{
					min_i = books[i];
					min_j = t;
					break;
				}
			} 
			else if (books[i] < t)
			{
				if (mask[t] > 0)
				{
					d = t - books[i];

					if (d < min_diff)
					{
						min_diff = d;
						min_i = books[i];
						min_j = t;
					}
				}
			}
		}

		printf("Peter should buy books whose prices are %d and %d.\n", min_i, min_j);
		printf("\n");
	}

	return 0;
}