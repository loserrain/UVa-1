import sys
import math

for line in sys.stdin:
	x = [int(i) for i in line.strip().split()]
	x.sort()

	s = sum(x) / 2
	
	a = x[0]
	b = x[1]
	c = x[2]

	a_t = math.sqrt(s * (s - a) * (s - b) * (s - c))
	inradius = a_t / s
	circumradius = (a * b * c) / (4 * inradius * s)
	
	sunflower = math.pi * circumradius * circumradius - a_t
	roses = math.pi * inradius * inradius
	violets = a_t - roses

	print("%.4f %.4f %.4f"%(sunflower, violets, roses))
