#include <iostream>
#include <algorithm>

using namespace std;

int n1, n2, n3;
int first[1005], second[1005], third[1005];

int u1, u2, u3;
int first_union_second[2005], first_union_third[2005], second_union_third[2005];

int d1, d2, d3;
int third_diff_first_second[1005], second_diff_first_third[1005], first_diff_second_third[1005];

void input_problems()
{
	int j;

	cin >> n1;
	for(j=0; j<n1; j++)
		cin >> first[j];

	cin >> n2;
	for(j=0; j<n2; j++)
		cin >> second[j];


	cin >> n3;
	for(j=0; j<n3; j++)
		cin >> third[j];

	sort(first, first+n1);
	sort(second, second+n2);
	sort(third, third+n3);
}

int union_of_problems(int *a, int l1, int *b, int l2, int *res)
{
	int p=0, q=0;
	int l = 0;

	while(p < l1 && q < l2)
	{
		if(a[p] < b[q]) 
		{
			res[l] = a[p];
			p++;
		}
		else if(b[q] < a[p]) 
		{
			res[l] = b[q];
			q++;
		} 
		else 
		{
			res[l] = a[p];
			p++;
			q++;
		}

		l++;
	}

	if(p < l1)
	{
		while(p < l1)
		{
			res[l] = a[p];
			p++;
			l++;

		}
	}


	if(q < l2)
	{
		while(q < l2)
		{
			res[l] = b[q];
			q++;
			l++;

		}
	}

	return l;
}

void calculate_unions()
{
	u1 = union_of_problems(first, n1, second, n2, first_union_second);
	u2 = union_of_problems(first, n1, third, n3, first_union_third);
	u3 = union_of_problems(second, n2, third, n3, second_union_third);
}

int diff_of_problems(int *a, int l1, int *b, int l2, int *res)
{
	int p=0, q=0;
	int l=0;

	while(p < l1 && q < l2)
	{
		if(a[p] < b[q])
		{
			res[l] = a[p];
			p++;
			l++;
		}
		else if(b[q] < a[p])
		{
			q++;
		}
		else
		{
			p++;
			q++;
		}
	}

	if(p < l1)
	{
		while(p < l1)
		{
			res[l] = a[p];
			p++;
			l++;
		}
	}

	return l;
}

void calculate_diffs()
{
	d1 = diff_of_problems(third, n3, first_union_second, u1, third_diff_first_second);
	d2 = diff_of_problems(second, n2, first_union_third, u2, second_diff_first_third);
	d3 = diff_of_problems(first, n1, second_union_third, u3, first_diff_second_third);
}


int main()
{
	int t, i, j, m;
	
	cin >> t;

	for(i=0; i<t; i++)
	{
		cout << "Case #" << i+1 << ":" << endl;
		input_problems();

		// for(j=0; j<n1; j++)
		// 	cout << first[j] << " ";
		// cout << endl;

		// for(j=0; j<n2; j++)
		// 	cout << second[j] << " ";
		// cout << endl;

		// for(j=0; j<n3; j++)
		// 	cout << third[j] << " ";
		// cout << endl;

		calculate_unions();

		// for(j=0; j<u1; j++)
		// 	cout << first_union_second[j] << " ";
		// cout << endl;

		// for(j=0; j<u2; j++)
		// 	cout << first_union_third[j] << " ";
		// cout << endl;

		// for(j=0; j<u3; j++)
		// 	cout << second_union_third[j] << " ";
		// cout << endl;

		calculate_diffs();

		
		m = -1;

		if (m < d1)
			m = d1;

		if (m < d2)
			m = d2;

		if (m < d3)
			m = d3;

		

		if(m == d3)
		{
			cout << 1 << " " << d3;

			for(j=0; j<d3; j++)
				cout << " " << first_diff_second_third[j];
			cout << endl;
		}

		if(m == d2)
		{
			cout << 2 << " " << d2;

			for(j=0; j<d2; j++)
				cout << " " << second_diff_first_third[j];
			cout << endl;
		}

		if(m == d1)
		{
			cout << 3 << " " << d1;

			for(j=0; j<d1; j++)
				cout << " " << third_diff_first_second[j];
			cout << endl;
		}
	}

	return 0;
}