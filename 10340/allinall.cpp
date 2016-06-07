#include <iostream>

using namespace std;

bool is_subsequence(string seq, string subseq)
{
	int i, j;

	int n = seq.length();
	int m = subseq.length();


	j = 0;

	for(i=0; i<n; i++)
	{
		if(subseq[j] == seq[i])
			j++;
	}

	return (j == m);
}

int main()
{
	string subseq, seq;

	while(1)
	{
		cin >> subseq >> seq;

		if(cin.eof())
			break;

		if(is_subsequence(seq, subseq))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;
}