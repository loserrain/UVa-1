#include <iostream>

using namespace std;

int main()
{
	int t, i, j, l, count;
	string input;
	double weight;
	int half_weights[3];
	
	cin >> t;
	cin.ignore();

	for(i=0; i<t; i++)
	{
		cout << "Case " << (i+1) << ": ";

		getline(cin, input);

		l = input.length();

		count = 0;
		half_weights[0] = 0;
		half_weights[1] = 0;

		for(j=0; j<l; j++)
		{
			if(isdigit(input[j]))
			{
				half_weights[count] = 10*half_weights[count] + (input[j] - '0');
			}
			else
			{
				count = 1;
			}
		}

		weight = 0.5 * half_weights[0] + 0.05 * half_weights[1];
		cout << weight << endl;
	}

	return 0;
}