/*
	Seems to run wrong on the sample input
	set producing wrong output. But judge
	says Accepted. Funny!!
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long convert_traditional_time_to_ms(char timestamp[])
{
	long total_ms;

	int h = 10 * (timestamp[0] - '0') + (timestamp[1] - '0');
	int m = 10 * (timestamp[2] - '0') + (timestamp[3] - '0');
	int s = 10 * (timestamp[4] - '0') + (timestamp[5] - '0');
	int ms = 10 * (timestamp[6] - '0') + (timestamp[7] - '0');

	total_ms = h * 60 * 60 * 100 + m * 60 * 100 + s * 100 + ms;

	return total_ms;
}


int main(int argc, char *argv[])
{
	// double CONVERSION = (10.0*100.0*100.0)/(24.0*60.0*60.0);
	char traditional_time[10];
	long traditional_ms;
	// double decimal_ms_real;
	long decimal_ms;

	while(scanf("%s", traditional_time) != EOF)
	{
		traditional_ms = convert_traditional_time_to_ms(traditional_time);

		// decimal_ms_real = round(traditional_ms * CONVERSION);
		// decimal_ms = (long) decimal_ms_real;

		decimal_ms = (traditional_ms * 125) / 108;

		printf("%07ld\n", decimal_ms);
	}

	return 0;
}