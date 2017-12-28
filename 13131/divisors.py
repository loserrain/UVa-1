import sys
import math

def sum_divisors(n, k):
	total = 0
	x = int(math.ceil(math.sqrt(n)))

	for i in range(1, x):
		if n % i == 0:
			if i % k != 0:
				total = total + i

			if (n // i) % k != 0:
				total = total + (n // i)

	if x * x == n:
		total = total + x

	return total

if __name__ == '__main__':
	t = int(sys.stdin.readline())

	for i in range(t):
		line = sys.stdin.readline().strip().split()

		n = int(line[0])
		k = int(line[1])

		s = sum_divisors(n, k)

		print(s)
