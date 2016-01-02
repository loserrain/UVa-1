#include <iostream>
#include <set>

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

int get_palindromes_count(string s)
{
	int count = 0;
	int l = s.length();
	int i, j, k;
	string temp;
	set<string> palindromes;

	for(i=0; i<l; i++)
	{
		for(j=0; j<(l-i); j++)
		{
			temp = "";
			for(k=j; k<(j+i+1); k++)
			{
				temp = temp + s[k];
			}

			if(is_palindrome(temp))
			{
				palindromes.insert(temp);
			}
		}
	}

	count = palindromes.size();
	return count;
}

int main()
{
	string input;
	int count;

	while(1)
	{
		cin >> input;

		if(cin.eof())
			break;

		count = get_palindromes_count(input);

		cout << "The string '" << input << "' contains " << count <<" palindromes." << endl;
	}

	return 0;
}