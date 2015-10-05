#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char map[30];

void fill_map()
{
	int i, t = 2;

	for(i=0; i<=23; i=i+3)
	{
		map[i] = t;
		map[i+1] = t;
		map[i+2] = t;

		if(i == 15 || i == 22)
		{
			map[i+3] = t;
			i=i+1;
		}

		t++;
 	}
}

int main(int argc, char *argv[])
{
	int i;

	char temp[100];

	fill_map();

	while(scanf("%s", temp) != EOF)
	{
		int l = strlen(temp);

		for(i=0; i<l; i++)
		{
			if(temp[i] >= 65 && temp[i] <= 90)
			{
				int t = temp[i] - 'A';
				printf("%d", map[t]);
			}
			else
			{
				printf("%c", temp[i]);
			}
		}

		printf("\n");
	}

	return 0;
}