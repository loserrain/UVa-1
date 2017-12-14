#include <stdio.h>
#include <math.h>

int digits[10000001] = {0};

int main(int argc, char *argv[])
{
	int n, i, x;
	double t, last = 0;

	for(i=1; i<10000001; i++)
	{
		t = log10(i);
		last = last + t;
		digits[i] = (int)last;
	}

	scanf("%d", &n);

	for(i = 0; i<n; i++)
	{
		scanf("%d", &x);
		printf("%d\n", digits[x] + 1);
	}

	return 0;
}