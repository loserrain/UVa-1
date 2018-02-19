import sys

t = int(sys.stdin.readline())

for k in range(t):
	line = sys.stdin.readline().strip().split()
	x = [int(i) for i in line]

	flag = True
	for i in x:
		if i == 0:
			flag = False
			break

	if flag == True:
		res = "Yes"
	else:
		res = "No"

	print("Set #%d: %s"%(k+1, res))
	