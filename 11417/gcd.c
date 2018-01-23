#include <stdio.h>

int gcd(int a, int b)
{
	int r;

	while(b % a != 0)
	{
		r = b % a;
		b = a;
		a = r;
	}

	return a;
}

int main(int argc,char *argv[])
{
	int n;
	int i, j;
	long G;

	while(scanf("%d", &n) == 1)
	{
		if(n == 0)
			break;

		G = 0;
		for(i=1; i<n; i++)
		{
			for(j=i+1; j<=n; j++)
			{
				G = G + gcd(i, j);
			}
		}

		printf("%ld\n", G);
	}


	return 0;
}