#include <iostream>

using namespace std;

int main()
{
	int i, l;
	string input;

	while(1)
	{
		cin >> input;

		if(cin.eof())
			break;

		l = input.length();

		for(i=0; i<l; i++)
			cout << (char)(input[i] - 7);

		cout << endl;
	}

	return 0;
}