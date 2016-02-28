#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

int get_key_press(char ch)
{
	int k = 0;

	if (ch == ' ')
		k = 1;
	else if(ch >= 'a' && ch <= 'r')
		k = ((ch - 'a') % 3) + 1;
	else if (ch == 's' || ch == 'z')
		k = 4;
	else if (ch >= 't' || ch <= 'y')
		k = ((ch - 't') % 3) + 1;

	return k;
}


int main()
{
	char c;
	int t, i, j, l, count;
	string line;

	cin >> t;
	cin.ignore();

	for(i=0; i<t; i++)
	{
		getline(cin, line);

		l = line.length();

		count = 0;
		for(j=0; j<l; j++)
		{
			count = count + get_key_press(line[j]);
		}

		cout << "Case #" << (i+1) << ": " << count << endl;
	}

	return 0;
}