#include <iostream>

using namespace std;

int main()
{
	int n, l, i, count_curly, count_square;
	bool flag;
	string input;

	cin >> n;
	getline(cin, input);
	
	while(n--)
	{
		getline(cin, input);

		count_curly = 0;
		count_square = 0;

		l = input.length();
		flag = true;

		for(i=0; i<l; i++)
		{
			if(input[i] == '(')
				count_curly++;

			if(input[i] == ')')
				count_curly--;
			
			if(input[i] == '[')
				count_square++;
			
			if(input[i] == ']')
				count_square--;

			if(count_square < 0 || count_curly < 0)
			{
				break;
			}
		}

		if(count_square != 0 || count_curly != 0)
			flag = false;

		cout << input << " ";
		if(flag == false)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}

	return 0;
}