#include <stdio.h>

long jack[1000005], jill[1000005];
int n, m;
int i, t, count;
	
int binary_search(int len, long k)
{
	int l = 0, h = len - 1, mid;

	while(l <= h)
	{
		mid = (l + h) / 2;

		if(jill[mid] == k)
			return 1;
		else if(jill[mid] < k)
			l = mid + 1;
		else
			h = mid - 1;
	}

	return 0;
}

int main(int argc, char *argv[])
{
	while(1)
	{
		scanf("%d %d", &n, &m);

		if(n == 0 && m == 0)
			break;


		for(i=0; i<n; i++)
			scanf("%ld", &jack[i]);

		for(i=0; i<m; i++)
			scanf("%ld", &jill[i]);

		count = 0;

		for(i=0; i<n; i++)
		{
			t = binary_search(m, jack[i]);

			if (t == 1)
				count++;
		}

		printf("%d\n", count);

	}

	return 0;
}