import sys
import math

#Accepted

def counts_to_1(n):
	res = math.log(n, 2)

	return math.ceil(res)

count = 0
for line in sys.stdin:
	t = int(line)
	count = count + 1
	if t < 0:
		break

	print("Case %d: %d"%(count, counts_to_1(t)))

