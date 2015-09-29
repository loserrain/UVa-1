#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_cmp(const void *a, const void *b)
{
	const char *aa = (const char *)a;
	const char *bb = (const char *)b;

	return strcmp(aa, bb);
}

int main(int argc, char *argv[])
{
	int i, n, count = 0;
	char countries[2000][80];
	char temp[100];

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%s", countries[i]);
		gets(temp);
	}

	qsort(countries, n, sizeof(countries[0]), string_cmp);

	count = 1;

	for(i=1; i<n; i++)
	{
		if(strcmp(countries[i-1], countries[i]) == 0)
		{
			count++;
		}
		else
		{
			printf("%s %d\n", countries[i-1], count);
			count = 1;
		}
	}

	if(n != 0)
	{
		printf("%s %d\n", countries[n-1], count);
	}

	return 0;
}