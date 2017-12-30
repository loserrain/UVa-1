#include <stdio.h>

int main(int argc, char *argv[])
{
	int t, A, B, C, x, y, z, i, flag;

	scanf("%d", &t);

	for(i=0; i<t; i++)
	{
		scanf("%d %d %d", &A, &B, &C);

		flag = 0;
		for(x=-22; x<=22; x++)
		{
			for(y=-100; y<=100; y++)
			{
				for(z=-100; z<=100; z++)
				{
					if (x != y && z != x && z!= y)
					{
						if (x+y+z == A && x*y*z == B && x*x+y*y+z*z == C)
						{
							flag = 1;
							break;
						}
					}
				}
				if (flag == 1)
					break;
			}
			if (flag == 1)
				break;
		}

		if (flag == 1)
			printf("%d %d %d\n", x, y, z);
		else
			printf("No solution.\n");
	}


	return 0;
}