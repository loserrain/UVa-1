#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, i;
	string input;
	int res, l;

	cin >> n;

	for(i=0; i<n; i++)
	{
		cin >> input;

		l = input.length();

		if ((input.compare("1") == 0)|| (input.compare("4") == 0) || (input.compare("78") == 0))
			cout << "+" << endl;
		else if (input[l-1] == '5' && input[l-2] == '3')
			cout << "-" << endl;
		else if (input[0] == '9' && input[l-1] == '4')
			cout << "*" << endl;
		else if (input[0] == '1' && input[1] == '9' && input[2] == '0')
			cout << "?" << endl;
	}

	return 0;
}