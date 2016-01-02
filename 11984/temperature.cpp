#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n, c, d_f, i;
	double d_c, final_c;

	cin >> n;

	for(i=0; i<n; i++)
	{
		cin >> c >> d_f;

		d_c = (d_f * 5.0) / 9.0;
		final_c = c + d_c;

		printf("Case %d: %.2lf\n", (i+1), final_c);
	}

	return 0;
}