#include <stdio.h>

int get_n_digits(int n)
{
	int x = 0;

	while(n > 0)
	{
		x = x + 1;
		n = n / 10;
	}

	return x;
}


int get_sum_digits(int n)
{
	int x = 0;

	while(n > 0)
	{
		x = x + (n % 10);
		n = n / 10;
	}

	return x;
}

int main(int argc, char *argv[])
{
	int t, n;
	int i, j, lim, x, y, z, ans;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d", &n);

		x = get_n_digits(n);
		lim = n - 9*x - 1;
		ans = 0;

		for(j=lim; j<=n; j++)
		{
			y = get_sum_digits(j);
			z = j + y;

			if (z == n)
			{
				ans = j;
				break;
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}