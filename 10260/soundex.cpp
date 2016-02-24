#include <iostream>
#include <map>

using namespace std;

int translations[] = {0, 1, 2, 3, 0, 1, 2, 0, 0, 2, 2, 4, 5, 5, 0, 1, 2, 6, 2, 3, 0, 1, 0, 2, 0, 2};

int main()
{
	string input;
	int i, l, count;
	int first_sweep[25], final_output[25];

	while(1)
	{
		cin >> input;

		if(cin.eof())
			break;

		l = input.length();

		for(i=0; i<l; i++)
		{
			first_sweep[i] = translations[input[i] - 'A'];
		}

		count = 0;
		for(i=0; i<(l-1); i++)
		{
			if(first_sweep[i] != first_sweep[i+1]) 
			{
				final_output[count] = first_sweep[i];
				count++;
			}
		}

		final_output[count] = first_sweep[l-1];

		for(i=0; i<=count; i++)
		{
			if(final_output[i] != 0)
				cout << final_output[i];
		}

		cout << endl;
	}

	return 0;
}