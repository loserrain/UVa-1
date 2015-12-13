#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int get_min_channel_ops(int ch1, int ch2)
{
	int op1, op2;

	op1 = abs(ch1 - ch2);
	op2 = 100 - abs(ch1 - ch2);
	
	return min(op1, op2);
}

int main()
{
	int ch1, ch2;

	while(1)
	{
		cin >> ch1 >> ch2;

		if (ch1 == -1 && ch2 == -1)
			break;

		cout << get_min_channel_ops(ch1, ch2) << endl;
	}

	return 0;
}