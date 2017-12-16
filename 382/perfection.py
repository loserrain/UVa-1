import sys
import math

def get_perfect_factors(n):
	x = int(math.sqrt(n)) + 1

	if n == 1:
		return []

	factors = [1]

	for i in range(2, x):
		if n % i == 0:
			factors.append(i)
			if i != (n // i):
				factors.append(n // i)

	return factors

def get_perfect_factors_sum(n):
	return sum(get_perfect_factors(n))

if __name__ == '__main__':
	line = sys.stdin.readline()

	t = line.strip().split()

	x = [int(i) for i in t]

	print("PERFECTION OUTPUT")
	for i in x:
		if i == 0:
			break
		
		k = get_perfect_factors_sum(i)

		if k == i:
			res = "PERFECT"
		elif k < i:
			res = "DEFICIENT"
		else:
			res = "ABUNDANT"

		print("%5d  %s"%(i, res))

	print("END OF OUTPUT")