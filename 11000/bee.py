import sys

for line in sys.stdin:
	n = int(line)

	if n == -1:
		break

	f = 1
	m = 0

	for i in range(n):
		init_m = m
		m = f + init_m
		f = init_m + 1

	print(m, f + m)
