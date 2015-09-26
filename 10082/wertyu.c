#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ascii[128];
char keyboard[4][20] = {
	"`1234567890-=",
	"QWERTYUIOP[]\\",
	"ASDFGHJKL;'",
	"ZXCVBNM,./"
};

int main(int argc, char *argv[])
{
	int i, j, l, read;
	char temp;

	char input[1000];

	for(i=0; i<4; i++) {
		l = strlen(keyboard[i]);

		for(j=1; j<l; j++)
		{
			temp = keyboard[i][j];
			ascii[temp] = keyboard[i][j-1];
		}

		for(j=1; j<l; j++)
		{
			temp = keyboard[i][j];
		}
	}

	ascii[' '] = ' ';

	while(fgets(input, sizeof(input), stdin) != NULL)
	{
		l = strlen(input);

		for(i=0; i<(l-1); i++)
		{
			temp = input[i];
			printf("%c", ascii[temp]);
		}

		printf("\n");
	}

	return 0;
}
