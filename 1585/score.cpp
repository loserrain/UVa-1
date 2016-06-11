#include <iostream>

using namespace std;

int calculate_score(string s)
{
	int l, i, total, mark;

	l = s.length();
	total = 0;
	
	mark = 1;

	for(i=0; i<l; i++)
	{
		if(s[i] == 'X')
		{
			mark = 1;
		}
		else if(s[i] == 'O')
		{
			total = total + mark;
			mark++;
		}
	}

	return total;
}

int main()
{
	int t;
	string input;

	cin >> t;

	while(t--)
	{
		cin >> input;
		cout << calculate_score(input) << endl;
	}

	return 0;
}