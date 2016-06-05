#include <iostream>

#define MAX_SIZE 105

using namespace std;

int n, m;
char grid[MAX_SIZE][MAX_SIZE];
int final_grid[MAX_SIZE][MAX_SIZE];

void update_final_grid(int i, int j)
{
	int k, l;

	for(k=(i-1); k<=(i+1); k++)
	{
		for(l=(j-1); l<=(j+1); l++)
		{
			if(k == i && l == j)
				continue;

			if(k<0 || l<0)
				continue;

			if(k>=n || l>=m)
				continue;

			if(final_grid[k][l] == -1)
				continue;

			final_grid[k][l] = final_grid[k][l]  + 1;
		}
	}
}

int main()
{
	int i, j;
	int count = 0;

	while(1)
	{
		cin >> n >> m;

		if(n == 0 && m == 0)
			break;

		count++;

		if(count > 1)
			cout << endl;

		cout << "Field #" << count << ":" << endl;
		
		for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				cin >> grid[i][j];

				if(grid[i][j] == '*')
					final_grid[i][j] = -1;
				else
					final_grid[i][j] = 0;
			}
		}

		for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				if(final_grid[i][j] == -1)
				{
					update_final_grid(i, j);
				}
			}
		}

		for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				if(final_grid[i][j] == -1)
					cout << '*';
				else
					cout << final_grid[i][j];
			}

			cout << endl;
		}
	}

	return 0;
}