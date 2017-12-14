#include <stdio.h>

int main(int argc, char *argv[])
{
	int b, s;
	int count = 0;

	while(1)
	{
		count++;
		scanf("%d %d", &b, &s);

		if(b == 0 && s == 0)
			break;

		printf("Case %d: ", count);
		if(b == 1)
			printf(":-\\\n");
		else if(b == s)
			printf(":-|\n");
		else if(b < s)
			printf(":-|\n");
		else
			printf(":-(\n");
	}

	return 0;
}