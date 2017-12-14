import sys

def knapsack(A, m, limit):
	t = []
	curr_max = 0

	for i in range(m+1):
		t.append([])
		for j in range(limit + 1):
			t[i].append(0)

	for i in range(1, m+1):
		for j in range(1, limit+1):
			t[i][j] = max(A[i-1])




if __name__ == '__main__':
	n = int(sys.stdin.readline())

	for i in range(n):
		m = int(sys.stdin.readline())

		t = sys.stdin.readline().strip().split()
		coins = [int(x) for x in t]

		sum_of_coins = sum(coins)

		print(knapsack(coins, m, sum_of_coins // 2))

