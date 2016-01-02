/*
	Mind that middle character need to be checked in the mirroed function
*/
	
#include <iostream>
#include <map>

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


bool is_mirrored(string s)
{
	map <char, char> mirror;

	mirror['A'] = 'A';
	mirror['E'] = '3';
	mirror['H'] = 'H';
	mirror['I'] = 'I';
	mirror['J'] = 'L';
	mirror['L'] = 'J';
	mirror['M'] = 'M';
	mirror['O'] = 'O';
	mirror['S'] = '2';
	mirror['T'] = 'T';
	mirror['U'] = 'U';
	mirror['V'] = 'V';
	mirror['W'] = 'W';
	mirror['X'] = 'X';
	mirror['Y'] = 'Y';
	mirror['Z'] = '5';
	mirror['1'] = '1';
	mirror['2'] = 'S';
	mirror['3'] = 'E';
	mirror['5'] = 'Z';
	mirror['8'] = '8';
	
	int i;
	int l = s.length();

	for(i=0; i<(l/2 + 1); i++)
	{
		if(s[i] != mirror[s[l-1-i]])
			return false;
	}

	return true;
}

int main()
{
	bool palin, mirror;
	string input;
	
	while(1)
	{
		cin >> input;

		if(cin.eof())
			break;

		palin = is_palindrome(input);
		mirror = is_mirrored(input);

		cout << input << " -- ";

		if(palin && mirror)
			cout << "is a mirrored palindrome.";
		else if (palin)
			cout << "is a regular palindrome.";
		else if (mirror)
			cout << "is a mirrored string.";
		else
			cout << "is not a palindrome.";
		
		cout << endl << endl; 
	}


	return 0;
}