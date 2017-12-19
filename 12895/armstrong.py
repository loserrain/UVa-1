import sys
import math

t = int(sys.stdin.readline())

for i in range(t):
	x = sys.stdin.readline().strip()
	num = int(x)

	n = (len(x))

	s = 0
	for i in x:
		s = s + math.pow(int(i), n)

	if s == num:
		print("Armstrong")
	else:
		print("Not Armstrong")