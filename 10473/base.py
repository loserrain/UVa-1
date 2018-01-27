import sys
import math

conversion = {
	'A': 10,
	'B': 11,
	'C': 12,
	'D': 13,
	'E': 14,
	'F': 15
}

conversion2 = {
	10: 'A',
	11: 'B',
	12: 'C',
	13: 'D',
	14: 'E',
	15: 'F',
}

def get_hexadecimal_repr(n):
	s = []

	while n > 0:
		x = n % 16

		if x > 10:
			s.append(conversion2[x])
		else:
			s.append(str(x))

		n = n // 16

	s.reverse()

	return "0x" + ''.join(s)


def get_decimal_repr(n):
	t = n[:1:-1]

	x = 0

	count = 0
	for i in t:
		if i >= '0' and i <= '9':
			y = int(i) * int(math.pow(16, count))
		else:
			y = conversion[i] * int(math.pow(16, count))

		x = x + y
		count = count + 1

	return x

def is_hexadecimal(n):
	return n.startswith("0x")

while True:
	line = sys.stdin.readline().strip()

	if line == "-1":
		break

	if is_hexadecimal(line):
		res = get_decimal_repr(line)
	else:
		res = get_hexadecimal_repr(int(line))

	print(res)