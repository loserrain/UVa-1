/*
	Submitted Code
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long factorial[21];

int cmpfunc(const void* a, const void* b)
{
	return (*(char*)a - *(char*)b);
}

void populate_factorials()
{
	int i;

	factorial[0] = 1;

	for(i=1; i<21; i++)
	{
		factorial[i] = i * factorial[i-1];
	}
}

int main(int argc, char *argv[])
{
	int i, j;
	int t;
	long long n;
	char s[21];
	populate_factorials();

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%s", s);
		scanf("%lld", &n);

		int l = strlen(s);

		qsort(s, l, sizeof(char), cmpfunc);

		long long p;
		int q;
		
		for(j=0; j<l; j++)
		{
			p = factorial[l-j-1];
			q = n / p;
			n = n % p;

			if(q == 0)
				continue;

			char key = s[q+j];
			int u = q+j-1;

			while(u >= j)
			{
				s[u+1] = s[u];
				u--;
			}

			s[j] = key;
		}

		printf("%s\n", s);
	}

	return 0;
}