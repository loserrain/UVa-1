#include <stdio.h>
#include <math.h>

// ACCEPTED

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
	int s[10010] = {0};
	int a, b, i, count_prime, t, u;
	double perc;

	for(i=0; i<=10000; i++)
	{
		s[i+1] = s[i];

		if(is_prime(term(i)) == 1)
			s[i+1]++;
	}

	while(scanf("%d %d", &a, &b) == 2)
	{
		count_prime = s[b+1] - s[a];
		perc = ((double)count_prime / (double)(b - a + 1)) * 100 + 1e-6;

		printf("%.2lf\n", perc);
	}

	return 0;
}