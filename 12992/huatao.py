import sys

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	b = 1 + 2 * (n - 1)

	print("Case #%d: %d"%(i+1, b))
