#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int t, n, i, j, k, l, temp, total;
	int move[105];
	string input;

	cin >> t;

	for(i=0; i<t; i++)
	{
		scanf("%d\n", &n);

		for(j=0; j<n; j++)
		{
			getline(cin, input);

			if(input[0] == 'L')
				move[j] = -1;
			else if(input[0] == 'R')
				move[j] = 1;
			else
			{
				temp = 0;
				l = input.length();
				
				for(k=8; k<l; k++)
				{
					temp = 10 * temp + (input[k] - '0');
				}

				move[j] = move[temp-1];
			}
		}

		total = 0;
		for(j=0; j<n; j++)
			total = total + move[j];

		cout << total << endl;
	}

	return 0;
}