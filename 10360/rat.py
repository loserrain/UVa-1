import sys

# Wrong Answer 

t = int(sys.stdin.readline())

GRID_SIZE = 10

for count in range(t):
	d = int(sys.stdin.readline())
	n = int(sys.stdin.readline())

	# print("d, n: ", d, n)

	killed = []
	for i in range(GRID_SIZE):
		t = []
		for j in range(GRID_SIZE):
			t.append(0)
		killed.append(t)

	for i in range(n):
		line = sys.stdin.readline()
		u = line.strip().split()

		x = int(u[0])
		y = int(u[1])
		pop = int(u[2])

		# print("x, y, pop: ", x, y, pop)

		x_min = max(x - d, 0)
		x_max = min(x + d, GRID_SIZE-1)

		# print("x lims: ", x_min, x_max)

		y_min = max(y - d, 0)
		y_max = min(y + d, GRID_SIZE-1)

		# print("y lims: ", y_min, y_max)
		
		for p in range(x_min, x_max+1):
			for q in range(y_min, y_max+1):
				# print("p, q ", p, q)
				killed[p][q] = killed[p][q] + pop

	# print(killed)

	max_kill = 0
	max_kill_x = 0
	max_kill_y = 0
	for p in range(GRID_SIZE):
		for q in range(GRID_SIZE):
			if killed[p][q] > max_kill:
				max_kill_x = p
				max_kill_y = q
				max_kill = killed[p][q]

	print(max_kill_x, max_kill_y, max_kill)
