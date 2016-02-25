#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i, car, diff, t, flag;
	int pos[1005];

	while(1)
	{	
		for(i=0; i<1005; i++)
			pos[i] = -1;

		flag = 0;

		scanf("%d\n", &n);

		if(n == 0)
			break;

		for(i=0; i<n; i++)
		{
			scanf("%d %d\n", &car, &diff);
			t = i + diff;

			if(t < 0 || t >= n)
			{
				flag = 1;
				continue;
			}

			if(pos[t] != -1)
			{
				flag = 1;
				continue;
			}

			pos[t] = car; 
		}

		if(flag == 1)
		{
			printf("-1\n");
		}
		else
		{
			for(i=0; i<n; i++)
			{
				printf("%d", pos[i]);

				if(i != (n-1))
					printf(" ");
				else
					printf("\n");
			}
		}
	}
	return 0;
}