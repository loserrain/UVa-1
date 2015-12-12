#include <iostream>

using namespace std;

int main()
{
	int t, i;
	int l, w, h;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cout << "Case " << (i+1) << ": ";

		cin >> l >> w >> h;

		if(l <= 20 && w <= 20 && h <= 20)
			cout << "good" << endl;
		else
			cout << "bad" << endl;
	}

	return 0;
}