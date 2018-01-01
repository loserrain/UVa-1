import sys
import collections

t = collections.OrderedDict()

for line in sys.stdin:
	x = line.strip().split()

	for i in x:
		try:
			t[i] = t[i] + 1
		except:
			t[i] = 1

	res = t.items()

for i in res:
	print(i[0], i[1])
