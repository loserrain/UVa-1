#include <iostream>

using namespace std;

int n;
int numbers[1005];

int count_inversions()
{
	int count = 0;
	int i, j;

	for(i=0; i<n; i++)
	{
		for(j=(i+1); j<n; j++)
		{
			if(numbers[i] > numbers[j])
				count++;
		}
	}

	return count;
}

int main()
{
	int i;
	int count;

	while(1)
	{
		cin >> n;

		if(cin.eof())
			break;

		for(i=0; i<n; i++)
			cin >> numbers[i];

		count = count_inversions();

		cout << "Minimum exchange operations : " << count << endl;
	}

	return 0;
}