#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char letters[20] = {'I', 'V', 'X', 'L', 'C', 'D', 'M', 'T'};
int values[20] = {1, 5, 10, 50, 100, 500, 1000, 100000000};
int length = 8;

void print_roman_equivalent(int n)
{
	int i, j;
	int start=0, end=1;
	int closest_sub=0;

	for (i=1; i<length; i++)
	{
		if(n >= values[i-1] && n < values[i])
		{
			start = i-1;
			end = i;
		}
	}

	for(j=2; j<length; j=j+2)
	{
		if(n >= values[j-2] && n < values[j])
		{
			closest_sub = j-2;
		}
	}

	if(n / values[closest_sub] == 4 || n / values[closest_sub] == 9)
	{
		printf("%c%c", letters[closest_sub], letters[end]);
		print_roman_equivalent(n % values[closest_sub]);
	}
	else
	{
		int q = n / values[start];

		for(i=0; i<q ; i++)
		{
			printf("%c", letters[start]);
		}

		int r = n % values[start];

		if(r != 0)
		{
			print_roman_equivalent(r);
		}	
	}
}

void print_decimal_equivalent(char roman_number[])
{
	int l = strlen(roman_number);
	int decimal[20];
	int i, j;
	int sum = 0;

	for(i=0; i<l ; i++)
	{
		for(j=0; j<length; j++)
		{
			if(roman_number[i] == letters[j])
			{
				decimal[i] = values[j];
				break;
			}
		}
	}

	for(i=0; i<(l-1); i++)
	{
		if(decimal[i] < decimal[i+1])
		{
			decimal[i] = -1 * decimal[i];
		}

		sum = sum + decimal[i];
	}

	sum = sum + decimal[l-1];

	printf("%d", sum);
}

int get_integer_equivalent(char input[])
{
	int l = strlen(input);
	int i, n = 0;

	for (i=0; i<l; i++)
	{
		n = n * 10 + (input[i] - '0');
	}

	return n;
} 

int main(int argc, char *argv[])
{
	int i;
	char input[20];
	int n;

	while(scanf("%s\n", input) != EOF)
	{
		if(input[0] >= '0' && input[0] <= '9')
		{
			n = get_integer_equivalent(input);
			print_roman_equivalent(n);
		}
		else
		{
			print_decimal_equivalent(input);
		}

		printf("\n");
	}

	return 0;
}