#include <stdio.h>

int main(int argc, char *argv[])
{
	int t;
	long long s, x;

	while(scanf("%d", &t) == 1)
	{
		x = (t * (t + 1)) / 2;
		s = x * x;

		printf("%lld\n", s);
	}

	return 0;
}