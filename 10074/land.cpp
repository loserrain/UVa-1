#include <iostream>

#define MAX_NUMBER_OF_NUMBERS 150
#define NEG_INF -100000

using namespace std;

int n, m;
int numbers[MAX_NUMBER_OF_NUMBERS][MAX_NUMBER_OF_NUMBERS];
int cummulative_sum_columns[MAX_NUMBER_OF_NUMBERS][MAX_NUMBER_OF_NUMBERS];

void calculate_cumulative_column_sums()
{
	int i, j;

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(i==0)
				cummulative_sum_columns[i][j] = numbers[i][j];
			else
				cummulative_sum_columns[i][j] = cummulative_sum_columns[i-1][j] + numbers[i][j];
		}
	}
}

int get_max_sub_array(int arr[])
{
	int i;
	int max_sum, max_start, max_end;
	int curr_sum, curr_start, curr_end;

	max_sum = arr[0];
	max_start = 0;
	max_end = 0;

	curr_sum = 0;
	curr_start = 0;
	
	for(i=0; i<m; i++)
	{
		curr_end = i;
		curr_sum = curr_sum + arr[curr_end];

		if(max_sum < curr_sum)
		{
			max_sum = curr_sum;
			max_start = curr_start;
			max_end = curr_end;
		}

		if(curr_sum < 0)
		{
			curr_sum = 0;
			curr_start = curr_end + 1;
		}
	}

	return max_sum;
}

int get_max_sum_rectangle()
{
	int i, j, k, temp_column_sum, t, max_sum;
	int sum_columns[MAX_NUMBER_OF_NUMBERS];

	max_sum = NEG_INF;

	for(i=0; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			for(k=0; k<m; k++)
			{
				if(i == 0)
					temp_column_sum = cummulative_sum_columns[j][k];
				else
					temp_column_sum = cummulative_sum_columns[j][k] - cummulative_sum_columns[i-1][k];

				sum_columns[k] = temp_column_sum;
				// cout << sum_columns[k] << " ";
			}

			// cout << endl;

			t = get_max_sub_array(sum_columns);

			// cout << i << " " << j << " -> " << t << endl << endl;

			if(t > max_sum)
				max_sum = t;
		}
	}

	return max_sum;
}

int main()
{
	int t, i, j, res;

	while(1)
	{
		cin >> n >> m;

		if(n == 0 && m == 0)
			break;

		for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				cin >> t;

				if(t == 0)
					numbers[i][j] = 1;
				else
					numbers[i][j] = -105;
			}
		}

		calculate_cumulative_column_sums();

		res = get_max_sum_rectangle();

		if(res < 0)
			res = 0;

		cout << res << endl;
	}

	return 0;
}