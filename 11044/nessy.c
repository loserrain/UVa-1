#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int t;
	int n, m;
	int x, y, i;

	scanf("%d\n", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d\n", &n, &m);

		n = n - 2;
		m = m - 2;

		x = n / 3;
		y = m / 3;

		if ((n%3) != 0)
			x = x + 1;

		if ((m%3) != 0)
			y = y + 1;

		printf("%d\n", (x*y));
	}

	return 0;
}