#include <stdio.h>
#include <math.h>

int get_divisor_count(long n)
{
	long i;
	long t = (long)sqrt(n);
	int count = 0;

	for(i=1; i<=t; i++)
	{
		if(n % i == 0)
			count = count + 2;
	}

	if(n == t*t)
		count--;

	return count;
}

int main(int argc, char *argv[])
{
	int i, N, t, max_divisors_count;
	long L, U, j, max_divisors;

	scanf("%d", &N);

	for(i=0; i<N; i++)
	{
		scanf("%ld %ld", &L, &U);

		max_divisors = L;
		max_divisors_count = 0;
		for(j=L; j<=U; j++)
		{
			t = get_divisor_count(j);

			if(t > max_divisors_count)
			{
				max_divisors_count = t;
				max_divisors = j;
			}
		}

		printf("Between %ld and %ld, %ld has a maximum of %d divisors.\n", 
			L, U, max_divisors, max_divisors_count);
	}

	return 0;
}