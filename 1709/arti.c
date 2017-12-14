#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int i, p, a, b, c, d, n;
	double term, max_till_now, largest_decline;

	while(scanf("%d %d %d %d %d %d\n", &p, &a, &b, &c, &d, &n) == 6)
	{
		max_till_now = -1e+30;
		largest_decline = 0.0;

		for(i=1; i<=n; i++)
		{
			term = p * (sin(a * i + b) + cos(c * i + d) + 2);

			if(largest_decline < (max_till_now - term))
				largest_decline = max_till_now - term;

			if(max_till_now < term)
				max_till_now = term;
		}

		printf("%.8lf\n", largest_decline);
	}

	return 0;
}