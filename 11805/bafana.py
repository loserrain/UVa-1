import sys

t = int(sys.stdin.readline())
count = 0

for i in range(t):
	line = sys.stdin.readline().strip().split()
	count = count + 1

	n = int(line[0])
	k = int(line[1])
	p = int(line[2])

	x = p % n
	y = k + x

	if y > n:
		last_player = y % n
	else:
		last_player = y

	print("Case %d: %d"%(count, last_player))