import sys

t = int(sys.stdin.readline())

for i in range(t):
	s = 'MARGARITA'

	x = sys.stdin.readline().strip()

	counts = {}

	for i in s:
		counts[i] = 0

	for i in x:
		try:
			counts[i] = counts[i] + 1
		except:
			pass

	temp = counts
	temp['A'] = temp['A'] // 3
	temp['R'] = temp['R'] // 2

	print(min(temp.values()))
