#include <iostream>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int t, i, j, w, y1, y2, gap, flag;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cin >> w;
		cin >> y1 >> y2;

		flag = 0;
		gap = y1 - y2;

		for(j=1; j<w; j++)
		{
			cin >> y1 >> y2;

			if((y1- y2) != gap)
				flag = 1;
		}

		if(flag == 1)
			cout << "no" << endl;
		else
			cout << "yes" << endl;

		if(i != (t-1))
			cout << endl;
	}

	return 0;
}