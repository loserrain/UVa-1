#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int t, i, s, d;
	int x, y;

	scanf("%d\n", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d\n", &s, &d);

		x = (s + d) / 2;
		y = (s - d) / 2;

		if (x < 0 || y < 0 || (x+y) != s || (x-y) != d)
		{
			printf("impossible\n");
		}
		else
		{
			printf("%d %d\n", x, y);
		}
	}

	return 0;
}