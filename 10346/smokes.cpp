#include <iostream>

using namespace std;

int calculate_smokes(int n, int k)
{
	if(n < k)
		return n;

	int smoked_cigarettes = n - (n % k);
	int left_over_cigarettes = (n % k) + (n / k);

	return smoked_cigarettes + calculate_smokes(left_over_cigarettes, k);
}

int main()
{
	int n, k, res;

	while(1)
	{
		cin >> n >> k;

		if(cin.eof())
			break;

		res = calculate_smokes(n, k);

		cout << res << endl;
	}

	return 0;
}