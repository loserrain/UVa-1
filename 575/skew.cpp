#include <iostream>

using namespace std;

long get_skew_binary(string s)
{
	long res = 0, t = 1;
	int i;
	int l = s.length();

	for(i=(l-1); i>=0; i--)
	{
		t = t << 1;

		res = res + (s[i] - '0') * (t - 1);
	}

	return res;
}

int main()
{
	string s;
	long n;

	while(1)
	{
		cin >> s;

		if(s == "0")
			break;

		n = get_skew_binary(s);

		cout << n << endl;
	}

	return 0;
}