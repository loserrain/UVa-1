#include <iostream>

using namespace std;
	
int bottles[10];
string orientations[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
int movements[8];

int calculate_total_movements(int brown, int green, int clear)
{
	int movements = 0;
	int i;

	for(i=0; i<9; i++)
	{
		if(i != brown && i != green && i != clear)
			movements = movements + bottles[i];
	}

	return movements;
}

int main()
{
	int i, min, min_pos;

	while(1)
	{
		cin >> bottles[0];

		if(cin.eof())
			break;

		for(i=1; i<=8; i++)
		{
			cin >> bottles[i];
		}

		movements[0] = calculate_total_movements(0, 5, 7);
		movements[1] = calculate_total_movements(0, 4, 8);
		movements[2] = calculate_total_movements(2, 3, 7);
		movements[3] = calculate_total_movements(2, 4, 6);
		movements[4] = calculate_total_movements(1, 3, 8);
		movements[5] = calculate_total_movements(1, 5, 6);
		
		min = movements[0];
		min_pos = 0;

		for(i=0; i<6; i++)
		{
			if(movements[i] < min)
			{
				min = movements[i];
				min_pos = i;
			} 
		}

		cout << orientations[min_pos] << " " << movements[min_pos] << endl;
	}


	return 0;
}