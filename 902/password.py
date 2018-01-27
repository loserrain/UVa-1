import sys

while True:
	line = sys.stdin.readline()
	
	t = line.strip().split()

	n = int(t[0])
	s = t[1]

	l = len(s)

	x = {}

	max_occ = 0
	max_pass = ''
	for i in range(l-n+1):
		k = s[i:i+n]

		try:
			x[k] = x[k] + 1
		except:
			x[k] = 1

		if max_occ < x[k]:
			max_occ = x[k]
			max_pass = k

	print(max_pass)
