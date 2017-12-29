import itertools

# ACCEPTED

t = int(input())

count = 0
for i in range(t):
	count = count + 1
	
	x = input().strip()
	l = sorted(list(x))

	y = set()
	for p in itertools.permutations(l):
		y.add(''.join(p))

	z = sorted(list(y))

	for i in z:
		print(i)

	print()
