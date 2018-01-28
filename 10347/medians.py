import sys
import math

for line in sys.stdin:
	x = line.strip().split()

	a = float(x[0])
	b = float(x[1])
	c = float(x[2])

	s = (a + b + c) / 2

	area = (math.sqrt(s * (s - a) * (s - b) * (s - c)) * 4) / 3

	print("%.3f"%(area))
