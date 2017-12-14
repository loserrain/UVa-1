import sys

def get_permutations(x):
	if len(x) <= 1:
		return x
	else:
		for i in get_permutations(x[1:]):
			return x[0] + i
		

if __name__ == '__main__':
	n = int(sys.stdin.readline())

	for i in range(n):
		t = sys.stdin.readline().strip()

		res = get_permutations(sorted(list(t)))
		print(res)
		print()