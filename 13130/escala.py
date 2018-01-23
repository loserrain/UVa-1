import sys

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline()

	x = [int(i) for i in line.strip().split()]
	x.sort()

	if x == [1, 2, 3, 4, 5] or x == [2, 3, 4, 5, 6]:
		print('Y')
	else:
		print('N')
