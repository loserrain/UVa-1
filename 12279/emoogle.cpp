#include <iostream>

using namespace std;

int main()
{
	int n, i, t, count, case_num = 0;

	while(1)
	{
		case_num++;

		cin >> n;

		if (n == 0)
			break;

		count = 0;

		for(i=0; i<n; i++)
		{
			cin >> t;

			if(t == 0)
				count--;
			else
				count++;
		}

		cout << "Case " << case_num << ": " << count << endl;
	}

	return 0;
}