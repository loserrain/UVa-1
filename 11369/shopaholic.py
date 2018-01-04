import sys

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	line = sys.stdin.readline()
	nums = [int(i) for i in line.strip().split()]
	nums = sorted(nums, reverse=True)

	discount = 0
	for j in range(2, n, 3):
		discount = discount + nums[j]

	print(discount)
