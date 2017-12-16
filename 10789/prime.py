import sys
import math

def is_prime(n):
	if n == 1:
		return False

	x = int(math.sqrt(n)) + 1

	for i in range(2, x):
		if n % i == 0:
			return False

	return True


t = int(sys.stdin.readline())

count = 0
for i in range(t):
	line = sys.stdin.readline().strip()
	count = count + 1

	freq = {}

	for i in line:
		try:
			freq[i] = freq[i] + 1
		except:
			freq[i] = 1

	res = []

	for (k, v) in sorted(freq.items()):
		if is_prime(v):
			res.append(k)

	if len(res) == 0:
		res_str = "empty"
	else:
		res_str = ''.join(res)

	print("Case %d: %s"%(count, res_str))