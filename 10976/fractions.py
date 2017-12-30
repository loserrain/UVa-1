import sys

for line in sys.stdin:
	k = int(line)

	lower_lim = k + 1
	upper_lim = 2*k + 1

	sols = []
	for y in range(lower_lim, upper_lim):
		t = (k * y) / (y - k)

		x = int(t)

		if x == t:
			sols.append((x, y))

	print(len(sols))
	for sol in sols:
		print("1/%d = 1/%d + 1/%d"%(k, sol[0], sol[1]))
