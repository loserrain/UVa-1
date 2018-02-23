import sys

rems = [56, 96, 36, 76, 16]

t = int(sys.stdin.readline())

for i in range(t):
	n = sys.stdin.readline().strip()

	if n == '0':
		res = 1
	elif n == '1':
		res = 66
	else:
		x = int(n[-1])

		res = rems[(x - 2) % 5]

	print(res)

