#include <stdio.h>

int cycle_lengths[10100];
int p, q;
	
int get_cycle_length(int n)
{
	// printf("n: %d\n", n);
	
	if (cycle_lengths[n] != 0)
	{
		return cycle_lengths[n];
	}

	int cycle = 1;
	int t = n;

	while(t != 1)
	{
		if(t % 2)
			t = 3 * t + 1;
		else
			t = t / 2;

		// printf("\tt: %d\n", t);
	
		if(t >= p && t <= q)
		{
			if(cycle_lengths[t] != 0)
			{
				cycle = cycle + cycle_lengths[t];
				break;
			}
		}

		cycle++;
	}

	cycle_lengths[n] = cycle;

	return cycle;
}

int main(int argc, char *argv[])
{
	int i, x, max;
	int a, b;

	for(i=0; i<10100; i++)
	{
		cycle_lengths[i] = 0;
	}

	while(scanf("%d %d", &a, &b) != EOF)
	{
		max = 0;

		if(a > b)
		{
			p = b;
			q = a;
		}
		else
		{
			p = a;
			q = b;
		}

		for(i=p; i<=q; i++)
		{
			x = get_cycle_length(i);

			if(x > max)
			{
				max = x;
			}

			// printf("x: %d\n\n", x);
		}

		printf("%d %d %d\n", a, b, max);
	}

	return 0;
}