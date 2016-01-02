#include <iostream>
#include <map>

using namespace std;

int main()
{
	int l, i;
	string wire_direction, bend;

	map <string, map<string, string> > bend_results;

	bend_results["+x"]["+y"] = "+y";
	bend_results["+x"]["-y"] = "-y";
	bend_results["+x"]["+z"] = "+z";
	bend_results["+x"]["-z"] = "-z";

	bend_results["-x"]["+y"] = "-y";
	bend_results["-x"]["-y"] = "+y";
	bend_results["-x"]["+z"] = "-z";
	bend_results["-x"]["-z"] = "+z";

	bend_results["+y"]["+y"] = "-x";
	bend_results["+y"]["-y"] = "+x";
	bend_results["+y"]["+z"] = "+y";
	bend_results["+y"]["-z"] = "+y";

	bend_results["-y"]["+y"] = "+x";
	bend_results["-y"]["-y"] = "-x";
	bend_results["-y"]["+z"] = "-y";
	bend_results["-y"]["-z"] = "-y";

	bend_results["+z"]["+y"] = "+z";
	bend_results["+z"]["-y"] = "+z";
	bend_results["+z"]["+z"] = "-x";
	bend_results["+z"]["-z"] = "+x";

	bend_results["-z"]["+y"] = "-z";
	bend_results["-z"]["-y"] = "-z";
	bend_results["-z"]["+z"] = "+x";
	bend_results["-z"]["-z"] = "-x";

	while(1)
	{
		cin >> l;

		if (l == 0)
			break;

		wire_direction = "+x";

		for(i=0; i<(l-1); i++)
		{
			cin >> bend;

			if(bend != "No")
				wire_direction = bend_results[wire_direction][bend];
		}

		cout << wire_direction << endl;
	}

	return 0;
}