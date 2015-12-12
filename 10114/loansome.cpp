#include <iostream>

using namespace std;

int main()
{
	int num_months, num_dep_rates;
	double down_payment, loan_amount;
	double car_price, instalment;
	
	int temp_dep_month;
	double temp_dep_rate;

	double dep_rates[105];
	int i, j;

	double leftover_loan_amount, depriciated_car_price;

	while(1)
	{
		cin >> num_months;

		if (num_months < 0)
			break;

		cin >> down_payment >> loan_amount >> num_dep_rates;

		car_price = down_payment + loan_amount;
		instalment = loan_amount / num_months;

		for(i=0; i<num_dep_rates; i++)
		{
			cin >> temp_dep_month >> temp_dep_rate;

			for(j=temp_dep_month; j<=num_months; j++)
			{
				dep_rates[j] = temp_dep_rate;
			}
		}

		leftover_loan_amount = loan_amount;
		depriciated_car_price = car_price * (1 - dep_rates[0]);

		if (leftover_loan_amount < depriciated_car_price)
		{
			cout << "0 months" << endl;
			continue;
		}

		for(i=1; i<=num_months; i++)
		{

			leftover_loan_amount = leftover_loan_amount - instalment;
			depriciated_car_price = depriciated_car_price * (1 - dep_rates[i]);

			if(leftover_loan_amount < depriciated_car_price)
			{
				cout << i << " month";

				if(i != 1)
					cout << "s";

				cout << endl;

				break;
			}
		}
	}

	return 0;
}