#include <iostream>

using namespace std;

int main()
{
	int b, n;
	int r[25];
	int d, c, v, i, flag;

	while(1)
	{
		cin >> b >> n;

		if(b == 0 && n == 0)
			break;

		for(i=0; i<b; i++)
			cin >> r[i];

		for(i=0; i<n; i++)
		{
			cin >> d >> c >> v;

			r[d-1] = r[d-1] - v;
			r[c-1] = r[c-1] + v;
		}

		flag = 0;	
		for(i=0; i<b; i++)
		{
			if(r[i] < 0)
			{
				flag = 1;
				break;
			}
		}

		if(flag == 0)
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}

	return 0;
}