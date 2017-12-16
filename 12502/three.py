import sys

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip().split()

	x = int(line[0])
	y = int(line[1])
	z = int(line[2])

	share_a = ((2*x - y) * z) // (x + y)
	
	print(share_a)