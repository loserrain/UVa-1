import sys
import math

def is_prime(n):
	t = int(math.sqrt(n)) + 1

	if n == 2:
		return True

	for j in range(2, t):
		if n % j == 0:
			return False

	return True


def factors(n):
	t = int(math.sqrt(n)) + 1

	facts = []
	for j in range(2, t):
		if n % j == 0 and is_prime(j):
			print("qrq")
			facts.append(j)

	if len(facts) == 0:
		facts.append(n)

	return facts

if __name__ == '__main__':
	for i in range(1, 10):
		print(factors(i))