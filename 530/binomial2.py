import sys

for line in sys.stdin:
	t = line.strip().split()

	n = int(t[0])
	k = int(t[1])

	if n == 0 and k == 0:
		break

	if k > (n-k):
		k = n - k

	C = 1

	for i in range(k):
		C = (C * (n - i)) // (i + 1)

	print(C)