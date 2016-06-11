#include <iostream>

using namespace std;

int main()
{
	int sides[5];
	int j, t;
	bool flag;

	while(1)
	{
		cin >> sides[0] >> sides[1] >> sides[2];

		if(sides[0] == 0 && sides[1] == 0 && sides[2] == 0)
			break;

		for(j=0; j<2; j++)
		{
			if(sides[j] > sides[j+1])
			{
				t = sides[j];
				sides[j] = sides[j+1];
				sides[j+1] = t;
			}
		}

		t = (sides[0] * sides[0]) + (sides[1] * sides[1]);

		if(t == (sides[2] * sides[2]))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
	
	return 0;
}