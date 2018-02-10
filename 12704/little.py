import sys
import math

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip().split()

	x = int(line[0])
	y = int(line[1])
	r = int(line[2])

	min_d = r - math.sqrt(x*x + y*y)
	max_d = r + math.sqrt(x*x + y*y)

	print("%.2f %.2f"%(min_d, max_d))
