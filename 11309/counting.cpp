#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

bool is_palindrome(string s)
{
	int i;
	int l = s.length();

	for(i=0; i<(l/2); i++)
	{
		if(s[i] != s[l-1-i])
			return false;
	}

	return true;
}

int main()
{
	int n;
	int i, j, t, h, m, l, p_t, p_h, p_m;
	vector<int> palin_times;

	for(i=0; i<24; i++)
	{
		for(j=0; j<60; j++)
		{
			t = 100*i + j;

			if(is_palindrome(to_string(t)))
				palin_times.push_back(t);
		}
	}

	l = palin_times.size();

	cin >> n;

	for(i=0; i<n; i++)
	{
		scanf("%d:%d\n", &h, &m);
		t = 100*h + m;

		if(t >= palin_times[l-1])
		{
			p_t = palin_times[0];
		}
		else
		{
			for(j=0; j<l; j++)
			{
				if(palin_times[j] > t)
				{
					p_t = palin_times[j];
					break;
				}
			}
		}

		p_h = p_t / 100;
		p_m = p_t % 100;

		printf("%02d:%02d\n", p_h, p_m);
	}

	return 0;
}