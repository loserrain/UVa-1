import sys
import math

def get_number_of_solutions(c):
	x = int(math.sqrt(c))

	count = 0
	for i in range(1, x+1):
		a = i
		t = (2*(c-1) + a) / (2*a - 1)
		b = int(t)

		if b == t:
			if a == b:
				count = count + 1
			else:
				count = count + 2

	return count



if __name__ == '__main__':
	for line in sys.stdin:
		n = int(line)

		if n == 0:
			break

		res = get_number_of_solutions(n)

		print(n, res)


