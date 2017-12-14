import sys

t = int(sys.stdin.readline())

for i in range(t):
	a = sys.stdin.readline().strip().split()

	n = int(a[0])
	m = int(a[1])

	x = sys.stdin.readline().strip().split()
	y = sys.stdin.readline().strip().split()

	p = sorted([int(k) for k in x])
	q = sorted([int(k) for k in y])

	u = 0
	v = 0
	count = 0

	while u < n and v < m:
		if p[u] == q[v]:
			u = u + 1
			v = v + 1
		elif p[u] < q[v]:
			u = u + 1
			count = count + 1
		else:
			v = v + 1
			count = count + 1

	if u == n:
		count = count + (m - v)
	else:
		count = count + (n - u)

	print(count)
