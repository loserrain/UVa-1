import sys
import math

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip().split()

	n = int(line[0])
	p = float(line[1])
	i = int(line[2])

	if p == 0:
		res = 0.0
	else:
		c = 1 - p

		res = (p * math.pow(c, i - 1)) / (1.0 - math.pow(c, n))

	print("%.4f"%(res)) 