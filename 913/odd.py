import sys

for line in sys.stdin:
	t = int(line)

	n = (t + 1) // 2

	x = 2 * n * n - 1
	res = x + (x - 2) + (x - 4)

	print(res)