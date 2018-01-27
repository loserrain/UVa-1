import sys
import operator

while True:
	n = int(sys.stdin.readline())
	line = sys.stdin.readline()
	x = [int(i) for i in line.strip().split()]
	m = int(sys.stdin.readline())

	x.sort()

	i = 0
	j = n - 1

	res_i = i
	res_j = j

	while i < j:
		if x[i] + x[j] < m:
			i = i + 1
		elif x[i] + x[j] > m:
			j = j - 1
		else:
			res_i = i
			res_j = j
			i = i + 1
			j = j - 1

	print('Peter should buy books whose prices are %d and %d.'%(x[res_i], x[res_j]))

	print

	t = sys.stdin.readline()

	if t == '':
		break

