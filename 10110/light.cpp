#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long long n, t;
	double root;

	while(1)
	{
		cin >> n;

		if(n == 0)
			break;

		root = sqrt(n);
		t = (long long)root;

		if(root == t)
			cout << "yes";
		else
			cout << "no";

		cout << endl;
	}

	return 0;
}