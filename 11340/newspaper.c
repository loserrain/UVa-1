/*
	Slightly funny....But there is possibility of negative char 
	values maybe. Hence had to add 256 offest to all char values
	before assigning in array
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int map[512];
char temp[10005];


int main(int argc, char *argv[])
{
	int t, k, m;
	int i, j, p, val;
	char ch;
	unsigned long long cost;
	
	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		for(j=0; j<512; j++)
		{
			map[j] = 0;
		}

		scanf("%d\n", &k);
		
		for(j=0; j<k; j++)
		{
			ch = getchar();
			scanf("%d\n", &val);

			map[ch+256] = val;
		}

		scanf("%d\n", &m);

		cost = 0;
		for(j=0; j<m; j++)
		{
			gets(temp);
			int len = strlen(temp);
			for(p=0; p<len ; p++)
			{
				cost = cost + map[temp[p] + 256];	
			}
		}

		printf("%.2lf$\n", (double)cost/100.0);
	}

	return 0;
}