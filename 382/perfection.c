#include <stdio.h>
// ACCEPTED
int main(int argc, char *argv[])
{
	int n, sum, i;

	printf("PERFECTION OUTPUT\n");
	while(1) 
	{
		scanf("%d", &n);

		if(n == 0)
			break;

		sum = 0;

		for(i = 1; i < n; i++)
		{
			if(n % i == 0)
				sum = sum + i;
		}

		printf("%5d  ", i);
		if(sum == n)
			printf("PERFECT\n");
		else if (sum > n)
			printf("ABUNDANT\n");
		else
			printf("DEFICIENT\n");
	}
	printf("END OF OUTPUT\n");

	return 0;
}