/*
	Wrong Answer: Need to figure this out...Maybe the problems to be
	outputted in sorted order
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	int t, n1, n2, n3, i, j, d1, d2, d3, m;
	int problems[10005], first[1005], second[1005], third[1005];

	scanf("%d\n", &t);

	for(i=0; i<t; i++)
	{
		for(j=0; j<=10000; j++)
			problems[j] = 0;

		scanf("%d", &n1);
		for(j=0; j<n1; j++) 
		{
			scanf("%d", &first[j]);
			problems[first[j]] = problems[first[j]] + 1;
		}

		scanf("%d", &n2);
		for(j=0; j<n2; j++)
		{
			scanf("%d", &second[j]);
			problems[second[j]] = problems[second[j]] + 1;
		}

		scanf("%d", &n3);
		for(j=0; j<n3; j++)
		{
			scanf("%d", &third[j]);
			problems[third[j]] = problems[third[j]] + 1;
		}

		d1 = 0;
		d2 = 0;
		d3 = 0;
		m = -1;

		for(j=0; j<n1; j++)
		{
			if(problems[first[j]] == 1)
				d1++;
		}

		for(j=0; j<n2; j++)
		{
			if(problems[second[j]] == 1)
				d2++;
		}

		for(j=0; j<n3; j++)
		{
			if(problems[third[j]] == 1)
				d3++;
		}

		if(d1 > m)
			m = d1;

		if(d2 > m)
			m = d2;

		if(d3 > m)
			m = d3;

		printf("Case #%d:\n", (i+1));
		if(m == d1)
		{
			printf("1");
			printf(" %d", d1);

			for(j=0; j<n1; j++)
			{
				if(problems[first[j]] == 1)
					printf(" %d", first[j]);
			}

			printf("\n");
		}


		if(m == d2)
		{
			printf("2");
			printf(" %d", d2);

			for(j=0; j<n2; j++)
			{
				if(problems[second[j]] == 1)
					printf(" %d", second[j]);
			}

			printf("\n");
		}


		if(m == d3)
		{
			printf("3");
			printf(" %d", d3);

			for(j=0; j<n3; j++)
			{
				if(problems[third[j]] == 1)
					printf(" %d", third[j]);
			}

			printf("\n");
		}
	}

	return 0;
}