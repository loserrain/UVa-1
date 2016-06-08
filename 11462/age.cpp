#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, i, ages[2000005];

	while(1)
	{
		cin >> n;

		if(n == 0)
			break;

		for(i=0; i<n; i++)
			cin >> ages[i];

		sort(ages, ages + n);

		for(i=0; i<n; i++)
		{
			cout << ages[i];

			if(i != (n-1))
				cout << " ";
			else
				cout << endl;
		}
	}


	return 0;
}