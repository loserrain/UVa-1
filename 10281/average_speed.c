#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long convert_time_to_seconds(char timestamp[])
{
	int l = strlen(timestamp);
	int time_parts[3];
	int i, x = 0, t = 0;
	long total_seconds;

	for(i=0; i<l; i++)
	{
		if(timestamp[i] != ':')
		{
			t = 10 * t + (timestamp[i] - '0');
		}
		else
		{
			time_parts[x] = t;
			t = 0;
			x++;
		}
	}

	time_parts[x] = t;

	total_seconds = time_parts[0] * 3600 + time_parts[1] * 60 + time_parts[2];

	return total_seconds;
}

int main(int argc, char *argv[])
{
	double CONVERSION = (5.0/18.0) / 1000.0;
	char temp_c;
	long time_elapsed;

	char elapsed_time[100];
	long elapsed_time_seconds;
	double speed;

	long last_speed_change_time_seconds = 0;
	double last_speed = 0;
	
	double distance = 0, query_distance;

	while(scanf("%s", elapsed_time) != EOF)
	{
		temp_c = getchar();

		elapsed_time_seconds = convert_time_to_seconds(elapsed_time);

		if(temp_c == ' ')
		{
			scanf("%lf", &speed);
			time_elapsed = elapsed_time_seconds - last_speed_change_time_seconds;
			distance = distance + last_speed * time_elapsed * CONVERSION;

			last_speed = speed;
			last_speed_change_time_seconds = elapsed_time_seconds;
		}
		else if(temp_c == '\n')
		{
			time_elapsed = elapsed_time_seconds - last_speed_change_time_seconds;
			query_distance = distance + last_speed * time_elapsed * CONVERSION;

			printf("%s %.2lf km\n", elapsed_time, query_distance);
		}

	}

	return 0;
}