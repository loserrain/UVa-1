#include <iostream>
#include <map>

using namespace std;

int main()
{
	int count, l, i;
	double score;
	string input;
	map <char, double> durations;

	durations['W'] = 1.0;
	durations['H'] = 0.5;
	durations['Q'] = 0.25;
	durations['E'] = 0.125;
	durations['S'] = 0.0625;
	durations['T'] = 0.03125;
	durations['X'] = 0.015625;

	while(1)
	{
		getline(cin, input);

		if(input == "*")
			break;

		l = input.length();
		count = 0;
		score = 0.0;

		for(i=0; i<l; i++)
		{
			if(input[i] == '/')
			{
				if(score == 1.0)
				{
					count++;
				}

				score = 0.0;
				continue;
			}

			score = score + durations[input[i]];
		}

		cout << count << endl;
	}

	return 0;
}