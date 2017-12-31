#include <stdio.h>

// ACCEPTED

int heights[10010];

int main(int argc, char *argv[])
{
	int i, l, h ,r, min_l = 10001, max_r = 0;

	for(i=0; i<10010; i++)
		heights[i] = 0;

	while(scanf("%d %d %d", &l, &h, &r) == 3)
	{
		for(i=l; i<r; i++)
		{
			if(h > heights[i])
				heights[i] = h;

			if(l < min_l)
				min_l = l;

			if(r > max_r)
				max_r = r;
		}
	}

	int count = 0;
	for(i=min_l; i<=max_r; i++)
	{
		if(heights[i] != heights[i-1]) 
		{
			printf("%d %d", i, heights[i]);

			if (i != max_r)
				printf(" ");

			count++;
		}
	}

	printf("\n");

	return 0;
}