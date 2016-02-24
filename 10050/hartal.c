#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int t, n, p, h, i, j, k, count;
	int days[4000];
	
	scanf("%d\n", &t);

	for(i=0; i<t; i++)
	{
		count = 0;

		scanf("%d\n", &n);

		for(j=0; j<n; j++)
		{
			days[j] = 0;
		}

		scanf("%d\n", &p);

		for(j=0; j<p; j++)
		{
			scanf("%d\n", &h);

			for(k=(h-1); k<n; k=k+h)
			{
				days[k] = 1;
			}
		}

		for(j=0; j<n; j++)
		{
			if(days[j] == 1)
				count++;
		}

		for(j=5; j<n; j=j+7)
		{
			if(days[j] == 1)
				count--;
		}


		for(j=6; j<n; j=j+7)
		{
			if(days[j] == 1)
				count--;
		}
		printf("%d\n", count);
	}

	return 0;
}