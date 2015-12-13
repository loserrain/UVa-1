#include <iostream>

using namespace std;

int main()
{
	int t, n, c, clown_speed, i, j;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cin >> n;

		clown_speed = -1;

		for(j=0; j<n; j++)
		{
			cin >> c;

			if(c > clown_speed)
				clown_speed = c;
		}

		cout << "Case " << (i+1) << ": " << clown_speed << endl;
	}

	return 0;
}