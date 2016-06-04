/*
	Wrong Solution
*/

#include <iostream>
#include <map>

using namespace std;

map<char, char> mapping;

void create_mapping()
{
	int i;

	string input1 = "1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5";
	string input2 = "1PIT'pz'h'{yhklthyr'vm'{ol'Pu{lyuh{pvuhs'I|zpulzz'Thjopul'Jvywvyh{pvu5";
	string input3 = "1KLJ'pz'{ol'{yhklthyr'vm'{ol'Kpnp{hs'Lx|pwtlu{'Jvywvyh{pvu5";

	string output1 = "*CDC is the trademark of the Control Data Corporation.";
	string output2 = "*IBM is a trademark of the International Business Machine Corporation.";
	string output3 = "*DEC is the trademark of the Digital Equipment Corporation.";

	int l1 = input1.length();
	int l2 = input2.length();
	int l3 = input3.length();

	for(i=0; i<l1; i++)
	{
		char key = input1[i];
		char value = output1[i];
		mapping[key] = value;
	}

	for(i=0; i<l2; i++)
	{
		char key = input2[i];
		char value = output2[i];
		mapping[key] = value;
	}

	for(i=0; i<l3; i++)
	{
		char key = input3[i];
		char value = output3[i];
		mapping[key] = value;
	}
}


int main()
{
	create_mapping();
	
	string input;
	int i, l;

	while(1)
	{
		cin >> input;

		if(cin.eof())
			break;

		l = input.length();

		for(i=0; i<l; i++)
			cout << mapping[input[i]];

		cout << endl;
	}

	return 0;
}