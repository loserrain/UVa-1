import sys

count = 0 
while True:
	line = sys.stdin.readline()

	n = int(line)

	if n == 0:
		break

	count = count + 1
	print("Case %d:"%(count))

	nos = []
	for i in range(n):
		nos.append(int(sys.stdin.readline()))

	sums = []
	for i in range(len(nos)):
		for j in range(i+1, len(nos)):
			sums.append(nos[i] + nos[j])

	sums = sorted(sums)
	len_sums = len(sums)

	# print(sums)

	m = int(sys.stdin.readline())

	for i in range(m):
		q = int(sys.stdin.readline())

		l = 0
		h = len(sums)

		while l < h:
			mid = (l + h) // 2

			if q == sums[mid]:
				break
			elif q < sums[mid]:
				h = mid - 1
			else:
				l = mid + 1

		min_diff = abs(q - sums[mid])
		closest_sum = sums[mid]

		for i in range(mid+1, len_sums):
			t = abs(q - sums[i])

			if t < min_diff:
				min_diff = t
				closest_sum = sums[i]
			else:
				break

		for i in range(mid-1, -1, -1):
			t = abs(q - sums[i])

			if t < min_diff:
				min_diff = t
				closest_sum = sums[i]
			else:
				break

		print("Closest sum to %d is %d."%(q, closest_sum))