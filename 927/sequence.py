import sys
import math

def get_root(d, k):
	# y = n + 0.5
	# S = (n/2)[2*a + (n - 1)d]
	#
	# Putting, a = d
	# 2S = n(n+1)d
	# (2S/d) = y^2 - 0.25
	
	s = 2*k
	y = math.sqrt((s / d) + 0.25)
	n = y - 0.5

	return math.ceil(n)

def get_nth_term(p, l, n):
	s = 0
	for i in range(l+1):
		s = s + p[i] * math.pow(n, i)

	return int(s)

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline()

	l = int(line.strip().split()[0])
	p = [int(i) for i in line.strip().split()[1:]]
	d = int(sys.stdin.readline())
	k = int(sys.stdin.readline())

	n = get_root(d, k)
	t = get_nth_term(p, l, n)

	print(t)


