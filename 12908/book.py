import sys
import math

# Time limit exceeded

def get_nearest_n_above(S):
	# y = n + 0.5
	y = math.sqrt(2*S + 0.25)
	return math.floor(y - 0.25) + 1

def get_sum_till_N(n):
	return (n * (n+1)) // 2

while True:
	n = int(sys.stdin.readline())

	if n == 0:
		break

	nearest_n = get_nearest_n_above(n)
	sum_till_nearest_n = get_sum_till_N(nearest_n)

	# print("nearest:", nearest_n)
	# print("sum nearest:", sum_till_nearest_n)

	missing_num = sum_till_nearest_n - n

	print(missing_num, nearest_n)