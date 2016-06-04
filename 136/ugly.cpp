#include <iostream>

using namespace std;

long ugly_numbers[2000];

long get_ugly_numbers()
{
	int count=1, a=1, b=1, c=1;
	long x=2, y=3, z=5;

	ugly_numbers[0] = 0;
	ugly_numbers[1] = 1;
	
	while(count < 1500)
	{
		if(x<y && x<z)
		{
			count++;
			ugly_numbers[count] = x;
			a++;
			x = ugly_numbers[a] * 2;
		}
		else if(y<x && y<z)
		{
			count++;
			ugly_numbers[count] = y;
			b++;
			y = ugly_numbers[b] * 3;
		}
		else if(z<x && z<y)
		{
			count++;
			ugly_numbers[count] = z;
			c++;
			z = ugly_numbers[c] * 5;
		}

		if(x == y)
		{
			a++;
			x = ugly_numbers[a] * 2;
		} else if(y == z)
		{
			b++;
			y = ugly_numbers[b] * 3;
		} else if(z == x)
		{
			c++;
			z = ugly_numbers[c] * 5;
		}
	}
}


int main()
{
	get_ugly_numbers();

	cout << "The 1500'th ugly number is "<< ugly_numbers[1500]<<"."<<endl;

	return 0;
}