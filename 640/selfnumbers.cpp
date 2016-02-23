#include <iostream>

#define M 1000000

using namespace std;

int digitadition(int n)
{
	int x = n;

	while(n > 0)
	{
		x = x + (n%10);
		n = n / 10;
	}

	return x;
}

int main()
{
	int i, t;
	static bool isSelfNumber[M];

	for(i=1; i<=M; i++)
	{
		t = digitadition(i);

		if(t <= M)
			isSelfNumber[t-1] = true;
	}

	for(i=0; i<M; i++)
	{
		if(!isSelfNumber[i])
			cout << i+1 << endl;
	}

	return 0;
}
