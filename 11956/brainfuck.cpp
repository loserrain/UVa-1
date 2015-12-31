#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
	int t, i, j, current_pointer, l;
	string input;
	int led_pointers[101];

	cin >> t;

	for(i=0; i<t; i++)
	{
		current_pointer = 0;

		for(j=0; j<100; j++)
		{
			led_pointers[j] = 0;
		}

		cin >> input;

		l = input.length();

		for(j=0; j<l; j++)
		{
			switch(input[j])
			{
				case '>':	current_pointer++;
							if(current_pointer == 100)
								current_pointer = 0;
							break;

				case '<':	current_pointer--;
							if(current_pointer == -1)
								current_pointer = 99;
							break;

				case '+':	led_pointers[current_pointer]++;
							if(led_pointers[current_pointer] == 256)
								led_pointers[current_pointer] = 0;
							break;

				case '-':	led_pointers[current_pointer]--;
							if(led_pointers[current_pointer] == -1)
								led_pointers[current_pointer] = 255;
							break;
			}
		}

		cout << "Case " << (i+1) << ": ";

		for(j=0; j<100; j++)
		{
			printf("%02X", led_pointers[j]);

			if(j != 99)
				cout << " ";
		}

		cout << endl;
	}


	return 0;
}