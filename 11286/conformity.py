import sys

while True:
	n = int(sys.stdin.readline())

	if n == 0:
		break

	m = {}
	for i in range(n):
		l = sys.stdin.readline().strip().split()
		x = [int(j) for j in l]
		s = [str(j) for j in sorted(x)]
		t = ','.join(s)

		try:
			m[t] = m[t] + 1
		except:
			m[t] = 1

	x = max(m.values())

	count = 0
	for i in m.values():
		if i == x:
			count = count + i

	print(count)
