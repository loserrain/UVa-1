import sys
import math

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip().split()

	d = int(line[0])
	l = int(line[1])

	a = l / 2
	c = d / 2

	b = math.sqrt(a*a - c*c)

	area = math.pi * a * b

	print("%.3f"%(area))