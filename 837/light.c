#include <stdio.h>
#include <stdlib.h>

// Using x and y as double leads to some issues 
// compare function for sorting
typedef struct 
{
	int x;
	int y;
	int end;
	double r;
} Point;

int point_cmpfunc(const void *a, const void *b)
{
	return (*(Point*)a).x - (*(Point*)b).x; 
}

Point points[10000];

int main(int argc, char *argv[])
{
	int i;
	int t, n;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n);

		double x1, y1, x2, y2, r;

		for(i=0; i<(n*2); i+=2)
		{
			scanf("%lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &r); 

			points[i].x = (int)(10 * x1);
			points[i].y = (int)(10 * y1);
			points[i+1].x = (int)(10 * x2);
			points[i+1].y = (int)(10 * y2);

			points[i].r = r;
			points[i+1].r = r; 
		
			points[i].end = 0;
			points[i+1].end = 0;

			if(points[i].x < points[i+1].x)
				points[i+1].end = 1;
			else
				points[i].end = 1;
		}

		qsort(points, n*2, sizeof(Point), point_cmpfunc);

		double e = 1.0;

		printf("%d\n", (n*2 + 1));

		printf("-inf %.3lf %.3lf\n", points[0].x / 10.0, e);
		for(i=0; i<(n*2 - 1); i++)
		{
			if(points[i].end == 0)
				e = e * points[i].r;
			else
				e = e / points[i].r;

			printf("%.3lf %.3lf %.3lf\n", points[i].x / 10.0, points[i+1].x / 10.0, e);
		}

		e = e / points[i].r;
		printf("%.3lf +inf %.3lf\n", points[i].x / 10.0, e);
		
		if(t != 0)
			printf("\n");
	}

	return 0;
}