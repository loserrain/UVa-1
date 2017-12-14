import sys

def get_largest_length(A, n, s):
	max_len = 100000
	for i in range(n):
		t = i + 1
		sum_for_now = A[i]

		# print("Sum for now: ", sum_for_now)
		while sum_for_now < s and t < n:
			# print("Sum for now while: ", sum_for_now)
			sum_for_now = sum_for_now + A[t]
			t = t + 1

		if sum_for_now >= s and (t - i) < max_len:
			# print(t, i)
			max_len = t - i

	return max_len 

if __name__ == '__main__':
	for line in sys.stdin:
		t = line.strip().split()

		n = int(t[0])
		s = int(t[1])

		x = sys.stdin.readline()

		A = [int(i) for i in x.strip().split()]

		# print("A: ", A)
		l = get_largest_length(A, n, s)

		print(l)