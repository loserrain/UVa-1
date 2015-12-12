#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int case_num = 0;

	while(1)
	{
		case_num++;

		cin >> input;

		if (input[0] == '*')
			break;

		cout << "Case " << case_num << ": ";
		if (input.compare("Hajj") == 0)
			cout << "Hajj-e-Akbar" << endl;
		else
			cout << "Hajj-e-Asghar" << endl;
	}

	return 0;
}