import sys

count = 0
while True:
	n = int(sys.stdin.readline())
	line = sys.stdin.readline().strip().split()
	x = [int(i) for i in line]

	count = count + 1

	max_start_at_index = []

	for i in x:
		max_start_at_index.append(i)

	for i in range(n):
		curr_prod = x[i]

		for j in range(i+1, n):
			curr_prod = curr_prod * x[j]

			if curr_prod > max_start_at_index[i]:
				max_start_at_index[i] = curr_prod

	max_prod = max(max(max_start_at_index), 0)

	print("Case #%d: The maximum product is %d."%(count, max_prod))
	print()

	t = sys.stdin.readline()
	if t == '':
		break
