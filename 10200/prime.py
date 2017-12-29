import sys
import math

def is_prime(n):
	x = int(math.sqrt(n)) + 1

	for i in range(2, x+1):
		if n % i == 0:
			return False

	return True

def formula_term(n):
	return n*n + n + 41

for line in sys.stdin:
	t = line.strip().split()

	a = int(t[0])
	b = int(t[1])

	count_true = 0
	for i in range(a, b+1):
		x = is_prime(formula_term(i))

		if x == True:
			count_true = count_true + 1

	perct = (count_true / (b - a + 1)) * 100

	print("%.2f"%(perct))
