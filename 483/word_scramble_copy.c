#include <stdio.h>
#include <string.h>


char * strrev(char *str)
{
    int i = strlen(str)-1,j=0;

    char ch;
    while(i>j)
    {
        ch = str[i];
        str[i]= str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

int main(int argc, char *argv[])
{
	int i = 0;
	char c;

	char word[1000];
	
	while((c = getchar()) != EOF)
	{
		if(isspace(c) != 0)
		{
			word[i] = '\0';
			printf("%s", strrev(word));
			printf("%c", c);

			i = 0;
			continue;
		}

		word[i] = c;
		i++;
	}

	word[i] = '\0';
	printf("%s", strrev(word));
			
	return 0;
}