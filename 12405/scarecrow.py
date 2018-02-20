import sys

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	line = sys.stdin.readline().strip()

	count = 0
	k = 1

	while k < (n + 1):
		if line[k-1] == '.':
			count = count + 1
			k = k + 3
		else:
			k = k + 1

	print("Case %d: %d"%(i+1, count))
