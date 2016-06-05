#include <iostream>

using namespace std;

#define MAX_CARRIAGES 55

int main()
{
	int t, n;
	int train[MAX_CARRIAGES];
	int i, j, count;

	cin >> t;

	while(t--)
	{
		count = 0;

		cin >> n;

		for(i=0; i<n; i++)
			cin >> train[i];

		for(i=0; i<(n-1); i++)
		{
			for(j=0; j<(n-i-1); j++)
			{
				if(train[j] > train[j+1])
				{
					int t = train[j];
					train[j] = train[j+1];
					train[j+1] = t;

					count++;
				}
			}
		}

		cout << "Optimal train swapping takes " << count << " swaps." << endl;
	}

	return 0;
}