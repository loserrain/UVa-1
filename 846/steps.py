import sys
import math

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip().split()

	x = int(line[0])
	y = int(line[1])

	diff = y - x

	d = math.sqrt(1 + 4 * diff)
	n = (-1 + d) / 2

	res = int(n)
	steps = 2 * res

	left_over = diff - res*(res+1)

	if left_over != 0:
		if left_over <= res + 1:
			steps = steps + 1

		if left_over > res + 1:
			steps = steps + 2

	print(steps)