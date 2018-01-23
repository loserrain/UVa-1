import sys

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip().split()

	a = int(line[0])
	b = int(line[1])
	c = int(line[2])
	d = int(line[3])

	if a == b and b == c and c == d:
		res = 'square'
	elif (a == b and c == d) or (a == c and b == d) or (a == d and b == c):
		res = 'rectangle'
	elif (a < (b + c + d)) and (b < (a + c + d)) and (c < (a + b + d)) and (d < (a + b + c)):
		res = 'quadrangle'
	else:
		res = 'banana'

	print(res)
