#include <stdio.h>

int left[100005];
int right[100005];

int main(int argc, char *argv[])
{
	int b, s, l, r, i;


	while(1)
	{
		scanf("%d %d", &s, &b);

		if (s == 0 && b == 0)
			break;

		for(i=1; i<=s; i++) {
			left[i] = i-1;
			right[i] = i+1;
		}

		left[1] = -1;
		right[s] = -1;

		for(i=0; i<b; i++)
		{

			scanf("%d %d", &l, &r);

			left[right[r]] = left[l];
			if(left[l] != -1)
				printf("%d ", left[l]);
			else
				printf("* ");

			right[left[l]] = right[r];
			if(right[r] != -1)
				printf("%d\n", right[r]);
			else
				printf("*\n");
		}

		printf("-\n");
	}

	return 0;
}