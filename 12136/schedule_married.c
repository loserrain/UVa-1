#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n;
	int i;

	int mrs_start_hour, mrs_start_min;
	int mrs_end_hour, mrs_end_min;
	
	int meet_start_hour, meet_start_min;
	int meet_end_hour, meet_end_min;

	int mrs_start, mrs_end;
	int meet_start, meet_end;

	scanf("%d\n", &n);

	for(i=0; i<n; i++)
	{
		scanf("%d:%d %d:%d\n", &mrs_start_hour, &mrs_start_min, &mrs_end_hour, &mrs_end_min);
		scanf("%d:%d %d:%d\n", &meet_start_hour, &meet_start_min, &meet_end_hour, &meet_end_min);

		mrs_start = mrs_start_hour * 60 + mrs_start_min;
		mrs_end = mrs_end_hour * 60 + mrs_end_min;

		meet_start = meet_start_hour * 60 + meet_start_min;
		meet_end = meet_end_hour * 60 + meet_end_min;

		printf("Case %d: ", i+1);
		if(mrs_end < meet_start || mrs_start > meet_end)
		{
			printf("Hits Meeting\n");
		}
		else
		{
			printf("Mrs Meeting\n");
		}
	}

	return 0;
}