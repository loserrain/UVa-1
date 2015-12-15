#include <iostream>
#include <stdio.h>

using namespace std;

int get_sum_digits(int n)
{
	int sum = 0;

	while(n != 0)
	{
		sum = sum + (n%10);
		n = n / 10;
	}

	if (sum < 10)
		return sum;
	else
		return get_sum_digits(sum);
}

int get_alphabet_sum(string str)
{
	int l = str.length();
	int i;
	int sum = 0;

	for(i=0; i<l; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			sum = sum + (str[i] - 'a' + 1);
		else if(str[i] >= 'A' && str[i] <= 'Z')
			sum = sum + (str[i] - 'A' + 1);
	}

	return sum;
}

int main()
{
	string name1, name2;

	int alphabet_sum1, alphabet_sum2, digits_sum1, digits_sum2;
	double ratio;

	while(1)
	{
		getline(cin, name1);

		if(cin.eof())
			break;

		getline(cin, name2);

		alphabet_sum1 = get_alphabet_sum(name1);
		alphabet_sum2 = get_alphabet_sum(name2);

		digits_sum1 = get_sum_digits(alphabet_sum1);
		digits_sum2 = get_sum_digits(alphabet_sum2);

		if(digits_sum1 <= digits_sum2)
			ratio = (double)digits_sum1 / digits_sum2;
		else
			ratio = (double)digits_sum2 / digits_sum1;

		printf("%.2lf %%\n", ratio * 100);
	}

	return 0;
}