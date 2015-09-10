#include <stdio.h>

char output_text[1000000];

int main(int argc, char *argv[])
{
	char c;
	int i = 0, flag = 0;

	while((c = getchar()) != EOF)
	{
		if(c == '"')
		{
			if(flag == 0)
			{
				output_text[i++] = '`';
				output_text[i++] = '`';
				flag = 1;
			}
			else
			{
				output_text[i++] = '\'';
				output_text[i++] = '\'';
				flag = 0;
			}
			continue;		
		}
		output_text[i] = c;
		i++;
	}

	printf("%s", output_text);

	return 0;
}