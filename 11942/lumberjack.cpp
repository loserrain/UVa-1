#include <iostream>

using namespace std;

int NUMBER_OF_MEN = 10;

int main()
{
	int n, i, j, flag_asc, flag_desc;
	int beards[11];

	cin >> n;

	cout << "Lumberjacks:" << endl;

	for(i=0; i<n; i++)
	{
		flag_asc = 0;
		flag_desc = 0;

		for(j=0; j < NUMBER_OF_MEN; j++)
			cin >> beards[j];

		for(j=0; j < (NUMBER_OF_MEN - 1); j++)
		{
			if(beards[j] > beards[j+1])
			{
				flag_asc = 1;
				break;
			}
		}

		for(j=0; j < (NUMBER_OF_MEN - 1); j++)
		{
			if(beards[j] < beards[j+1])
			{
				flag_desc = 1;
				break;
			}
		}

		if(flag_asc == 0 || flag_desc == 0)
			cout << "Ordered" << endl;
		else
			cout << "Unordered" << endl;
	}

	return 0;
}