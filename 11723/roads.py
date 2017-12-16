import sys
import math

count = 0
for line in sys.stdin:
	t = line.strip().split()
	count = count + 1

	r = int(t[0])
	n = int(t[1])

	if r == 0 and n == 0:
		break

	available_suffixes = 27 #blank + [A-Z]

	required_suffix = math.ceil(r / n)

	if required_suffix > available_suffixes:
		result = "impossible"
	else:
		result = str(required_suffix - 1)

	print("Case %d: %s"%(count, result))