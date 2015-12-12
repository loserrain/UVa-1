#include <iostream>

using namespace std;

int main()
{
	int t;
	string op;
	int d, i;
	int total = 0;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cin >> op;

		if (op[0] == 'd')
		{
			cin >> d;
			total = total + d;
		}
		else
		{
			cout << total << endl;
		}
	}

	return 0;
}

