#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;

int main()
{
	int n, i, j;
	string names[12];
	map<string, int> money;

	string giver, taker;
	int gift_amount_per_person, money_left_over;
	int total_number_of_person, total_gift_amount;
	int count = 0;

	while(scanf("%d\n", &n) != EOF)
	{
		count++;

		if (count != 1)
			cout << endl;

		for(i=0; i<n; i++)
		{
			cin >> names[i];
			money[names[i]] = 0;
		}

		for(i=0; i<n; i++)
		{
			cin >> giver >> total_gift_amount >> total_number_of_person;

			if(total_number_of_person != 0)
			{
				gift_amount_per_person = total_gift_amount / total_number_of_person;
				money_left_over = total_gift_amount % total_number_of_person;
			}
			else
			{
				money_left_over = total_gift_amount;
			}

			for(j=0; j<total_number_of_person; j++)
			{
				cin >> taker;
				money[taker] = money[taker] + gift_amount_per_person;
			}

			money[giver] = money[giver] - total_gift_amount + money_left_over;
		}

		for(i=0; i<n; i++)
			cout << names[i] << " " << money[names[i]] << endl;

		money.clear();
	}

	return 0;
}