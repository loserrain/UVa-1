import sys

def max_contiguous_sum(A, l):
	max_so_far = 0
	curr_max = 0

	for i in range(l):
		curr_max = curr_max + A[i]

		if curr_max < 0:
			curr_max = 0

		if max_so_far < curr_max:
			max_so_far = curr_max

	return max_so_far

for line in sys.stdin:
	t = line.strip().split()

	x = [int(i) for i in t]

	res = max_contiguous_sum(x, len(x))

	print(res)
