import sys

def solve(n):
	n = n + 1

	while n % 2 == 0:
		n = n // 2

	return n == 1


for line in sys.stdin:
	n = int(line)

	if n == 0:
		break

	t = solve(n)

	if t:
		res = "Bob"
	else:
		res = "Alice"

	print(res)
