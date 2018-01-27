#include <iostream>
#include <cstdio>
#include <algorithm>

// Accepted

using namespace std;

int n;
int books[10005];
int m;

int main()
{
	int i, j, res_i, res_j;

	while(cin >> n)
	{
		for(i=0; i<n; i++)
			cin >> books[i];

		cin >> m;

		sort(books, books+n);

		i = 0;
		j = n - 1;

		while (i < j)
		{
			if(books[i] + books[j] < m)
				i++;
			else if (books[i] + books[j] > m)
				j--;
			else
			{
				res_i = i;
				res_j = j;
				i++;
				j--;
			}
		}

		cout << "Peter should buy books whose prices are " << books[res_i] << " and " << books[res_j] << ".\n\n";
	}

	return 0;
}