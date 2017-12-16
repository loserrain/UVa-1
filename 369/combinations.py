import sys

for line in sys.stdin:
	t = line.strip().split()

	n = int(t[0])
	m = int(t[1])

	if n == 0 and m == 0:
		break

	if m > (n - m):
		k = n - m
	else:
		k = m

	comb = 1
	for i in range(k):
		comb = comb * (n - i) // (i + 1)

	print("%d things taken %d at a time is %d exactly."%(n, m, comb))