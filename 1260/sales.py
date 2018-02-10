import sys

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	line = sys.stdin.readline().strip().split()

	a = [int(x) for x in line]

	b = [0]

	for j in range(1, n):
		x = 0
		for k in range(j):
			if a[k] <= a[j]:
				x = x + 1

		b.append(x)

	print(sum(b))
