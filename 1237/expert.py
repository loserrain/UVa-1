import sys

t = int(sys.stdin.readline())

for i in range(t):
	d = int(sys.stdin.readline())

	if i != 0:
		print()
		
	cars = []
	for j in range(d):
		line = sys.stdin.readline().strip().split()
		car = (line[0], int(line[1]), int(line[2]))
		cars.append(car)

	q = int(sys.stdin.readline())

	for j in range(q):
		p = int(sys.stdin.readline())

		count = 0
		res = None

		for k in cars:
			if p >= k[1] and p <= k[2]:
				count = count + 1

				if count > 1:
					break

				res = k[0]

		if count == 0 or count > 1:
			print('UNDETERMINED')
		else:
			print(res)

