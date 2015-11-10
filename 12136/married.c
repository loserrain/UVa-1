/*
	Not Accepted: Need to figure out why
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int hour;
	int min;
} Time;


int check_time_in_interval(Time start, Time end, Time t)
{
	int res = 0;

	if(t.hour > start.hour && t.hour < end.hour)
		res = 1;

	if(start.hour == end.hour)
	{
		if(t.hour == start.hour)
		{
			if(t.min >= start.min && t.min <= end.min)
				res = 1;
		}
	}

	return res;
}


int main(int argc, char *argv[])
{
	int n;
	int i;

	Time mrs_start, mrs_end;
	Time meet_start, meet_end;

	scanf("%d\n", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d:%d %d:%d\n", &mrs_start.hour, &mrs_start.min, &mrs_end.hour, &mrs_end.min);
		scanf("%d:%d %d:%d\n", &meet_start.hour, &meet_start.min, &meet_end.hour, &meet_end.min);

		printf("Case %d: ", i+1);
		if(check_time_in_interval(mrs_start, mrs_end, meet_start) || check_time_in_interval(mrs_start, mrs_end, meet_end))
		{
			printf("Mrs Meeting\n");
		}
		else
		{
			printf("Hits Meeting\n");
		}
	}

	return 0;
}