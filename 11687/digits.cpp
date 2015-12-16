#include <iostream>

using namespace std;

int main()
{
	string input;
	int last_len, len, count;

	while(1)
	{
		cin >> input;

		if(input.compare("END") == 0)
			break;

		if(input.compare("1") == 0)
		{
			cout << "1" << endl;
			continue;
		}

		last_len = -1;
		len = input.length();
		count = 1;

		while(len != last_len)
		{
			input = to_string(len);

			last_len = len;
			len = input.length();

			count++;
		}

		cout << count << endl;
	}


	return 0;
}