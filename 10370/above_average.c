#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int t;
	int n;
	int marks[1005];
	int i, j;
	double sum;
	double average;
	int count_above_average;

	double count_percentage;

	scanf("%d\n", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d", &n);

		sum = 0;
		count_above_average = 0;

		for(j=0; j<n; j++)
		{
			scanf("%d", &marks[j]);
			sum = sum + marks[j];
		}

		average = sum / n;

		for(j=0; j<n; j++)
		{
			if(marks[j] > average)
			{
				count_above_average++;
			}
		}

		count_percentage = (count_above_average * 100.0) / n;

		printf("%.3f%%\n", count_percentage);
	}

	return 0;
}