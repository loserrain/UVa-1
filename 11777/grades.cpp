#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t, i;
	int term1, term2, final, attendance;
	int class_test[5];
	double score;
	char grade;

	cin >> t;

	for(i=0; i<t; i++)
	{
		cin >> term1 >> term2 >> final >> attendance >> class_test[0] >> class_test[1] >> class_test[2];
		sort(class_test, class_test+3);

		score = term1 + term2 + final + attendance + (class_test[1] + class_test[2]) / 2.0;

		// cout << score << endl;

		if(score >= 90)
			grade = 'A';
		else if(score >= 80 && score < 90)
			grade = 'B';
		else if(score >= 70 && score < 80)
			grade = 'C';
		else if(score >= 60 && score < 70)
			grade = 'D';
		else
			grade = 'F';

		cout << "Case " << (i+1) << ": " << grade << endl;
	}

	return 0;
}