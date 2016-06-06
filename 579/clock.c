#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int h, m;
	float h_deg, min_deg, diff;

	while(1)
	{
		scanf("%d:%d", &h, &m);

		if(h == 0 && m == 0)
			break;

		min_deg = m * 6.0;
		h_deg = (h * 30.0) + (m * 0.5);

		if(h_deg > min_deg)
			diff = h_deg - min_deg;
		else
			diff = min_deg - h_deg;

		if(diff > 180)
			diff = 360.0 - diff;

		printf("%.3f\n", diff);
	}

	return 0;
}