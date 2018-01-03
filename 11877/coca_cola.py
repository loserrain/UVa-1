import sys

def get_n_bottles(n):
	t = 0

	while n >= 3:
		t = t + (n // 3)
		n = (n // 3) + (n % 3)

	if n == 2:
		t = t + 1

	return t

for line in sys.stdin:
	t = int(line)

	if t == 0:
		break

	n = get_n_bottles(t)
	
	print(n)

