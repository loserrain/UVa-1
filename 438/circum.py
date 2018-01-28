import sys
import math

p = 3.141592653589793

def distance(a, b):
	return math.sqrt(math.pow((a[0] - b[0]), 2) + math.pow((a[1] - b[1]), 2))

for line in sys.stdin:
	t = [float(i) for i in line.strip().split()]

	x = (t[0], t[1])
	y = (t[2], t[3])
	z = (t[4], t[5])

	a = distance(x, y)
	b = distance(y, z)
	c = distance(z, x)

	s = (a + b + c) / 2
	a_t = math.sqrt(s * (s - a) * (s - b) * (s - c))
	circumradius = (a * b * c) / (4 * a_t)

	circumference = 2 * p * circumradius
	
	print("%.2f"%(circumference))
