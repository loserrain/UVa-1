import sys

#Accepted

def gcd(a, b):
	r = b % a

	while r != 0:
		b = a
		a = r
		r = b % a

	return a

n = int(sys.stdin.readline())

for i in range(n):
	line = sys.stdin.readline()

	m = [int(i) for i in line.strip().split()]
	l = len(m)

	res = 1
	for i in range(l):
		for j in range(i+1, l):
			t = gcd(m[i], m[j])

			if t > res:
				res = t

	print(res)