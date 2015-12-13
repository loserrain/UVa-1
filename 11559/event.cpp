#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n, b, h, w;
	int i, j;
	int min_budget;
	int cost_per_person, availability, cost_hotel;

	while(scanf("%d %d %d %d\n", &n, &b, &h, &w) != EOF)
	{
		min_budget = -1;

		for(i=0; i<h; i++)
		{
			cin >> cost_per_person;

			for(j=0; j<w; j++)
			{
				cin >> availability;

				if(availability >= n)
				{
					cost_hotel = n * cost_per_person;

					if (cost_hotel <= b)
					{
						if(cost_hotel < min_budget || min_budget == -1)
						{
							min_budget = cost_hotel;
						}

					}
				}
			}
		}

		if(min_budget == -1)
			cout << "stay home" << endl;
		else
			cout << min_budget << endl;
	}

	return 0;
}