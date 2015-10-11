#include <stdio.h>
#include <stdlib.h>

void print_country(int n, int m, int x, int y)
{
	if(x == n || y == m)
	{
		printf("divisa");
	
	}
	else
	{		
		if(y > m)
			printf("N");
		else
			printf("S");

		if(x > n)
			printf("E");
		else
			printf("O");
	}

	printf("\n");
}

int main(int argc, char *argv[])
{
	int k;
	int n, m;
	int x, y;

	int i, j;

	scanf("%d\n", &k);

	while(k != 0)
	{
		scanf("%d %d\n", &n, &m);

		for(i=0; i<k; i++)
		{
			scanf("%d %d\n", &x, &y);

			print_country(n, m, x, y);
		}

		scanf("%d", &k);
	}


	return 0;
}