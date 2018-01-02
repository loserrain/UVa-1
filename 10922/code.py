import sys

def sum_of_digits(n):
	s = 0

	while n > 0:
		s = s + n % 10
		n = n // 10

	return s

for line in sys.stdin:
	t = line.strip()
	if t == '0':
		break

	depth = 0

	x = 0
	for i in t:
		x = x + int(i)

	depth = depth + 1

	while x > 9:
		x = sum_of_digits(x)
		depth = depth + 1

	if x == 9:
		print("%s is a multiple of 9 and has 9-degree %d."%(t, depth))
	else:
		print("%s is not a multiple of 9."%(t))
