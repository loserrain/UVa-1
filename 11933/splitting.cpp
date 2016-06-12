#include <iostream>

using namespace std;

int one_positions[40];
int t, index;

int calculate_a()
{
	int res = 0, i;

	for(i=0; i<index; i=i+2)
	{
		res = res | (1 << one_positions[i]);
	}

	return res;
}


int calculate_b()
{
	int res = 0, i;

	for(i=1; i<index; i=i+2)
	{
		res = res | (1 << one_positions[i]);
	}

	return res;
}

void calculate_one_positions(int n)
{
	index = 0;
	t = 0;
	while(n)
	{
		if(n & 1 == 1)
		{
			one_positions[index] = t;
			index++;
		}

		t++;
		n = n >> 1;
	}
}

int main()
{
	int n, i;

	while(1)
	{
		cin >> n;

		if(n == 0)
			break;

		calculate_one_positions(n);

		cout << calculate_a() << " " << calculate_b() << endl;
	}

	return 0;
}