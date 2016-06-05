#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
	double n, p;

	while(1)
	{
		cin >> n >> p;

		if(cin.eof())
			break;

		printf("%.0lf\n", pow(M_E, log(p) / n));
		// could also do: 
		// printf("%.0lf\n", pow(p, 1 / n));
	}

	return 0;
}