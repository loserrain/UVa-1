import sys

count = 0

def binary_search(A, k, l, h):
	mid = (l + h) // 2

	# print("mid: ", mid)
	# print("k: ", k)
	# print("A_mid: ", A[mid])

	if l > h:
		return -1

	if A[mid] == k:
		while A[mid] == k:
			mid = mid - 1
		return (mid + 1)
	elif A[mid] > k:
		return binary_search(A, k, l, mid - 1)
	elif A[mid] < k:
		return binary_search(A, k, mid + 1, h)


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
		res = binary_search(marble_nums, i, 0, n)

		if res == -1:
			print(i, "not found")
		else:
			print(i, "found at", res + 1)

