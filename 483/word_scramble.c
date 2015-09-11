#include <stdio.h>

void reverse_word(char word[], int n)
{
	int i;
	char temp_word[50];

	for(i=0; i<=n; i++)
	{
		temp_word[i] = word[i];
	}

	for(i=0; i<=n; i++)
	{
		word[i] = temp_word[n-i-1];
	}
}

int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	char c;

	char words[10000][50];
	int word_lengths[10000];
	char spaces[10000];

	while((c = getchar()) != EOF)
	{
		if(isspace(c) != 0)
		{
			word_lengths[j] = i;
			spaces[j] = c;
			j++;
			i = 0;
			continue;
		}

		words[j][i] = c;
		i++;
	}

	word_lengths[j] = i;

	for(i=0; i<j; i++)
	{
		reverse_word(words[i], word_lengths[i]);
		printf("%s", words[i]);
		printf("%c", spaces[i]);
	}

	printf("%s", words[j]);

	return 0;
}