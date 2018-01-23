import sys

while True:
	n = int(sys.stdin.readline())

	if n == 0:
		break

	discarded = []

	x = list(range(1, n + 1))

	while(len(x) > 1):
		t = x.pop(0)
		discarded.append(" " + str(t))

		u = x.pop(0)
		x.append(u)

	print("Discarded cards:%s"%(','.join(discarded)))
	print("Remaining card: %d"%(x[0]))
