#include <stdio.h>

int nums[50005];
int flags[1000005];

int get_set_length(int n, int m)
{
	int i, count = 0;

	for(i=n; i < m; i++)
	{
		if(flags[nums[i]] == 0)
			count++;
		
		flags[nums[i]] = 1;
	}


	for(i=n; i < m; i++)
	{
		flags[nums[i]] = 0;
	}

	return count;
}


int main(int argc, char *argv[])
{
	int i, count;
	int n, m;
	char cmd[5];
	int x, y;

	scanf("%d %d\n", &n, &m);

	for(i=0; i<n; i++)
	{
		scanf("%d", &nums[i]);
		flags[i] = 0;
	}

	for(i=0;i<m; i++)
	{
		scanf("%s %d %d", cmd, &x, &y);

		if(cmd[0] == 'M')
		{
			nums[x] = y;
		}
		else if(cmd[0] == 'Q')
		{
			count = get_set_length(x, y);

			printf("%d\n", count);
		}
	}

	return 0;
}