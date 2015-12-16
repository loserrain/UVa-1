#include <iostream>

using namespace std;

int main()
{
	int k, c, i, j, t;
	int freddie_courses[105];
	int category_course_num, category_course_req; 
	int freddie_category_req, category_course;
	bool flag;

	while(1)
	{
		cin >> k >> c;

		if(k == 0)
			break;

		for(i=0; i<k; i++)
			cin >> freddie_courses[i];

		flag = true;

		for(i=0; i<c; i++)
		{
			cin >> category_course_num;
			cin >> category_course_req;

			freddie_category_req = 0;

			for(j=0; j<category_course_num; j++)
			{
				cin >> category_course;

				for(t=0; t<k; t++)
				{
					if(freddie_courses[t] == category_course)
						freddie_category_req++;
				}
			}
			if(freddie_category_req < category_course_req)
				flag = false;
		}

		if(flag == true)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}