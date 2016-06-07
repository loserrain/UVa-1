#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> relatives;

double get_average();
int get_median();
int get_median_other();
int get_street_distance();

int main()
{
	int t, i, temp, distance;

	cin >> t;

	while(t--)
	{
		cin >> n;

		relatives.clear();

		for(i=0; i<n; i++)
		{
			cin >> temp;
			relatives.push_back(temp);
		}

		distance = get_street_distance();

		cout << distance << endl;
	}

	return 0;
}

int get_median()
{
	nth_element(relatives.begin(), relatives.begin() + relatives.size() / 2, relatives.end());

	return relatives[relatives.size() / 2];
}

int get_street_distance()
{
	int i, distance = 0;
	int street = get_median();

	for(i=0; i<n; i++)
	{
		distance = distance + abs(street - relatives[i]);
	}

	return distance;
}

/*
	Functions not needed
*/
double get_average()
{
	int i;
	double sum = 0;

	for(i=0; i<n; i++)
		sum = sum + relatives[i];

	return sum / n; 
}

int get_median_other()
{
	sort(relatives.begin(), relatives.end());
	return relatives[relatives.size() / 2];
}
