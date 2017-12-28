import sys

if __name__ == '__main__':
	t = int(sys.stdin.readline())

	for i in range(t):
		line = sys.stdin.readline().strip().split()

		m = int(line[0])
		w = int(line[1])

		line = sys.stdin.readline().strip().split()

		x = [int(i) for i in line]
		x = sorted(x)

		total = 0
		count = 0
		for i in x:
			if total + i < w:
				total = total + i
				count = count + 1

		print(count)
