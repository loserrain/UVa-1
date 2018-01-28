import sys

import sys
import math

for line in sys.stdin:
	x = [float(i) for i in line.strip().split()]

	s = sum(x) / 2

	a = x[0]
	b = x[1]
	c = x[2]

	a_t = math.sqrt(s * (s - a) * (s - b) * (s - c))
	inradius = a_t / s

	print("The radius of the round table is: %.3f"%(inradius))
