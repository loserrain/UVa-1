#include <stdio.h>
#include <math.h>

// Accepted

long get_nearest_n(long S)
{
	double y = sqrt(2 * S + 0.25);
	return floor(y - 0.5) + 1;
}

long get_sum_till_n(long n)
{
	return (n * (n + 1)) / 2;
}

int main(int argc, char *argv[])
{
	long s, n, s_n, missing_num;

	while(1)
	{
		scanf("%ld", &s);

		if (s == 0)
			break;

		n = get_nearest_n(s);
		s_n = get_sum_till_n(n);
		missing_num = s_n - s;

		printf("%ld %ld\n", missing_num, n);
	}

	return 0;
}