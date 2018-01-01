#include <stdio.h>
#include <stdlib.h>

long nums[1010];
int s, count;
long a, b, c, d, max_d;

int compare(const void *a, const void *b)
{
	return (*(long*)a - *(long*)b);
}

int does_exists(int l, int h, long k)
{
	int mid;
	while(l <= h)
	{
		mid = (l + h) / 2;

		if(nums[mid] == k)
			return 1;
		else if(nums[mid] < k)
			l = mid + 1;
		else
			h = mid - 1;
	}

	return 0;
}

int main(int argc, char *argv[])
{	
	int i, j, k;
	int case_no;

	while(1)
	{
		scanf("%d", &s);

		case_no++;

		if(s == 0)
			break;

		for(i=0; i<s; i++)
		{
			scanf("%ld", &nums[i]);
		}

		qsort(nums, s, sizeof(long), compare);
		
		max_d = -536871912;
		count = 0;
		for(i=0; i<s; i++)
		{
			for(j=i+1; j<s; j++)
			{
				for(k=j+1; k<s; k++)
				{
					a = nums[i];
					b = nums[j];
					c = nums[k];

					if(a != b && c != a && c != b)
					{
						d = a + b + c;

						if(d != a && d != b && d != c && d > max_d)
						{
							if(does_exists(0, s-1, d) == 1)
							{
								max_d = d;
								count++;
							}
						}
					}
				}
			}
		}

		if (count == 0)
			printf("no solution\n");
		else
			printf("%ld\n", max_d);
	}

	return 0;
}