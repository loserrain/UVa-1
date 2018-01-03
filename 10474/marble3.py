import sys

# Accepted 

count = 0

while True:
	count = count + 1

	t = sys.stdin.readline()
	x = t.strip().split()
	
	n = int(x[0])
	q = int(x[1])

	if n == 0 and q == 0:
		break

	print("CASE# " + str(count) + ":")

	marble_nums = []

	for i in range(n):
		a = int(sys.stdin.readline())
		marble_nums.append(a)

	marble_nums = sorted(marble_nums)

	marble_pos_map = {}

	index = 0
	for i in marble_nums:
		if i not in marble_pos_map:
			marble_pos_map[i] = index + 1
		index = index + 1

	for j in range(q):
		a = int(sys.stdin.readline())

		if a in marble_pos_map:
			print("%d found at %d"%(a, marble_pos_map[a]))
		else:
			print("%d not found"%(a))
