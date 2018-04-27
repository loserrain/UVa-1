import sys
from queue import PriorityQueue

while True:
	n = int(sys.stdin.readline())

	if n == 0:
		break

	line = sys.stdin.readline().strip().split()

	xs = [int(i) for i in line]

	ys = PriorityQueue()

	for i in xs:
		ys.put(i)

	if n == 1:
		print(0)
		continue

	
	# t = ys[0] + ys[1]
	# res = t
	# for i in range(2, n):
	# 	res = res + t + ys[i]
	# 	t = t + ys[i]

	t = 0
	cost = 0

	while ys.qsize() > 1:
		a = ys.get()
		b = ys.get()

		t = a + b

		cost = cost + t
		ys.put(t)

	print(cost)
