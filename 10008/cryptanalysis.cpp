#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

typedef struct {
	char key;
	int value;
} key_value;

int cmp(key_value a, key_value b)
{
	return a.value > b.value;
}

int main()
{
	int n, i, j, l, count, size;
	string t;
	char temp;

	key_value pairs[100];

	map<char, int> counts;

	cin >> n;
	getline(cin, t);

	for(i=0; i<n; i++)
	{
		getline(cin, t);	

		l = t.length();

		for(j=0; j<l; j++)
		{
			if(isupper(t[j]) || islower(t[j]))
			{
				temp = toupper(t[j]);
			
				if(counts.count(temp) > 0)
					counts[temp] += 1;
				else
					counts[temp] = 1;
			}
		}
	}

	count = 0;
	size = counts.size();
  	for (map<char,int>::iterator it=counts.begin(); it!=counts.end(); ++it)
  	{
  		pairs[count].key = it->first;
  		pairs[count].value = it->second;
  		count++;
  	}

  	sort(pairs, pairs+size, cmp);

  	for(i=0; i<size; i++)
  		cout << pairs[i].key << " " << pairs[i].value << endl;

	return 0;
}