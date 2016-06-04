#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int i, l, flag, count;
	char input[512];

	while(1)
	{
		cin.getline(input, 512);

		if(cin.eof())
			break;

		flag = 0;
		count = 0;

		l = strlen(input);

		for(i=0; i<l; i++)
		{
			if(isupper(input[i]) || islower(input[i]))
			{
				if(flag == 0)
				{
					flag = 1;
					count++;
				}
			}
			else
			{
				flag = 0;
			}
		}

		cout << count << endl;
	}

	return 0;
}