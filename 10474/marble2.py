import sys

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

	queries = []
	for j in range(q):
		a = int(sys.stdin.readline())
		queries.append(a)

	marble_nums = sorted(marble_nums)

	for i in queries:
		try:
			res = marble_nums.index(i)
		except:
			res = -1
		
		if res == -1:
			print(i, "not found")
		else:
			print(i, "found at", res + 1)
