#include <stdio.h>

int main(int argc, char *argv[])
{
	float H, U, D, F;
	float current_height, current_up;
	int days;

	scanf("%f %f %f %f", &H, &U, &D, &F);

	while(H != 0)
	{
		current_height = 0;
		current_up = U;
		days = 0;
		float depreciation = (F/100) * U; 

		while(1)
		{
			days = days + 1;

			current_height = current_height + current_up;

			if(current_height > H)
			{
				printf("success on day %d\n", days);
				break;	
			}
			else
			{
				if(current_up >= depreciation)
					current_up = current_up - depreciation;
				else
					current_up = 0;
			}
				
			
			current_height = current_height - D;

			if(current_height < 0)
			{
				printf("failure on day %d\n", days);
				break;
			}
		}

		scanf("%f %f %f %f", &H, &U, &D, &F);
	}

	return 0;
}