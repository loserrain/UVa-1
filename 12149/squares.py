import sys

for line in sys.stdin:
	n = int(line)

	if n == 0:
		break

	x = (n * (n + 1) * (2 * n + 1)) // 6

	print(x)

