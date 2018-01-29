import sys

# Accepted

for line in sys.stdin:
	n = int(line)

	t = (n * (n+1)) // 2
	s = t * t

	print(s)
