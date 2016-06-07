#include <iostream>

using namespace std;

int get_minimum_cuts(int n, int m)
{
	int t1, t2, cuts;

	t1 = (n-1) + n * (m - 1);
	t2 = (m-1) + m * (n - 1);

	cuts = min(t1, t2);

	return cuts;
}

int main()
{
	int n, m, cuts;

	while(1)
	{
		cin >> n >> m;

		if(cin.eof())
			break;

		cuts = get_minimum_cuts(n, m);

		cout << cuts << endl;
	}

	return 0;
}