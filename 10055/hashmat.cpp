#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	long hash_army, opp_army;

	while(1)
	{
		cin >> hash_army >> opp_army;

		if(cin.eof())
			break;

		cout << abs(opp_army - hash_army) << endl;
	}

	return 0;
}