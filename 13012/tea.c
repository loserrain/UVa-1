#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, count, i, t;

	while(scanf("%d", &n) == 1)
	{
		count = 0;
		for(i=0; i<5; i++)
		{
			scanf("%d", &t);

			if (t == n)
				count++;		
		}

		printf("%d\n", count);
	}

	return 0;
}