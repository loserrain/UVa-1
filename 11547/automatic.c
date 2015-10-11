#include <stdio.h>
#include <stdlib.h>

int get_automatic_answer(int n)
{
	int t = (((((567 * n) / 9) + 7492) * 235) / 47) - 498;
	return abs((t % 100) / 10);
}

int main(int argc, char *argv[])
{
	int t;
	int n;
	int i;

	scanf("%d\n", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d\n", &n);
		printf("%d\n", get_automatic_answer(n));
	}

	return 0;
}