#include <iostream>

using namespace std;

int main()
{
	string number;
	int multiplier = 1, t, l, i, sum;

	while(1)
	{
		cin >> number;

		if(number == "0")
			break;

		l = number.length();

		sum = 0;
		for(i=0; i<l; i++)
		{
			sum = sum + multiplier * (number[i] - '0');
			multiplier = multiplier * -1;
		}

		if(sum % 11 == 0)
			cout << number << " is a multiple of 11." << endl;
		else
			cout << number << " is not a multiple of 11." << endl;
	}

	return 0;
}