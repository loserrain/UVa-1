import sys

while True:
	line1 = sys.stdin.readline()

	if line1 == '':
		break

	x = [int(i) for i in line1.strip().split()]

	line2 = sys.stdin.readline()

	y = [int(i) for i in line2.strip().split()]

	flag = True
	for i in range(5):
		if not((x[i] == 1 and y[i] == 0) or (x[i] == 0 and y[i] == 1)):
			flag = False
			break

	if flag == False:
		res = 'N'
	else:
		res = 'Y'

	print(res)
