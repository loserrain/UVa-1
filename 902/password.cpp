#include <iostream>
#include <algorithm>
#include <string>
#include <map>

// Accepted

using namespace std;

int main()
{
	int n, l, i, max;
	string s, t, max_str;
	map<string, int> freq;

	while(cin >> n)
	{
		cin >> s;
		freq.clear();

		l = s.length();

		max = 0;
		for(i=0; i<(l-n+1); i++)
		{
			t = s.substr(i, n);
			freq[t]++;

			if(freq[t] > max)
			{
				max = freq[t];
				max_str = t;
			}
 		}

 		cout << max_str << endl;
	}

	return 0;
}