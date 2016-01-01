#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t, count, l, i, j;
	string input;

	cin >> t;
	cin.ignore();

	for(i=0; i<t; i++)
	{
		getline(cin, input);

		l = input.length();
		count = 0;

		for(j=0; j<l; j++)
		{
			if(input[j] == 'M')
				count++;
			else if(input[j] == 'F')
				count--;
		}

		if(count == 0 && l > 3)
			cout << "LOOP" << endl;
		else
			cout << "NO LOOP" << endl;
	}

	return 0;
}
