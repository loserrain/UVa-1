import math
import sys

def solve_quadratic(a, b, c):
	D = b*b - 4*a*c
	x = (-b + math.sqrt(D)) / 2

	return x

case_count = 0
for line in sys.stdin:
	n = int(line)

	if n == 0:
		break

	case_count = case_count + 1
	t = solve_quadratic(1, -3, -2*n)

	res = int(math.ceil(t))
	print("Case %d: %d"%(case_count, res))