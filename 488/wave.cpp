#include <iostream>

using namespace std;

int main()
{
	int t, a, f, i, j, p, flag = 0;
	string temp;

	cin >> t;

	while(t--)
	{
		getline(cin, temp);

		cin >> a;
		cin >> f;

		if(flag == 0)
			flag = 1;
		else
			cout << endl;

		for(p=0; p<f; p++)
		{
			for(i=1; i<=a; i++)
			{
				for(j=1; j<=i; j++)
				{
					cout << i;
				}

				cout << endl;
			}

			for(i=(a-1); i>=1; i--)
			{
				for(j=1; j<=i; j++)
				{
					cout << i;
				}

				cout << endl;
			}

			if(p != (f-1))
				cout << endl;
		}
	}

	return 0;
}