import sys
import math

t = int(sys.stdin.readline())

for i in range(t):
	x = int(sys.stdin.readline())

	d = math.sqrt(1 + 4 * 2 * x)
	r = (-1 + d) / 2
	res = math.floor(r)

	print(res)
