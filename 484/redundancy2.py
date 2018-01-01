import sys

# Accepted 

t = {}
elems = []

for line in sys.stdin:
	x = line.strip().split()

	for i in x:
		try:
			t[i] = t[i] + 1
		except:
			t[i] = 1
			elems.append(i)

for i in elems:
	print(i, t[i])
