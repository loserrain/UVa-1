import sys

for line in sys.stdin:
	n = int(line)

	t = ((n-2)*(n-1)) // 2

	print(t)