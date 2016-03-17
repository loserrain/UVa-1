#include <iostream>
#include <list>

using namespace std;

int main()
{
	string input;
	list<char> output;
	bool flag;
	int i, l;
	list<char>::iterator pos;
	list<char>::const_iterator it;

	while(1)
	{
		cin >> input;

		if(cin.eof())
			break;

		flag = false;
		output.clear();
		pos = output.begin();

		l = input.length();

		for(i=0; i<l; i++)
		{
			if(input[i] == '[')
				pos = output.begin();
			else if(input[i] == ']')
				pos = output.end();
			else 
				output.insert(pos, input[i]);
		}

		for(it=output.begin(); it != output.end(); ++it)
		{
			cout << *it;
		}

		cout << endl;
	}
	return 0;
}