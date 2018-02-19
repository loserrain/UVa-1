import sys

# Accepted

def count_diff(A, B, l):
	count = 0
	for i in range(l):
		if A[i] != B[i]:
			count = count + 1

	return count

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	father_numbers = []
	for j in range(n):
		line = sys.stdin.readline().strip()
		father_numbers.append(line)

	mother_number = sys.stdin.readline().strip()
	l = len(mother_number)

	print("Case %d:"%(i+1))
	for j in father_numbers:
		x = count_diff(j, mother_number, l)

		if x <= 1:
			print(j)
