#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int t, n, i, j;
	int counts[11];
	int temp, r;

	scanf("%d\n", &t);

	for(i=0; i<t; i++)
	{
		for(j=0; j<10; j++)
		{
			counts[j] = 0;
		}

		scanf("%d", &n);

		for(j=1; j <= n; j++)
		{
			temp = j;
			
			while(temp != 0)
			{
				r = temp % 10;

				counts[r]++;

				temp = temp / 10;
			}
		}
		for(j=0; j<10; j++)
		{
			printf("%d", counts[j]);

			if(j != 9)
				printf(" ");
			else
				printf("\n");
		}
	}

	return 0;
}