#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int n, i, j, t;
	string index_str, num_str, num, blank;
	vector < pair<int, string> > data;
	
	cin >> t;
	cin.ignore();

	for(i=0; i<t; i++)
	{
		getline(cin, blank);
		getline(cin, index_str);
		getline(cin, num_str);

		stringstream stream_index(index_str);
		stringstream stream_num(num_str);

		while(stream_index >> n)
		{
			stream_num >> num;
			data.push_back(pair<int, string>(n, num));
		}

		sort(data.begin(), data.end());

		for(j=0; j < data.size(); j++)
		{
			cout << data[j].second << endl;
		}

		data.clear();

		if(i != (t-1))
			cout << endl;
	}

	return 0;
}