#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

// Accepted

using namespace std;

char res_hexa[20];
int len_res_hexa;

int get_decimal(string s, int l)
{
	int i, t;
	int res = 0, count = 0;

	for(i=(l-1); i>=2; i--)
	{
		if(s[i] >= '0' && s[i] <= '9')
			t = s[i] - '0';
		else
			t = s[i] - 'A' + 10;

		res = res + t * pow(16, count);
		count++; 
	}

	return res;
}

void get_hexa(int n)
{
	int t;
	char ch;

	int count = 0;
	while(n > 0)
	{
		t = n % 16;

		if (t <= 9)
			ch = t + '0';
		else
			ch = (t - 10) + 'A';

		n = n / 16;
		res_hexa[count] = ch;
		count++;
	}

	res_hexa[count] = 'x';
	count++;
	res_hexa[count] = '0';
	count++;

	len_res_hexa = count;
}

bool is_hexadecimal(string s, int l)
{
	if(l < 2)
		return false;

	return s[0] == '0' && s[1] == 'x';
}

int main()
{
	string s;
	int res_dec, n, i;
	int l;

	while(true)
	{
		cin >> s;

		if(s[0] == '-')
			break;

		l = s.length();

		if(is_hexadecimal(s, l))
		{
			res_dec = get_decimal(s, l);
			cout << res_dec << endl;
		}
		else
		{
			n = 0;

			for(i=(l-1); i>=0; i--)
				n = n + (s[i] - '0') * pow(10, (l-1) - i);

			get_hexa(n);

			for(i=(len_res_hexa - 1); i>=0; i--)
				printf("%c", res_hexa[i]);

			cout << endl;
		}
	}

	return 0;
}