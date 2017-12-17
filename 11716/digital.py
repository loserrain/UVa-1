import sys
import math

t = int(sys.stdin.readline())

for i in range(t):
	s = sys.stdin.readline().strip()
	l = len(s)

	x = int(math.sqrt(l))

	if l != x*x:
		print("INVALID")
		continue

	res = []
	for i in range(x):
		for j in range(i, l, x):
			res.append(s[j])

	print(''.join(res))
