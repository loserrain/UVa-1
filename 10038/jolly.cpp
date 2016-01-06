#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	bool is_present[3005], flag;
	int n, i, diff;
	int nums[3005];

	while(1)
	{
		cin >> n;

		if (cin.eof())
			break;

		flag = true;

		for(i=0; i<n; i++)
		{
			is_present[i] = false;
			cin >> nums[i];
		}

		for(i=0; i<(n-1); i++)
		{
			diff = abs(nums[i+1] - nums[i]);

			if(diff < n && diff > 0)
				is_present[diff-1] = true;
		}

		for(i=0; i<(n-1); i++)
		{
			if(is_present[i] == false)
			{
				flag = false;
				break;
			}
		}

		if (flag == true || n == 1)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}

	return 0;
}