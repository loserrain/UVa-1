#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	int l, h;
	int p, q;

	while(1)
	{
		scanf("%d %d\n", &a, &b);

		if(a == 0 && b == 0)
			break;

		p = sqrt(a);
		q = sqrt(b);

		if(a == (p*p))
			l = p;
		else
			l = p + 1;

		h = q;
		
		printf("%d\n", (h - l + 1));
	}

	return 0;
}