#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comparison(string a, string b)
{
	return a+b < b+a;
}

int main()
{
	int n, i;
	string t;
	vector<string> numbers;

	while(1)
	{
		cin >> n;

		if(n == 0)
			break;

		numbers.clear();
		
		for(i=0; i<n; i++)
		{
			cin >> t;
			numbers.push_back(t);
		}

		sort(numbers.begin(), numbers.end(), comparison);

		for(i=(n-1); i>=0; i--)
		{
			cout << numbers[i];
		}

		cout << endl;
	}
	return 0;
}