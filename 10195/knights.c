#include <stdio.h>
#include <math.h>

// Accepted

int main(int argc, char *argv[])
{
	double a, b, c;
	double s, area;
	double inradius;

	while(scanf("%lf %lf %lf\n", &a, &b, &c) == 3)
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));

		if(s == 0)
			inradius = 0;
		else
			inradius = area / s;

		printf("The radius of the round table is: %.3lf\n", inradius);
	}

	return 0;
}