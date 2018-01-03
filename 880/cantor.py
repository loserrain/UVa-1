import sys
import math

# Time limit exceeded 

def get_n(s):
	# y = n + 0.5
	y = math.sqrt(2*s + 0.25)

	return (y - 0.5)

def get_sum(n):
	return (n * (n + 1)) // 2


for line in sys.stdin:
	t = int(line)

	y = get_n(t)
	x = math.floor(y)

	if x == y:
		x = x - 1

	z = math.ceil(y)

	target = int(z + 1)

	s_floor = get_sum(x)

	term_no = t - s_floor

	denom = 0
	for i in range(term_no):
		denom = denom + 1

	numer = target - denom

	print("%d/%d"%(numer, denom))
