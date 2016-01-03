#include <iostream>
#include <math.h>

using namespace std;

string get_clean_string(string s)
{
	string output = "";
	int i, l = s.length();

	for(i=0; i<l; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			output += s[i];
	}

	return output;
}

bool is_length_fitting(int l, int cage_size)
{
	if ((cage_size * cage_size) == l)
		return true;

	return false;
}

bool is_fitting_matrix_magical(string s, int cage_size)
{
	int i, j;
	char matrix[105][105];
	int count = 0;

	string top_right = "";
	string top_down = "";
	string bot_left = "";
	string bot_up = "";

	// Filling matrix
	for(i=0; i<cage_size; i++)
	{
		for(j=0; j<cage_size; j++)
		{
			matrix[i][j] = s[count];
			count++;
		}
	}

	for(i=0; i<cage_size; i++)
	{
		for(j=0; j<cage_size; j++)
		{
			top_right = top_right + matrix[i][j];
			top_down = top_down + matrix[j][i];
		}
	}


	for(i=(cage_size-1); i>=0; i--)
	{
		for(j=(cage_size-1); j>=0; j--)
		{
			bot_left += matrix[i][j];
			bot_up += matrix[j][i];
		}
	}

	if(top_right == top_down && bot_left == bot_up && top_right == bot_left)
		return true;
	else
		return false;
}

int is_magical(string s)
{
	int l = s.length();
	int cage_size = (int)sqrt(l);
	
	bool length_fit = is_length_fitting(l, cage_size);

	if (!length_fit)
		return -1;

	bool is_fiting_magical = is_fitting_matrix_magical(s, cage_size);

	if(is_fiting_magical)
		return cage_size;
	else
		return -1;
}


int main()
{
	int t, i;
	string input, clean_str;
	int result;

	cin >> t;
	cin.ignore();

	for(i=0; i<t; i++)
	{
		cout << "Case #" << (i+1) << ":" << endl;
		
		getline(cin, input);

		clean_str = get_clean_string(input);

		result = is_magical(clean_str);

		if(result == -1)
			cout << "No magic :(" << endl;
		else
			cout << result << endl;
	}

	return 0;
}