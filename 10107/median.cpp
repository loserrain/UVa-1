#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long> A;

long get_median(int n)
{
	sort(A.begin(), A.end());

	if(n%2 == 1)
		return A[n/2];
	else
		return (A[n/2 -1] + A[n/2])/2;
}

int main()
{
	int input, count=0;

	while(1)
	{
		cin >> input;

		if(cin.eof())
			break;

		A.push_back(input);
		count++;

		cout << get_median(count) << endl;
	}

	return 0;
}