import sys
import math 

def is_prime(n):
	x = int(math.sqrt(n))

	if n == 2 or n == 3:
		return True

	for i in range(2, x+1):
		if n % i == 0:
			return False

	return True

def get_reverse_number(n):
	res = 0

	while n > 0:
		res = res * 10 + ( n % 10)
		n = n // 10

	return res

for line in sys.stdin:
	t = int(line)

	if is_prime(t):
		u = get_reverse_number(t)
		if u != t and is_prime(u):
			print("%d is emirp."%(t))
		else:
			print("%d is prime."%(t))
	else:
		print("%d is not prime."%(t))
