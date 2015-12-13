#include <iostream>

using namespace std;

int main()
{
	int t;
	string sites[11];
	int relevance[11];
	int max_relevance;
	int i, j;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cout << "Case #" << (i+1) << ":" << endl;
		max_relevance = -1;

		for(j=0; j<10; j++)
		{
			cin >> sites[j];
			cin >> relevance[j];

			if(relevance[j] > max_relevance)
				max_relevance = relevance[j];
		}

		for(j=0; j<10; j++)
		{
			if(relevance[j] == max_relevance)
				cout << sites[j] << endl;
		}

	}


	return 0;
}