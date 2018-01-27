import sys
import operator

while True:
	n = int(sys.stdin.readline())
	line = sys.stdin.readline()
	x = [int(i) for i in line.strip().split()]
	m = int(sys.stdin.readline())

	t = {}

	for i in x:
		try:
			t[i] = t[i] + 1
		except:
			t[i] = 1

	sols = []
	for (k, v) in t.items():
		c = m - k

		if c == k:
			if v > 1:
				sols.append((k, c, 0))
		elif c > k:
			if c in t:
				sols.append((k, c, c - k))

	sols.sort(key=operator.itemgetter(2))
	sol = sols[0]

	print('Peter should buy books whose prices are %d and %d.'%(sol[0], sol[1]))
	
	t = sys.stdin.readline()

	if t == '':
		break

	print
