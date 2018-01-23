import sys

while True:
	n = int(sys.stdin.readline())

	if n == 0:
		break

	mat = []
	for t in range(n):
		line = sys.stdin.readline().strip().split()
		x = [int(i) for i in line]

		mat.append(x)

	row_sums = [0] * n
	col_sums = [0] * n
	for t in range(n):
		for u in range(n):
			row_sums[t] = row_sums[t] + mat[t][u]
			col_sums[u] = col_sums[u] + mat[t][u]

	odd_row_count = 0
	odd_col_count = 0
	odd_row = 0
	odd_col = 0
	for t in range(n):
		if row_sums[t] % 2 != 0:
			odd_row_count = odd_row_count + 1
			odd_row = t

		if col_sums[t] % 2 != 0:
			odd_col_count = odd_col_count + 1
			odd_col = t

	if odd_row_count == 0 and odd_col_count == 0:
		res = "OK"
	elif odd_row_count == 1 and odd_col_count == 1:
		res = "Change bit (%d,%d)"%(odd_row+1, odd_col+1)
	else:
		res = "Corrupt"

	print(res)
	