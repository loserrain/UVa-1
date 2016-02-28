#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int n, i, j, t, count;
	long c, r, g, q, l, p;
	vector<long> factors;

	cin >> n;

	for(i=0; i<n; i++)
	{
		cout << "Case #" << (i+1) << ":";

		factors.clear();
		count = 0;

		cin >> c >> r;

		if(c == r)
		{
			cout << " 0" << endl;
			continue; 
		}

		l = c - r;

		for(j=1; j<=sqrt(l); j++)
		{
			q = j;
			g = l / q;
			p = l % q;

			if(p == 0)
			{
				if(q > r) 
				{
					factors.push_back(q);
					count++;
				}

				if(g > r && q != g)
				{
					factors.push_back(g);
					count++;
				}
			}
		}

		sort(factors.begin(), factors.end());

		for(j=0; j<factors.size(); j++)
		{
			cout << " " << factors[j];
		}

		cout << endl;
	}

	return 0;
}