#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int get_median_of_three(int values[])
{
	qsort(values, 3, sizeof(int), cmpfunc);
	return values[1];
}

int main(int argc, char *argv[])
{
	int i, t;
	int values[3];

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d", &values[0]);
		scanf("%d", &values[1]);
		scanf("%d", &values[2]);

		printf("Case %d: %d\n", i+1, get_median_of_three(values));
	}

	return 0;
}