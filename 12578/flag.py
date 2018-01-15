import sys
import math

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline()

	l = int(line)

	w = 0.6 * l
	r = 0.2 * l

	p = math.acos(-1)

	total = l * w
	a1 = p * r * r
	a2 = total - a1

	print("%.2f %.2f"%(a1, a2))