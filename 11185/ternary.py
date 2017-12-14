import sys

def ternary(n):
	x = []

	while n != 0:
		x.append(n % 3)
		n = n // 3

	x.reverse()

	y = [str(i) for i in x]

	return ''.join(y)

for line in sys.stdin:
	t = int(line)

	if t < 0:
		break

	if t == 0:
		print(0)
	else:
		print(ternary(t))