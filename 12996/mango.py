import sys

t = int(sys.stdin.readline())

for i in range(t):
	line = sys.stdin.readline().strip().split()

	n = int(line[0])
	l = int(line[1])

	line = sys.stdin.readline().strip().split()
	mango = [int(x) for x in line]

	line = sys.stdin.readline().strip().split()
	limit = [int(x) for x in line]

	s = sum(mango)

	if s > l:
		res = "No"
	else:
		flag = True

		for j in range(n):
			if mango[j] > limit[j]:
				flag = False
				break

		if flag:
			res = "Yes"
		else:
			res = "No"

	print("Case %d: %s"%(i+1, res))
