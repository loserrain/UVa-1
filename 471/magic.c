#include <stdio.h>

#define LIMIT 9876543210L

int check(long n)
{
	int freq[11];
	int x, i;

	for(i=0; i<10; i++)
		freq[i] = 0;

	while(n != 0)
	{
		x = n % 10;
		freq[x]	= freq[x] + 1;

		if(freq[x] > 1)
			return 0;
		n = n / 10;
	}

	return 1;
}

int main(int argc, char *argv[])
{
	int t, count = 0;
	long n;
	long s1, s2, i;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%ld", &n);

		if(count != 0)
			printf("\n");
		count++;

		for(i=1; i*n <= LIMIT; i++)
		{
			s2 = i;
			s1 = s2 * n;

			if(check(s1) && check(s2))
			{
				printf("%ld / %ld = %ld\n", s1, s2, n);
			}
		}
	}

	return 0;
}