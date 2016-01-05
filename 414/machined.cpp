#include <iostream>

using namespace std;

int count_blanks(string s)
{
	int i, count = 0;
	int l = s.length();

	for(i=0; i<l; i++)
	{
		if(s[i] != 'X')
			count++;
	}

	return count;
}

int main()
{
	int n, i, min_blanks, total_void;
	string input;

	int blank_counts[15];

	while(1)
	{
		cin >> n;
		cin.ignore();

		if (n == 0)
			break;

		for(i=0; i<n; i++)
		{
			getline(cin, input);
			blank_counts[i] = count_blanks(input);
		}

		min_blanks = 100;

		for(i=0; i<n; i++)
		{
			if(blank_counts[i] < min_blanks)
				min_blanks = blank_counts[i];
 		}

 		total_void = 0;

 		for(i=0; i<n; i++)
		{
			total_void += (blank_counts[i] - min_blanks);
 		}

 		cout << total_void << endl;
	}

	return 0;
}