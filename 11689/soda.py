import sys

def get_total_soda(n, c):
	count = 0
	while n >= c:
		count = count + (n // c)
		n = (n % c) + (n // c)

	return count

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip().split()

	e = int(line[0])
	f = int(line[1])
	c = int(line[2])

	t = e + f

	res = get_total_soda(t, c)

	print(res)
