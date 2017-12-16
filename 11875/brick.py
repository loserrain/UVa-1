import sys

t = int(sys.stdin.readline())

count = 0

for i in range(t):
	line = sys.stdin.readline().strip().split()
	count = count + 1

	nums = [int(i) for i in line]
	l = len(nums)

	res =nums[l // 2]

	print("Case %d: %d"%(count, res))