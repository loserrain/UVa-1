#include <iostream>

using namespace std;

int main()
{
	int t;
	int a, b;
	int i;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cin >> a >> b;

		if (a < b)
			cout << "<";
		else if (a > b)
			cout << ">";
		else
			cout << "=";

		cout << endl;
	}

	return 0;
}