#include <stdio.h>

int main(int argc, char *argv[])
{
	int S, i, available, count = 0;
	int created[15], required[15];

	while(1)
	{
		scanf("%d", &S);

		if (S < 0)
			break;

		count++;
		printf("Case %d:\n", count);

		for(i=0; i<12; i++)
		{
			scanf("%d", &created[i]);
		}

		for(i=0; i<12; i++)
		{
			scanf("%d", &required[i]);
		}

		available = S;

		for(i=0; i<12; i++)
		{
			if(required[i] <= available)
			{
				printf("No problem! :D\n");
				available = available - required[i] + created[i];
			}
			else
			{
				printf("No problem. :(\n");
				available = available + created[i];
			}
		}
	}

	return 0;
}