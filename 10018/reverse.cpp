#include <iostream>

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

int get_iterations(string num)
{
	string rev_num;
	int count = 0, i, l;
	long result;

	while(1)
	{
		l = num.length();
		rev_num = "";
		for(i=(l-1); i>=0; i--)
		{
			rev_num = rev_num + num[i];
		}

		result = stol(num) + stol(rev_num);
		count++;

		num = to_string(result);

		if(is_palindrome(num))
		{
			cout << count << " " << num << endl;
			break;
		}
	}

	return count;
}


int main()
{
	int n, i, count;
	string num;

	cin >> n;

	for(i=0; i<n; i++)
	{
		cin >> num;

		count = get_iterations(num);
	}

	return 0;
}