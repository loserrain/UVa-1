import sys

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	xs = []

	for j in range(n):
		xs.append(int(sys.stdin.readline()))

	max_so_far = xs[0]
	max_diff = -500000
	for j in range(1, n):
		if max_so_far - xs[j] > max_diff:
			max_diff = max_so_far - xs[j]

		if xs[j] > max_so_far:
			max_so_far = xs[j]

	print(max_diff)