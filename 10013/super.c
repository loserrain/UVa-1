#include <stdio.h>

// Accepted 

int num1[1000005];
int num2[1000005];
int sum[1000005];
int n;
int t;

int main(int argc, char *argv[])
{
	int i, carry, x;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n);

		for(i=0; i<n; i++)
			scanf("%d %d", &num1[i], &num2[i]);

		carry = 0;
		for(i=(n-1); i>=0; i--)
		{
			x = num1[i] + num2[i] + carry;

			sum[(n - 1) - i] = x % 10;
			carry = x / 10; 
		}

		if (carry > 0)
		{
			sum[n] = carry;
			printf("%d", carry);
		}


		for(i=(n-1); i>=0; i--)
			printf("%d", sum[i]);

		printf("\n");

		if(t > 0)
			printf("\n");
	}

	return 0;
}