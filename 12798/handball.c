#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, m;
	int i, j, count, flag, t;

	while(scanf("%d %d", &n, &m) == 2)
	{
		count = 0;

		for(i=0; i<n; i++)
		{
			flag = 1;
			for(j=0; j<m; j++)
			{
				scanf("%d", &t);

				if(t == 0)
					flag = 0;
			}

			if(flag == 1)
				count++;
		}

		printf("%d\n", count);
	}

	return 0;
}