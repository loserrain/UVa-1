#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, i, l, cmp_1, cmp_2;
	string input;

	cin >> n;

	for(i=0; i<n; i++)
	{
		cin >> input;

		l = input.length();

		if (l == 5)
		{
			cout << 3 << endl;	
			continue;
		}

		cmp_1 = 0;
		cmp_2 = 0;

		cmp_1 = cmp_1 + (input[0] == 'o') + (input[1] == 'n') + (input[2] == 'e');
		cmp_2 = cmp_2 + (input[0] == 't') + (input[1] == 'w') + (input[2] == 'o');

		if (cmp_1 > cmp_2)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}

	return 0;
}