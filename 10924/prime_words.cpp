#include <iostream>
#include <math.h>

using namespace std;


int get_prime_score(string s)
{
	int i, sum = 0;
	int l = s.length();

	for(i=0; i<l; i++)
	{
		if(isupper(s[i]))
			sum = sum + (s[i] - 'A' + 27);

		if(islower(s[i]))
			sum = sum + (s[i] - 'a' + 1);
	}

	return sum;
}

bool is_prime(int n)
{
	if(n == 2 || n == 3)
		return true;

	if(n % 2 == 0 || n % 3 == 0)
		return false;

	int i;

	for(i=6; (i-1) <= sqrt(n); i=i+6)
	{
		if(n % (i-1) == 0)
			return false;

		if(n % (i+1) == 0)
			return false;
	}

	return true;
}

bool is_prime_word(string s)
{
	int score = get_prime_score(s);
	return is_prime(score);
}

int main()
{
	string s;
	bool res;

	while(1)
	{
		cin >> s;

		if(cin.eof())
			break;

		res = is_prime_word(s);

		if(res == true)
			cout << "It is a prime word." << endl;
		else
			cout << "It is not a prime word." << endl;
	}

	return 0;
}