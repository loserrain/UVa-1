#include <stdio.h>

// Accepted 

int main()
{
	int n, costs[1010], dollars, cents, i;
	long total, low_average, high_average, pos_diff, neg_diff, res;

	while(1)
	{
		scanf("%d", &n);

		if (n == 0)
			break;

		total = 0;

		for(i=0; i<n; i++)
		{
			scanf("%d.%d", &dollars, &cents);
			costs[i] = dollars * 100 + cents;

			total = total + costs[i];
		}

		low_average = total / n;


		if(total % n != 0)
			high_average = low_average + 1;
		else
			high_average = low_average;

		pos_diff = 0;
		neg_diff = 0;

		for(i=0; i<n; i++)
		{
			if(costs[i] > high_average)
				pos_diff = pos_diff + (costs[i] - high_average);
			else if (costs[i] < low_average)
				neg_diff = neg_diff + (low_average - costs[i]);
		}

		res = pos_diff > neg_diff ? pos_diff : neg_diff;

		printf("$%.2lf\n", res/100.0);

	}
	return 0;
}