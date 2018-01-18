import sys

while True:
	stop_flag = False

	lower = []
	higher = []
	while True:
		x = int(sys.stdin.readline())

		if x == 0:
			stop_flag = True
			break

		response = sys.stdin.readline().strip()

		if response == 'too high':
			higher.append(x)
		elif response == 'too low':
			lower.append(x)
		else:
			ans = x
			break

	if stop_flag == True:
		break

	flag = True

	for i in lower:
		if i >= ans:
			flag = False
			break

	for i in higher:
		if i <= ans:
			flag = False
			break

	if flag == True:
		res = 'Stan may be honest'
	else:
		res = 'Stan is dishonest'

	print(res)
