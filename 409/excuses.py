import sys
import re

case_count = 0
while True:
	line = sys.stdin.readline()

	if line == '':
		break

	case_count = case_count + 1

	k = int(line.strip().split()[0])
	n = int(line.strip().split()[1])

	input_excuses = []

	for i in range(k):
		t = sys.stdin.readline().strip()
		input_excuses.append(t)

	excuses = set(input_excuses)

	max_count = 0
	res = {}
	for i in range(n):
		t = sys.stdin.readline().strip()
		s = re.sub('[^0-9a-zA-Z]', ' ', t)
		x = s.lower().split()

		count = 0
		for i in x:
			if i in excuses:
				count = count + 1

		res[t] = count

		if count > max_count:
			max_count = count
			
	print("Excuse Set #%d"%(case_count))

	for (k, v) in res.items():
		if v == max_count:
			print(k)

	print()
