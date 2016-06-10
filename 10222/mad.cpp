#include <iostream>

using namespace std;

int main()
{
	string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	int LENGTH = keyboard.length();

	string input;

	getline(cin, input);

	int l = input.length();
	int i, j;

	for(i=0; i<l; i++)
	{
		if(input[i] == ' ')
			cout << " ";

		for(j=0; j<LENGTH; j++)
		{
			if(keyboard[j] == tolower(input[i]))
			{
				if(j > 1)
					cout << keyboard[j - 2];

				break;
			}
		}
	}

	cout << endl;

	return 0;
}