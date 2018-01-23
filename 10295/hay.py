import sys

line = sys.stdin.readline().strip().split()

m = int(line[0])
n = int(line[1])

words = {}
for i in range(m):
	line = sys.stdin.readline().strip().split()
	words[line[0]] = int(line[1])

for i in range(n):
	score = 0

	while True:
		line = sys.stdin.readline().strip()

		if line == ".":
			break

		t = line.split()

		for j in t:
			try:
				score = score + words[j]
			except:
				pass

	print(score)