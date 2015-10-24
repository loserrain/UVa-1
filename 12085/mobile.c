#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_range(int start, int end)
{
	int start_q, end_q;
	int end_r;
	int pos=0;
	int power = 0;

	if(end == -1)
	{
		printf("0%d\n", start);
	}
	else
	{
		while(1)
		{
			power = pow(10, pos);
			start_q = start / power; 
			end_q = end / power;

			if(start_q == end_q)
				break;
			else
				pos++;
		}

		end_r = end % power;

		printf("0%d-%d\n", start, end_r);
	}
}

int main(int argc, char *argv[])
{
	int N, i, count;
	int numbers[100005];
	int start, end;
	int case_count = 0;

	while(1)
	{
		start = -1;
		end = -1;

		scanf("%d\n", &N);

		if (N == 0)
			break;

		case_count++;

		printf("Case %d:\n", case_count);

		for(i=0; i<N; i++)
			scanf("%d\n", &numbers[i]);

		for(i=0; i<N-1; i++)
		{
			if(start == -1)
				start = numbers[i];

			if(numbers[i+1] == (numbers[i] + 1))
			{
				end = numbers[i+1];
			}
			else
			{
				print_range(start, end);
				start = -1;
				end = -1;
			}
		}

		if(start == -1)
			start = numbers[N-1];
		
		print_range(start, end);
		printf("\n");
	}

	return 0;
}