def get_maximum_sum(A):
	max_sum = A[0]
	max_sum_start = 0
	max_sum_end = 0
	max_sum_path = 0

	max_sum_ending = A[0]
	max_sum_ending_start = 0
	max_sum_ending_end = 0
	max_sum_ending_path = 0

	index = 0
	for i in A[1:]:
		index = index + 1
		if i > max_sum_ending + i:
			max_sum_ending = i
			max_sum_ending_start = index
			max_sum_ending_end = index
			max_sum_ending_path = 0
		else:
			max_sum_ending = max_sum_ending + i
			max_sum_ending_end = index
			max_sum_ending_path = max_sum_ending_path + 1

		if max_sum < max_sum_ending:
			max_sum = max_sum_ending
			max_sum_start = max_sum_ending_start
			max_sum_end = max_sum_ending_end
			max_sum_ending_path = max_sum_ending_path


		if max_sum == max_sum_ending and max_sum_ending_path > max_sum_path:
			max_sum = max_sum_ending
			max_sum_start = max_sum_ending_start
			max_sum_end = max_sum_ending_end
			max_sum_ending_path = max_sum_ending_path

	return (max_sum, max_sum_start, max_sum_end)


if __name__ == '__main__':
	print(get_maximum_sum([-2, -3, 4, -1, -2, 1, 5, -3]))
	print(get_maximum_sum([-2, -3, 4, 1, -2, -11, 2, 3]))
	print(get_maximum_sum([-2, -3, 4, -1, -2, 1, 5, -3]))