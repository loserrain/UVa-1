#include <stdio.h>

int main(int argc, char *argv[])
{
	int D, R, T;

	while(scanf("%d", &D) == 1)
	{
		scanf("%d", &R);
		scanf("%d", &T);

		int x=0, y=0, a=0, b=0;

		while(1)
		{
			x++;
			if(x >= 4)
				a = a + x;

			if(x - D > 0)
			{
				y++;

				if(y >= 3)
					b = b + y;
			}

			if(a + b == R + T)
				break;
		}


		printf("%d\n", R - a);
	}

	return 0;
}