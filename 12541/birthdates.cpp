#include <iostream>
#include <algorithm>

using namespace std;

typedef struct {
	string name;
	int day;
	int month;
	int year;
} Person;


bool comparison(Person p, Person q)
{
	if(p.year == q.year)
	{
		if(p.month == q.month)
		{
			if(p.day == q.day)
			{
				int t = p.name.compare(q.name);
				if(t != 0)
				{
					if(t < 0)
						return true;
					else
						return false;
				}
			}
			else
			{
				return p.day < q.day;
			}
		}
		else
		{
			return p.month < q.month;
		}
	}
	else
	{
		return p.year < q.year;
	}
}

int main()
{
	Person persons[105];
	int n, i;

	cin >> n;

	for(i=0; i<n; i++)
	{
		cin >> persons[i].name >> persons[i].day >> persons[i].month >> persons[i].year;

		// 	cout << persons[i].name << endl; 
		// 	cout << persons[i].day << endl; 
		// 	cout << persons[i].month << endl; 
		// 	cout << persons[i].year << endl;
	}

	sort(persons, persons+n, comparison);

	// for(i=0; i<n; i++)
	// {
	// 	cout << persons[i].name << endl; 
	// 	cout << persons[i].day << endl; 
	// 	cout << persons[i].month << endl; 
	// 	cout << persons[i].year << endl;
	// }

	cout << persons[n-1].name << endl;
	cout << persons[0].name << endl;

	return 0;
}