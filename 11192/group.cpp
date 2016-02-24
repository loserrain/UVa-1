#include <iostream>

using namespace std;

int main()
{
	int n, l, d, i, j;
	string input;

	while(1)
	{
		cin >> n;

		if(n == 0)
			break;

		cin >> input;

		l = input.length();
		d = l/n;

		for(i=0; i<n; i++)
		{
			for(j=((i+1)*d - 1); j>=(i*d); j--)
			{
				cout << input[j];
			}
		}

		cout << endl;
	}

	return 0;
}