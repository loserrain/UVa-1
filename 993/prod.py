import sys

def single_digit_factors(n):
	t = []

	if n // 10 == 0:
		return [n]

	for i in range(9, 1, -1):
		while n % i == 0:
			t.append(i)
			n = n / i

	if n != 1:
		return [-1]
	else:
		return reversed(t)


if __name__ == '__main__':
	m = int(sys.stdin.readline())

	for i in range(m):
		n = int(sys.stdin.readline())

		q = single_digit_factors(n)

		x = 0

		for i in q:
			x = 10*x + i 

		print(x)