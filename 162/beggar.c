#include <stdio.h>
#include <string.h>

int main()
{
	char card[3];
	char player_one[55][3];
	char player_two[55][3];
	int i;

	while(1)
	{
		for(i=0; i<52; i++)
		{
			scanf("%s", card);

			if(strcmp(card, "#") == 0)
				return 0;

			if(i%2 == 0)
				strcpy(player_one[25 - (i/2)], card);
			else
				strcpy(player_two[25 - (i/2)], card);
		}

		for(i=0; i<=25; i++)
		{
			printf("Player1 %d: %s\n", i, player_one[i]);
			printf("Player2 %d: %s\n", i, player_two[i]);
		}

	}

	return 0;
}