import sys

if __name__ == '__main__':
	nums = [1, 1]

	for i in range(2, 51):
		nums.append(nums[i-1] + nums[i-2])

	while True:
		x = int(sys.stdin.readline())

		if x == 0:
			break

		print(nums[x])