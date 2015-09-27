/*
	Stupid problem for solving in C.
	Getting input is horrifying. using 
	fgets causes error, but gets does not.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int n, p;
	int i, j, count = 0;

	char temp[100];
	
	char proposal_name[100];
	double price;
	int n_req;

	char target_prop[100];
	double target_price;
	int target_req;
	
	while(1)
	{
		scanf("%d", &n);
		scanf("%d", &p);
		getchar();

		if(n == 0 && p == 0)
		{
			break;
		}
		
		count++;
		
		getchar();
		for(i=0; i<n; i++)
		{
			gets(temp);
			//fgets(temp, sizeof(temp), stdin);
		}

		target_req = -1;
		target_price = -1;
		target_prop[0] = '\0';

		for(i=0; i<p; i++)
		{
			gets(proposal_name);
			// fgets(proposal_name, sizeof(proposal_name), stdin);
			scanf("%lf", &price);
			scanf("%d", &n_req);
			getchar();

			if(n_req > target_req)
			{
				target_req = n_req;
				target_price = price;
				strcpy(target_prop, proposal_name);
			}
			else if(n_req == target_req)
			{
				if(price < target_price)
				{
					target_req = n_req;
					target_price = price;
					strcpy(target_prop, proposal_name);
				}
			}

			for(j=0; j<n_req; j++)
			{
				gets(temp);
				// fgets(temp, sizeof(temp), stdin);
			}
		}

		int l = strlen(target_prop);

		if(target_prop[l-1] == '\n')
			target_prop[l-1] = '\0';

		if(count != 1)
			printf("\n");

		printf("RFP #%d\n", count);
		printf("%s\n", target_prop);
	}

	return 0;
}