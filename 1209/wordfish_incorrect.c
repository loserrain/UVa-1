/*
	need to fix this one. wrtingin another with STLs
	next and prev permutation functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char username[25];
char passwords[25][25];
char next_perm[25];
int absolute_dist[25];

int next_perm_cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

void get_next_permutation(char str[])
{
	int l = strlen(str);
	int i, temp=0, minpos=0;

	strcpy(next_perm, str);

	for(i=(l-1); i>0; i--)
	{
		if(next_perm[i] > next_perm[i-1])
		{
			temp = i - 1;
			break;
		}
	}

	minpos = temp + 1;

	for(i=(temp+1); i<l; i++)
	{
		if(next_perm[i] > next_perm[temp] && next_perm[i] < next_perm[minpos])
			minpos = i;
	}

	char t = next_perm[temp];
	next_perm[temp] = next_perm[minpos];
	next_perm[minpos] = t;

	qsort(next_perm+temp+1, l-temp-1, sizeof(char), next_perm_cmpfunc);
}


void get_prev_permutation(char str[])
{
	int l = strlen(str);
	int i, j, temp=0, minpos=0;

	strcpy(next_perm, str);
	printf("str: %s\n", str);

	for(i=(l-1); i>0; i--)
	{
		if(next_perm[i] < next_perm[i-1])
		{
			temp = i - 1;
			break;
		}
	}

	minpos = temp + 1;

	for(i=(temp+1); i<l; i++)
	{
		if(next_perm[i] < next_perm[temp] && next_perm[i] > next_perm[minpos])
			minpos = i;
	}

	char t = next_perm[temp];
	next_perm[temp] = next_perm[minpos];
	next_perm[minpos] = t;

	printf("1st step Perm: %s\n", next_perm);

	int count = 0;
	for(i=(temp+1); i<l; i++)
	{
		count++;
		printf("i: %d\n", i);
		for(j=(temp+1); j<(l - count); j++)
		{
			printf("j: %d\n", j);
			if(next_perm[j] < next_perm[j+1])
			{
				printf("Swapping j: %d\n", j);
			
				t = next_perm[j+1];
				next_perm[j+1] = next_perm[j];
				next_perm[j] = t;
			}
		}
	}

	printf("Length: %d\n", l);
	printf("Temp: %d\n", temp);
	printf("Perm: %s\n", next_perm);
	printf("\n");
}

void calculate_absolute_distances()
{
	int i, j;
	int sum;
	int l;

	for(i=0; i<21; i++)
	{
		sum = 0;
		l = strlen(passwords[i]);

		for(j=1; j<l; j++)
		{
			sum = sum + (passwords[i][j] - passwords[i][j-1]);
		}

		absolute_dist[i] = abs(sum);
	}
}

int main(int argc, char *argv[])
{
	int i;
	int min, minpos;

	while(scanf("%s\n", username) != EOF)
	{
		printf("Username: %s\n", username);

		strcpy(passwords[10], username);

		for(i=0; i<10; i++)
		{
			get_next_permutation(passwords[10+i]);
			strcpy(passwords[10+i+1], next_perm);
		}


		for(i=0; i<10; i++)
		{
			get_prev_permutation(passwords[10-i]);
			strcpy(passwords[10-i-1], next_perm);
		}

		calculate_absolute_distances();
		
		min = absolute_dist[0];
		minpos = 0;

		for(i=0; i<21; i++)
		{
			printf("%d: %s\n", i, passwords[i]);
			printf("%d\n", absolute_dist[i]);

			if(absolute_dist[i] < min)
			{
				min = absolute_dist[i];
				minpos = i;
			}
		}

		printf("%s\n", passwords[minpos]);
	}

	return 0;
}
