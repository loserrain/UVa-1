import sys

while True:
	line = sys.stdin.readline()
	t = line.strip().split()

	n = int(t[0])
	d = int(t[1])
	r = int(t[2])

	if n == 0 and d == 0 and r == 0:
		break

	line = sys.stdin.readline()
	morning = [int(i) for i in line.strip().split()]

	line = sys.stdin.readline()
	afternoon = [int(i) for i in line.strip().split()]

	morning = sorted(morning)
	afternoon = sorted(afternoon, reverse=True)

	total = 0
	for i in range(n):
		x = morning[i] + afternoon[i]
		
		if x > d:
			total = total + (x - d)

	overtime = total * r

	print(overtime)
