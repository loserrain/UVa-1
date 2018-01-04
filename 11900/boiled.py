import sys

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline()
	x = line.strip().split()

	n = int(x[0])
	p = int(x[1])
	q = int(x[2])

	line = sys.stdin.readline()
	x = line.strip().split()

	total_weight = 0
	count = 0
	for j in x:
		w = int(j)

		if total_weight + w > q:
			break

		total_weight = total_weight + w
		count = count + 1

		if count == p:
			break

	print("Case %d: %d"%(i+1, count))
