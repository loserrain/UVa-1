import sys

def get_n_digits(n):
	x = 0

	while n > 0:
		x = x + 1
		n = n // 10

	return x

def get_sum_digits(n):
	x = 0

	while n > 0:
		x = x + (n % 10)
		n = n // 10

	return x

t = int(input())

for i in range(t):
	n = int(input())
	n_digits = get_n_digits(n)
	
	lim = n - 9 * n_digits - 1

	flag = False
	for j in range(lim, n+1):
		sum_digits = get_sum_digits(j)
		x = j + sum_digits
		if x == n:
			flag = True
			ans = j
			break

	if flag == True:
		print(ans)
	else:
		print(0)
