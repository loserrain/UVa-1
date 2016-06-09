#include <stdio.h>

/*
	Cool trick used
*/
int get_ones_digits(int n)
{
	if(n == 0)
		return 0;

	long t = 1;
	int count = 1;
	int r;

	while(1)
	{
		if(t < n)
		{		
			t = t*10 + 1;
			count++;
		}

		r = t % n;

		if(t % n == 0)
			break;
		else
			t = r;
	}

	return count;
}

int main()
{
	int n;

	while(scanf("%d\n", &n) == 1)
	{
		printf("%d\n", get_ones_digits(n));
	}

	return 0;
}