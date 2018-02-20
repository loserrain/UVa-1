import sys

def fibo(n):
	a = 1
	b = 1

	for i in range(2, n+1):
		c = a + b
		a = b
		b = c

	return b

for line in sys.stdin:
	n = int(line)

	if n == 0:
		break

	res = fibo(n)
	print(res)
