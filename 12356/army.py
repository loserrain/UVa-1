import sys

while True:
	line = sys.stdin.readline().strip().split()

	s = int(line[0])
	b = int(line[1])

	if s == 0 and b == 0:
		break

	left = [-2]
	right = [-2]

	for i in range(1, s+1):
		left.append(i-1)
		right.append(i+1)

	left[1] = -1
	right[s] = -1

	for i in range(b):
		line = sys.stdin.readline().strip().split()

		l = int(line[0])
		r = int(line[1])

		x = right[r]
		y = left[l]

		# print("x,y ", x, y)

		left[right[r]] = left[l]
		if left[l] == -1:
			left_res = "*"
		else:
			left_res = str(left[l])

		right[left[l]] = right[r]
		if right[r] == -1:
			right_res = "*"
		else:
			right_res = str(right[r])


		# print(left)
		# print(right)

		res = "%s %s"%(left_res, right_res)

		print(res)

	print("-")