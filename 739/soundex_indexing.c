#include <stdio.h>
#include <string.h>

char name[25];
char soundex_code[5];

char char_codes[26][2] = {
	{'A', '0'}, {'B', '1'}, {'C', '2'}, {'D', '3'},	{'E', '0'}, 
	{'F', '1'}, {'G', '2'}, {'H', '0'}, {'I', '0'}, {'J', '2'}, 
	{'K', '2'}, {'L', '4'}, {'M', '5'}, {'N', '5'}, {'O', '0'}, 
	{'P', '1'}, {'Q', '2'}, {'R', '6'}, {'S', '2'}, {'T', '3'}, 
	{'U', '0'}, {'V', '1'}, {'W', '0'}, {'X', '2'}, {'Y', '0'},
	{'Z', '2'}
};

char get_char_code(char ch)
{
	int t = ch - 'A';
	
	return char_codes[t][1];
}


void print_line(char str1[], char str2[])
{
	int len = strlen(str1);
	int i;

	for(i=0; i<9; i++)
		printf(" ");

	printf("%s", str1);

	int n_spaces = 35 - (10 + len);

	for(i=0; i < n_spaces; i++)
		printf(" ");

	printf("%s\n", str2);
}


void get_soundex_code(char name[])
{
	int i, j=0;
	int len = strlen(name);
	char code, code_prev;
	
	soundex_code[j++] = name[0];

	for(i=1; i<len; i++)
	{
		code = get_char_code(name[i]);

		code_prev = get_char_code(name[i - 1]);
		
		if(code != '0' && code != code_prev)
		{
			soundex_code[j] = code;
			j++;

			if(j == 4)
				break;
		}
	}

	if(j < 4)
	{
		for(; j<4; j++)
		{
			soundex_code[j] = '0';
		}
	}

	soundex_code[4] = '\0';
}


int main(int argc, char *argv[])
{
	print_line("NAME", "SOUNDEX CODE");

	while(scanf("%s", name) != EOF)
	{
		get_soundex_code(name);

		print_line(name, soundex_code);
	}

	printf("%19s%s\n", "", "END OF OUTPUT");
	return 0;
}