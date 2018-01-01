import sys

words = {}
while True:
	line = sys.stdin.readline()

	t = line.strip().split()

	if len(t) == 0:
		break

	words[t[1]] = t[0]

while True:
	line = sys.stdin.readline()

	if line == '':
		break

	t = line.strip()

	try:
		m = words[t]
	except:
		m = 'eh'

	print(m)
