import sys
import math

t = int(sys.stdin.readline())

for i in range(t):
	k = int(sys.stdin.readline())
	x = int(math.sqrt(k))

	sols = []
	for j in range(2, x+1):
		if k % j == 0:
			sols.append(j)

			if len(sols) == 2:
				break

	print("Case #%d: %d = %d * %d = %d * %d"%(i+1, k, sols[0], k // sols[0], sols[1], k // sols[1]))
