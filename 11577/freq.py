import sys
from collections import defaultdict

t = int(sys.stdin.readline())

for k in range(t):
	line = sys.stdin.readline().strip().lower()

	freq = defaultdict(int)

	for i in line:
		if i >= 'a' and i <= 'z':
			freq[i] = freq[i] + 1

	x = max(freq.values())

	res = []

	for k, v in freq.items():
		if v == x:
			res.append(k)

	final_res = ''.join(sorted(res))
	print(final_res)
