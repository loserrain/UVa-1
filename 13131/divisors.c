#include <stdio.h>
#include <math.h>

// Accepted 

int main(int argc, char *argv[])
{
	int i, j, s, t, n, k, total;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d", &n, &k);

		total = 0;
		s = (int)sqrt(n);

		for (j=1; j<=s; j++)
		{
			if (n % j == 0)
			{
				if (j % k != 0)
					total = total + j;

				if ((j != n/j) && (n / j) % k != 0)
					total = total + (n / j);
			}
		}

		printf("%d\n", total);
	}

	return 0;
}