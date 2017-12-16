import sys
import math

#Accepted

def counts_to_1(n):
	count = 0
	while n != 1:
		n = math.ceil(n / 2)
		count = count + 1

	return count

count = 0
for line in sys.stdin:
	t = int(line)
	count = count + 1

	if t < 0:
		break

	print("Case %d: %d"%(count, counts_to_1(t)))

