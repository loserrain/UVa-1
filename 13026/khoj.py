import sys

# Wrong approach. Difference can only be in one location or less. 
# Hence, don't need the LCD

def largest_common_subsequence(A, B):
	m = len(A)
	n = len(B)

	T = [[0 for i in range(n+1)] for j in range(m+1)]

	for i in range(1, m+1):
		for j in range(1, n+1):
			if A[i-1] == B[j-1]:
				T[i][j] = T[i-1][j-1] + 1
			else:
				T[i][j] = max(T[i-1][j], T[i][j-1])

	return T[m][n]

t = int(sys.stdin.readline())

for i in range(t):
	n = int(sys.stdin.readline())

	father_numbers = []
	for j in range(n):
		line = sys.stdin.readline().strip()
		father_numbers.append(line)

	mother_number = sys.stdin.readline().strip()
	l = len(mother_number)

	for j in father_numbers:
		x = largest_common_subsequence(mother_number, j)

		if x >= l - 1:
			print(j)
