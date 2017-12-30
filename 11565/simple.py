import sys

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip().split()

	A = int(line[0])
	B = int(line[1])
	C = int(line[2])

	flag = False
	for x in range(-22, 23):
		for y in range(-100, 101):
			for z in range(-100, 101):
				if x != y and z != x and z != y:
					if x+y+z == A and x*y*z == B and x*x + y*y + z*z == C:
						flag = True
						break
			if flag:
				break
		if flag:
			break

	if flag:
		print(x, y, z)
	else:
		print("No solution.")
