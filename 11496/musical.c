#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, count, i;
	int magnitudes[10005];

	while(1)
	{
		scanf("%d\n", &n);

		if(n == 0)
			break;

		for(i=0; i<n; i++)
		{
			scanf("%d", &magnitudes[i]);
		}

		count = 0;

		for(i=1; i<(n-1); i++)
		{
			if((magnitudes[i] < magnitudes[i+1]) && (magnitudes[i] < magnitudes[i-1]))
				count++;
			else if((magnitudes[i] > magnitudes[i+1]) && (magnitudes[i] > magnitudes[i-1]))
				count++;
		}

		if(n == 2)
		{
			count = 2;
		}
		else
		{
			if((magnitudes[0] < magnitudes[1]) && (magnitudes[0] < magnitudes[n-1]))
				count++;
			else if((magnitudes[0] > magnitudes[1]) && (magnitudes[0] > magnitudes[n-1]))
				count++;


			if((magnitudes[n-1] < magnitudes[n-2]) && (magnitudes[n-1] < magnitudes[0]))
				count++;
			else if((magnitudes[n-1] > magnitudes[n-2]) && (magnitudes[n-1] > magnitudes[0]))
				count++;
		}

		printf("%d\n", count);
	}

	return 0;
}