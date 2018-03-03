import sys

t = int(sys.stdin.readline())

for i in range(t):
	lines = []

	for j in range(5):
		t = sys.stdin.readline().strip()
		lines.append(t)

	for j in range(5):
		t = lines[j]

		lt_ind = -1
		gt_ind = -1
		bar_ind = -1

		for k in range(5):
			if t[k] == '<':
				lt_ind = k

			if t[k] == '>':
				gt_ind = k

			if t[k] == '|':
				bar_ind = k

		if lt_ind != -1:
			if lt_ind < bar_ind:
				res = "No Ball"
			else:
				res = "Thik Ball"

			break
		elif gt_ind != -1:
			if gt_ind > bar_ind:
				res = "No Ball"
			else:
				res = "Thik Ball"

			break

	print("Case %d: %s"%(i+1, res))
	
	sys.stdin.readline().strip()
