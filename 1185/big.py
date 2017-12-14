import sys
import math

if __name__ == '__main__':
	x = [0]
	last = 0

	for i in range(1, 10000001):
		t = math.log10(i)
		last = last + t
		x.append(int(last))

	n = int(sys.stdin.readline())

	for i in range(n):
		k = int(sys.stdin.readline())

		print(x[k] + 1)
