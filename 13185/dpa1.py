import sys
import math

def sum_factors(n):
	x = int(math.sqrt(n)) + 1

	total = 0
	for i in range(1, x):
		if n % i == 0:
			total = total + i

			if i * i != n:
				total = total + (n // i)

	total = total - n

	return total

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	s = sum_factors(n)

	if s < n:
		res = 'deficient'
	elif s == n:
		res = 'perfect'
	else:
		res = 'abundant'

	print(res)
