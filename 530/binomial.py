import sys

def gcd(a, b):
	if a % b == 0:
		return b
	else:
		return gcd(b, a % b)


def product(A):
	x = 1

	for i in A:
		x = x * i

	return x

def get_combinations(n, k):
	if n == 0:
		return 0

	if k == 0:
		return 1

	first = [x for x in range(n, n-k, -1)]
	second = [x for x in range(k, 1, -1)]

	count = 0
	for i in range(len(second)):
		for j in range(len(first)):
			k = gcd(first[j], second[i])

			second[i] = second[i] // k
			first[j] = first[j] // k

			count = count + 1

	return product(first) // product(second)

if __name__ == '__main__':
	for line in sys.stdin:
		x = line.strip().split()

		n = int(x[0])
		k = int(x[1])

		if n == 0 and k == 0:
			break

		if k > (n - k):
			k = n - k

		t = get_combinations(n, k)

		print(t)