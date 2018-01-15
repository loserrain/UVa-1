#include <stdio.h>

// Needs work

int gcd(int a, int b)
{
	int r = b % a;

	while(r != 0)
	{
		b = a;
		a = r;
		r = b % a;
	}

	return a;
}

int main(int argc, char *argv[])
{
	int t, len, i, j, max, x;
	int m[105];
	char temp;

	scanf("%d", &t);

	while(t--)
	{
		len = 0;

		do
		{
			scanf("%d%c", &m[i], &temp);
			len++;
		} while(temp != '\n');

		for(i=0; i<len; i++)
			printf("num: %d\n", m[i]);

		max = 1;
		for(i=0; i<len; i++)
		{
			for(j=i+1; j<len; j++)
			{
				x = gcd(m[i], m[j]);

				if(x > max)
					max = x;
			}
		}

		printf("%d\n", max);
	}

	return 0;
}