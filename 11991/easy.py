import sys

while True:
	line = sys.stdin.readline().strip().split()

	if not line:
		break
		
	n = int(line[0])
	m = int(line[1])

	line = sys.stdin.readline().strip().split()

	occurrences = {}

	for i in range(n):
		try:
			occurrences[line[i]].append(i)
		except:
			occurrences[line[i]] = [i]

	for i in range(m):
		line = sys.stdin.readline().strip().split()

		k = int(line[0])
		v = line[1]

		try:
			print(occurrences[v][k - 1] + 1)
		except:
			print(0)