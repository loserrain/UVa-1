import sys

for line in sys.stdin:
	x = line.strip().split()
	a = int(x[0])
	b = int(x[1])

	if a == b:
		print(a)
	else:
		print(max(a, b))
		