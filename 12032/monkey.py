import sys

t = int(sys.stdin.readline())

count = 0
for i in range(t):
	count = count + 1
	n = int(sys.stdin.readline())

	line = sys.stdin.readline()

	x = [int(i) for i in line.strip().split()]

	max_diff = x[0]
	diffs = [x[0]]

	for i in range(1, n):
		diffs.append(x[i] - x[i-1])

	max_diff = max(diffs)
	init_k = max_diff
	k = max_diff

	for i in diffs:
		if i == k:
			k = k - 1
		elif i > k:
			init_k = init_k + 1
			break

	print("Case %d: %d"%(count, init_k))