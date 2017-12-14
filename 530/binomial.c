#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, k, i, C;

	while(1)
	{
		scanf("%d", &n);
		scanf("%d", &k);

		if(n == 0 && k == 0)
			break;

		if(k > (n-k))
			k = n - k;

		C = 1;

		for(i=0; i<k; i++)
		{
			C = (C * (n-i)) / (i + 1);
		}

		printf("%d\n", C);
	}
	return 0;
}
