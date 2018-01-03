#include <stdio.h>
#include <math.h>

double get_n(long s)
{
	double y = sqrt(2*s + 0.25);

	return y - 0.5;
}

long get_sum(long n)
{
	return (n * (n + 1)) / 2;
}

int main(int argc, char *argv[])
{
	long t;
	double y;
	long x, z;
	long target, sum_floor, term_no;
	long denom, numer, i;

	while(scanf("%ld", &t) == 1)
	{
		y = get_n(t);

		x = (long)y;

		if(y - x < 0.0000001)
			x = x - 1;

		z = (long)ceil(y);

		target = z + 1;

		sum_floor = get_sum(x);

		term_no = t - sum_floor;

		denom = 0;
		for(i=0; i<term_no; i++)
			denom++;

		numer = target - denom;

		printf("%ld/%ld\n", numer, denom);
	}

	return 0;
}