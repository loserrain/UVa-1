#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, n, s, sum;
	int nums[100005];
	int min_len;

	while(scanf("%d %d", &n, &s) == 2)
	{
		for(i=0; i<n; i++)
		{
			scanf("%d", &nums[i]);
		}

		min_len = 100000;

		for(i=0; i<n; i++)
		{
			sum = nums[i];
			j = i + 1;

			while(sum < s && j < n)
			{
				sum = sum + nums[j];
				j++;
			}

			if(sum >= s)
			{
				if(min_len > (j - i))
					min_len = j - i;
			}
		}

		if(min_len == 100000)
			min_len = 0;

		printf("%d\n", min_len);
	}

	return 0;
}