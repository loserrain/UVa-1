#include <iostream>
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

string get_clean_string(string s)
{
	int i;
	int l = s.length();

	string output = "";

	for(i=0; i<l; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			output = output + (char)tolower(s[i]);
		else if(s[i] >= 'a' && s[i] <= 'z')
			output = output + s[i];
	}

	return output;
}


int main()
{
	string input, clean_str;

	while(1)
	{
		getline(cin, input);

		if(input == "DONE")
			break;

		clean_str = get_clean_string(input);

		if(is_palindrome(clean_str))
			cout << "You won't be eaten!" << endl;
		else
			cout << "Uh oh.." << endl;
	}

	return 0;
}