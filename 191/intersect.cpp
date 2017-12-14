/*
	Wrong Answer
*/
#include <iostream>

using namespace std;

double x_start, y_start, x_end, y_end;
double x_left, y_top, x_right, y_bottom;
double a, b, c;
double x[5];
double y[5];
double function_vals[5];

void determine_line()
{
	a = x_end - x_start;
	b = -(y_end - y_start);
	c = -(b * x_end + a * y_end);
}

void determine_points()
{
	x[0] = x_left;
	x[1] = x_left;
	x[2] = x_right;
	x[3] = x_right;

	y[0] = y_top;
	y[1] = y_bottom;
	y[2] = y_top;
	y[3] = y_bottom;
}

double calculate_function(double a, double b, double c, double p_x, double p_y)
{
	return (a * p_y + b * p_x + c);
}

void determine_function_vals()
{
	int i;

	for(i=0; i<4; i++)
		function_vals[i] = calculate_function(a, b, c, x[i], y[i]);
}

bool is_intersecting()
{
	determine_line();
	determine_points();
	determine_function_vals();
	
	if(function_vals[0] < 0 && function_vals[1] < 0 && function_vals[2] < 0 && function_vals[2] < 0)
		return false;
	else if(function_vals[0] > 0 && function_vals[1] > 0 && function_vals[2] > 0 && function_vals[2] > 0)
		return false;

	return true;
}

int main()
{
	int t;
	bool res;

	cin >> t;

	while(t--)
	{
		cin >> x_start >> y_start >> x_end >> y_end;
		cin >> x_left >> y_top >> x_right >> y_bottom;

		res = is_intersecting();

		if(res == true)
			cout << "T" << endl;
		else
			cout << "F" << endl;
	}

	return 0;
}