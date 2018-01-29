import sys
import math

for line in sys.stdin:
	x = line.strip().split()

	d = int(x[0])
	a = int(x[1])
	t = x[2]

	r = 6440 + d

	if t == 'min':
		angle = math.radians(a / 60)
	else:
		angle = math.radians(a)

	if angle > math.pi:
		angle = 2 * math.pi - angle

	chord = 2 * r * math.sin(angle / 2)
	arc = angle * r

	print("%.6f %.6f"%(arc, chord))
