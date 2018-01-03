import sys
import math

LIMIT = math.pow(2, 31) - 1

for line in sys.stdin:
	t = line.strip().split()

	f = int(t[0])
	op = t[1]
	s = int(t[2])

	print(line.strip())

	if f > LIMIT:
		print("first number too big")

	if s > LIMIT:
		print("second number too big")

	if (f > LIMIT and s != 0) or (s > LIMIT and f != 0):
		print("result too big")
	else:
		if op == '+':
			result = f + s
		elif op == '*':
			result = f * s

		if result > LIMIT:
			print("result too big")
