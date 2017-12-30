import sys

z = 0
for line in sys.stdin:
	t = int(line)

	if t == 0:
		break

	if z > 0:
		print()
	z = z + 1

	upper_limit = (98765 // t) + 1
	count = 0

	for i in range(1234, upper_limit):
		j = i * t

		if i < 10000 or j < 10000:
			used = set([0])
		else:
			used = set()

		x = i
		y = j

		while i != 0:
			used.add(i % 10)
			i = i // 10

		while j != 0:
			used.add(j % 10)
			j = j // 10

		flag = True
		for k in range(10):
			if k not in used:
				flag = False
				break

		if flag == True:
			print("%0.5d / %0.5d = %d"%(y, x, t))
			count = count + 1

	if count == 0:
		print("There are no solutions for %d."%(t))


