import sys

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline()

	n = int(line)
	x = (n - 1) // 2
	s = 2*(x * x) + n

	print(s)
