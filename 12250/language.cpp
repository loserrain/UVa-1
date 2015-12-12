#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int count = 0;

	while(1)
	{
		count++;
		cin >> input;

		if(input.compare("#") == 0)
			break;

		cout << "Case " << count << ": ";

		if(input.compare("HELLO") == 0)
			cout << "ENGLISH";
		else if(input.compare("HOLA") == 0)
			cout << "SPANISH";
		else if(input.compare("HALLO") == 0)
			cout << "GERMAN";
		else if(input.compare("BONJOUR") == 0)
			cout << "FRENCH";
		else if(input.compare("CIAO") == 0)
			cout << "ITALIAN";
		else if(input.compare("ZDRAVSTVUJTE") == 0)
			cout << "RUSSIAN";
		else
			cout << "UNKNOWN";

		cout << endl;
	}

	return 0;
}