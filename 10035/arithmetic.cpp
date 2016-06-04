#include <iostream>

using namespace std;

int calculate_number_carry(string s1, string s2)
{
	int count = 0;
	int l1 = s1.length();
	int l2 = s2.length();
	int carry = 0, t;

	while(l1 >= 0 || l2 >= 0)
	{
		l1--;
		l2--;

		if(l2 < 0)
			t = (s1[l1] - '0') + carry;
		else if(l1 < 0)
			t = (s2[l2] - '0') + carry;
		else
			t = (s1[l1] - '0') + (s2[l2] - '0') + carry;

		if(t >= 10)
		{
			carry = 1;
			count++;
		}
		else
		{
			carry = 0;
		}
	}

	return count;
}


int main()
{
	int count;
	string n1, n2;

	while(1)
	{
		cin >> n1 >> n2;

		if(n1=="0" && n2=="0")
			break;

		count = calculate_number_carry(n1, n2);

		if(count == 0)
			cout << "No";
		else
			cout << count;

		cout << " carry operation";

		if(count > 1)
			cout << "s";

		cout << "." << endl;
	}

	return 0;
}