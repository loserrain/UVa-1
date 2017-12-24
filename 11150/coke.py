import sys

for line in sys.stdin:
	n = int(line)

	s = n

	while n >= 3:
		s = s + (n // 3)
		n = (n // 3) + (n % 3)

	if n == 2:
		s = s + 1

	print(s)