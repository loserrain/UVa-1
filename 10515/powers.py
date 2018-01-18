import sys

for line in sys.stdin:
	x = line.strip().split()

	m = x[0]
	n = x[1]

	if m == '0' and n == '0':
		break 

	if len(n) < 2:
		p = int(n)
	else:
		p = int(n[-2:])

	q = int(m[-1])

	if q == 0:
		res = 0
	elif q == 1:
		res = 1
	elif q == 2:
		t = p % 4
		u = [2, 4, 8, 6]
		res = u[t - 1]
	elif q == 3:
		t = p % 4
		u = [3, 9, 7, 1]
		res = u[t - 1]
	elif q == 4:
		t = p % 2
		u = [4, 6]
		res = u[t - 1]
	elif q == 5:
		res = 5
	elif q == 6:
		res = 6
	elif q == 7:
		t = p % 4
		u = [7, 9, 3, 1]
		res = u[t - 1]
	elif q == 8:
		t = p % 4
		u = [8, 4, 2, 6]
		res = u[t - 1]
	elif q == 9:
		t = p % 2
		u = [9, 1]
		res = u[t - 1]

	print(res)
