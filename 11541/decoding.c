#include <stdio.h>

int main(int argc, char *argv[])
{
	int t, k, i, n;
	char ch;

	scanf("%d\n", &t);

	for(k=0; k<t; k++)
	{
		printf("Case %d: ", k+1);
		while(1)
		{
			scanf("%c", &ch);

			if(ch == '\n')
				break;

			scanf("%d", &n);

			for(i=0; i<n; i++)
				printf("%c", ch);
		}

		printf("\n");
	}

	return 0;
}
