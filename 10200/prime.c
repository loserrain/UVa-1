#include <stdio.h>
#include <math.h>

int term(int n)
{
	return n*n + n + 41;
}

int is_prime(int n)
{
	int i;
	int x = sqrt(n) + 1;

	for(i=2; i<=x; i++)
	{
		if(n % i == 0)
			return 0;
	}

	return 1;
}

int main(int argc, char *argv[]) 
{
	int a, b, i, count_prime, t, u;
	double perc;

	while(scanf("%d %d", &a, &b) == 2)
	{
		count_prime = 0;
		for(i=a; i<=b; i++)
		{
			t = term(i);
			u = is_prime(t);

			if(u == 1)
				count_prime++;
		}

		perc = ((double)count_prime / (b - a + 1)) * 100;

		printf("%.2lf\n", perc);
	}

	return 0;
}