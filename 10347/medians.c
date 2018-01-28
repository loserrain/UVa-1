#include <stdio.h>
#include <math.h>

// Accepted

int main(int argc, char *argv[])
{
	double a, b, c;
	double s, area;
	double t;

	while(scanf("%lf %lf %lf\n", &a, &b, &c) == 3)
	{
		s = (a + b + c) / 2;
		t = s * (s - a) * (s - b) * (s - c);

		if(t <= 0)
			area = -1;
		else
			area = (4 * sqrt(t)) / 3;

		printf("%.3lf\n", area);
	}

	return 0;
}
