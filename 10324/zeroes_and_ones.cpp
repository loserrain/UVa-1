#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char input[1000005];
	int n;
	int i, j, count = 0;
	int p, q, t, count_zero, count_one;

	while(scanf("%s\n", input) != EOF)
	{
		if(input[0] == '\n')
			break;

		count++;
		cout << "Case " << count << ":" << endl;


		scanf("%d\n", &n);

		for(p=0; p<n; p++)
		{

			scanf("%d %d\n", &i, &j);

			if(i > j)
			{
				t = i;
				i = j;
				j = t;
			}

			count_zero = 0;
			count_one = 0;

			for(q=i; q<=j; q++)
			{
				if(input[q] == '0')
					count_zero++;
				else
					count_one++;
			}

			if(count_zero == 0 || count_one == 0)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}

	return 0;
}